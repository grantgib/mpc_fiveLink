%% setting up the path
clear; close all; clc;
restoredefaultpath; matlabrc;

cur = pwd;
addpath(genpath(cur));

export_path = fullfile(cur, 'gen/stepUp');
utilities.init_path(export_path);
% if load_path is empty, it will not load any expression.
% if non-empty and assigned valid directory, then symbolic expressions will
% be loaded  from the MX binary files from the given directory.
load_path = [];%fullfile(cur, 'gen/sym');
delay_set = false; % Set to false when running for the first time
%what is delay_set doing?; calculating the symbolic expressions of the dynamics of the rigid body system
%setting to false will not calculate the expressions
COMPILE = true;


%% define variables
args={};
args.x_step=0.20;
args.y_step=0.15;
args.x_del=args.x_step+0.5*args.x_step;
args.r_buff=0.1*args.x_step;
COMPILE=1;
%% load model
% Load model
rabbit = RABBIT('urdf/five_link_walker.urdf');
if isempty(load_path)
    rabbit.configureDynamics('DelayCoriolisSet',delay_set);
else
    % load symbolic expression for the dynamics equations
    rabbit.loadDynamics(load_path, delay_set);
end

%% load hybrid system

system=hybridSystemModel.LoadSystem(rabbit,load_path,args);
bounds=hybridSystemModel.domains.constraintFuncs.GetBounds(rabbit,args);
nlp=opt.LoadOpt(system,bounds,args);
%% compile objective and system equations
if COMPILE
compileObjective(nlp,[],[],export_path);
compileConstraint(nlp,[],[],export_path);
end

%% Create Ipopt solver
addpath(genpath(export_path));
nlp.update;
solver = IpoptApplication(nlp);
solver.Options.ipopt.max_iter = 250; %800  %cutting down the number of iterations//////////////////
% solver.Options.ipopt.tol = 5e-1;
% solver.Options.ipopt.compl_inf_tol = 5e+4;
% solver.Options.ipopt.constr_viol_tol = 5e-4;
% solver.Options.ipopt.dual_inf_tol = 1e+4 ;
% Run Optimization
old=rand(2468,1);
tic
[sol, info] = optimize(solver,old); 
toc
[tspan, states, inputs, params] = exportSolution(nlp, sol);
gait = struct(... 
    'tspan', tspan,... 
    'states', states,... 
    'inputs', inputs,...                                                                                                                        
    'params', params);
%% check costs & constraints
checkConstraints(nlp, sol, 1e-10, 'constraintCheck.txt');
checkCosts(nlp, sol,'checkCosts.txt');
open('constraintCheck.txt')
open('checkCosts.txt')
%% save solution
 SAVE_SOLUTION = 1;
    CHARACTER_NAME = '';
    MODEL_NAME='Rabbit';
    if SAVE_SOLUTION
        data_name = char(datetime('now','TimeZone','local','Format','d-MMM-y-HH-mm-ssZ'));%'local/longer_double_support_wider_step_dummy';

        name = [CHARACTER_NAME, '_', data_name, '_', MODEL_NAME];
 
        save_dir = fullfile(cur, 'trajectories\stepUp');
 
        if ~exist(save_dir,'dir'), mkdir(save_dir); end

        if info.status ~= -1
            file_name = [name, '.mat'];
            fprintf('Saving gait %s\n', file_name);
        else
            file_name = [name, '_failed.mat'];
            fprintf('Saving (failed) gait %s\n', file_name);
        end

        save(fullfile(save_dir, file_name), 'gait', 'sol', 'info', 'bounds');
    end


%% Animation
q_log_R = states{1}.x; % Right stance
q_log_L = q_log_R([1:3,6:7,4:5],:); % symmetric Left stance
q_log_L(1:3,:) = q_log_L(1:3,:) + repmat((q_log_R(1:3,end)-q_log_R(1:3,1)),1,size(q_log_L,2));

t_log_R = tspan{1};
t_log_L = t_log_R + t_log_R(end);

q_log = [q_log_R, q_log_L];
t_log = [t_log_R, t_log_L];

anim = Animator.FiveLinkAnimator(t_log, q_log);
anim.pov = Animator.AnimatorPointOfView.West;
anim.Animate(true);
anim.isLooping = false;
anim.updateWorldPosition = true;
anim.endTime = 20;
conGUI = Animator.AnimatorControls();
conGUI.anim = anim;

