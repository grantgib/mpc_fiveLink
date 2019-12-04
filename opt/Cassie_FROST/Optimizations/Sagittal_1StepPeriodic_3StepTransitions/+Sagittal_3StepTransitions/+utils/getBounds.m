function bounds = getBounds(robot)

% Get Bounds
model_bounds = robot.getLimits();
bounds = struct();

model_bounds.states.x.lb(1:3) = [-10,-10,-10];
model_bounds.states.x.ub(1:3) = [10,10,10];

model_bounds.states.x.lb(4:6) = deg2rad(-5);
model_bounds.states.x.ub(4:6) = deg2rad(5);

model_bounds.states.x.lb([7,8,14,15]) = deg2rad(-5);
model_bounds.states.x.ub([7,8,14,15]) = deg2rad(5);

model_bounds.inputs.Control.u.lb([5,10]) = -0.05;
model_bounds.inputs.Control.u.ub([5,10]) = 0.05;
% 
% model_bounds.average_pitch.lb = deg2rad(0);
% model_bounds.average_pitch.ub = deg2rad(0);
% 
% model_bounds.average_yaw.lb = deg2rad(0);
% model_bounds.average_yaw.ub = deg2rad(0);
% 
% model_bounds.average_hip_abduction.lb = deg2rad(0);
% model_bounds.average_hip_abduction.ub = deg2rad(0);
% 
% model_bounds.average_hip_rotation.lb = deg2rad(0);
% model_bounds.average_hip_rotation.ub = deg2rad(0);
% 
% model_bounds.step_length.lb = 0.2;
% model_bounds.step_length.ub = 0.2;

model_bounds.foot_clearance.lb = 0.15;
model_bounds.foot_clearance.ub = 0.155;

model_bounds.distance_pelvis_to_stance_toe.lb = 0.5;
model_bounds.distance_pelvis_to_stance_toe.ub = 1.0;

model_bounds.toe_to_toe_width.lb = -0.40; % 0.27 nominal width
model_bounds.toe_to_toe_width.ub = -0.10;

%% Right Stance
bounds.RightStance1 = model_bounds;

bounds.RightStance1.time.t0.lb = 0;
bounds.RightStance1.time.t0.ub = 0;
bounds.RightStance1.time.t0.x0 = 0;

bounds.RightStance1.time.tf.lb = 0.4;
bounds.RightStance1.time.tf.ub = 0.4;
bounds.RightStance1.time.tf.x0 = 0.4;

bounds.RightStance1.time.duration.lb = 0.4;
bounds.RightStance1.time.duration.ub = 0.4;
bounds.RightStance1.time.duration.x0 = 0.4;

bounds.RightStance1.inputs.ConstraintWrench.fRightToeBottom.lb = -10000;
bounds.RightStance1.inputs.ConstraintWrench.fRightToeBottom.ub = 10000;
bounds.RightStance1.inputs.ConstraintWrench.fRightToeBottom.x0 = 100;

bounds.RightStance1.inputs.ConstraintWrench.ffixedKneeSpring.lb = -10000;
bounds.RightStance1.inputs.ConstraintWrench.ffixedKneeSpring.ub = 10000;
bounds.RightStance1.inputs.ConstraintWrench.ffixedKneeSpring.x0 = 100;

bounds.RightStance1.inputs.ConstraintWrench.ffourBar.lb = -10000;
bounds.RightStance1.inputs.ConstraintWrench.ffourBar.ub = 10000;
bounds.RightStance1.inputs.ConstraintWrench.ffourBar.x0 = 100;

bounds.RightStance1.params.pfixedKneeSpring.lb = -0*ones(2,1);
bounds.RightStance1.params.pfixedKneeSpring.ub = 0*ones(2,1);
bounds.RightStance1.params.pfixedKneeSpring.x0 = zeros(2,1);

bounds.RightStance1.params.pfourBar.lb = -0*ones(2,1);
bounds.RightStance1.params.pfourBar.ub = 0*ones(2,1);
bounds.RightStance1.params.pfourBar.x0 = zeros(2,1);

bounds.RightStance1.params.pRightToeBottom.lb = [0;0;0;0;-pi/2];
bounds.RightStance1.params.pRightToeBottom.ub = [0;0;0;0;-pi/2];
bounds.RightStance1.params.pRightToeBottom.x0 = [0;0;0;0;-pi/2];

bounds.RightStance1.params.atime.lb = -10*ones(6*10,1);
bounds.RightStance1.params.atime.ub = 10*ones(6*10,1);
bounds.RightStance1.params.atime.x0 = zeros(6*10,1);

bounds.RightStance1.params.ptime.lb = [bounds.RightStance1.time.tf.lb, bounds.RightStance1.time.t0.lb];
bounds.RightStance1.params.ptime.ub = [bounds.RightStance1.time.tf.ub, bounds.RightStance1.time.t0.ub];
bounds.RightStance1.params.ptime.x0 = [bounds.RightStance1.time.t0.x0, bounds.RightStance1.time.tf.x0];

bounds.RightStance1.time.kp = 100;
bounds.RightStance1.time.kd = 20;



%% Left Stance
bounds.LeftStance1 = model_bounds;

bounds.LeftStance1.time.t0.lb = 0;
bounds.LeftStance1.time.t0.ub = 0;
bounds.LeftStance1.time.t0.x0 = 0;

bounds.LeftStance1.time.tf.lb = 0.4;
bounds.LeftStance1.time.tf.ub = 0.4;
bounds.LeftStance1.time.tf.x0 = 0.4;

bounds.LeftStance1.time.duration.lb = 0.4;
bounds.LeftStance1.time.duration.ub = 0.4;
bounds.LeftStance1.time.duration.x0 = 0.4;

bounds.LeftStance1.inputs.ConstraintWrench.fLeftToeBottom.lb = -10000;
bounds.LeftStance1.inputs.ConstraintWrench.fLeftToeBottom.ub = 10000;
bounds.LeftStance1.inputs.ConstraintWrench.fLeftToeBottom.x0 = 100;

bounds.LeftStance1.inputs.ConstraintWrench.ffixedKneeSpring.lb = -10000;
bounds.LeftStance1.inputs.ConstraintWrench.ffixedKneeSpring.ub = 10000;
bounds.LeftStance1.inputs.ConstraintWrench.ffixedKneeSpring.x0 = 100;

bounds.LeftStance1.inputs.ConstraintWrench.ffourBar.lb = -10000;
bounds.LeftStance1.inputs.ConstraintWrench.ffourBar.ub = 10000;
bounds.LeftStance1.inputs.ConstraintWrench.ffourBar.x0 = 100;

bounds.LeftStance1.params.pfixedKneeSpring.lb = -0*ones(2,1);
bounds.LeftStance1.params.pfixedKneeSpring.ub = 0*ones(2,1);
bounds.LeftStance1.params.pfixedKneeSpring.x0 = zeros(2,1);

bounds.LeftStance1.params.pfourBar.lb = -0*ones(2,1);
bounds.LeftStance1.params.pfourBar.ub = 0*ones(2,1);
bounds.LeftStance1.params.pfourBar.x0 = zeros(2,1);

bounds.LeftStance1.params.atime.lb = -10*ones(6*10,1);
bounds.LeftStance1.params.atime.ub = 10*ones(6*10,1);
bounds.LeftStance1.params.atime.x0 = zeros(6*10,1);

bounds.LeftStance1.params.ptime.lb = [bounds.LeftStance1.time.tf.lb, bounds.LeftStance1.time.t0.lb];
bounds.LeftStance1.params.ptime.ub = [bounds.LeftStance1.time.tf.ub, bounds.LeftStance1.time.t0.ub];
bounds.LeftStance1.params.ptime.x0 = [bounds.LeftStance1.time.t0.x0, bounds.LeftStance1.time.tf.x0];

bounds.LeftStance1.time.kp = 100;
bounds.LeftStance1.time.kd = 20;

bounds.LeftStance1.toe_to_toe_width.lb = -model_bounds.toe_to_toe_width.ub; 
bounds.LeftStance1.toe_to_toe_width.ub = -model_bounds.toe_to_toe_width.lb;

%% Right Stance 2
bounds.RightStance2 = model_bounds;

bounds.RightStance2.time.t0.lb = 0;
bounds.RightStance2.time.t0.ub = 0;
bounds.RightStance2.time.t0.x0 = 0;

bounds.RightStance2.time.tf.lb = 0.4;
bounds.RightStance2.time.tf.ub = 0.4;
bounds.RightStance2.time.tf.x0 = 0.4;

bounds.RightStance2.time.duration.lb = 0.4;
bounds.RightStance2.time.duration.ub = 0.4;
bounds.RightStance2.time.duration.x0 = 0.4;

bounds.RightStance2.inputs.ConstraintWrench.fRightToeBottom.lb = -10000;
bounds.RightStance2.inputs.ConstraintWrench.fRightToeBottom.ub = 10000;
bounds.RightStance2.inputs.ConstraintWrench.fRightToeBottom.x0 = 100;

bounds.RightStance2.inputs.ConstraintWrench.ffixedKneeSpring.lb = -10000;
bounds.RightStance2.inputs.ConstraintWrench.ffixedKneeSpring.ub = 10000;
bounds.RightStance2.inputs.ConstraintWrench.ffixedKneeSpring.x0 = 100;

bounds.RightStance2.inputs.ConstraintWrench.ffourBar.lb = -10000;
bounds.RightStance2.inputs.ConstraintWrench.ffourBar.ub = 10000;
bounds.RightStance2.inputs.ConstraintWrench.ffourBar.x0 = 100;

bounds.RightStance2.params.pfixedKneeSpring.lb = -0*ones(2,1);
bounds.RightStance2.params.pfixedKneeSpring.ub = 0*ones(2,1);
bounds.RightStance2.params.pfixedKneeSpring.x0 = zeros(2,1);

bounds.RightStance2.params.pfourBar.lb = -0*ones(2,1);
bounds.RightStance2.params.pfourBar.ub = 0*ones(2,1);
bounds.RightStance2.params.pfourBar.x0 = zeros(2,1);

bounds.RightStance2.params.atime.lb = -10*ones(6*10,1);
bounds.RightStance2.params.atime.ub = 10*ones(6*10,1);
bounds.RightStance2.params.atime.x0 = zeros(6*10,1);

bounds.RightStance2.params.ptime.lb = [bounds.RightStance2.time.tf.lb, bounds.RightStance2.time.t0.lb];
bounds.RightStance2.params.ptime.ub = [bounds.RightStance2.time.tf.ub, bounds.RightStance2.time.t0.ub];
bounds.RightStance2.params.ptime.x0 = [bounds.RightStance2.time.t0.x0, bounds.RightStance2.time.tf.x0];

bounds.RightStance2.time.kp = 100;
bounds.RightStance2.time.kd = 20;


%% Left Stance
bounds.LeftStance2 = model_bounds;

bounds.LeftStance2.time.t0.lb = 0;
bounds.LeftStance2.time.t0.ub = 0;
bounds.LeftStance2.time.t0.x0 = 0;

bounds.LeftStance2.time.tf.lb = 0.4;
bounds.LeftStance2.time.tf.ub = 0.4;
bounds.LeftStance2.time.tf.x0 = 0.4;

bounds.LeftStance2.time.duration.lb = 0.4;
bounds.LeftStance2.time.duration.ub = 0.4;
bounds.LeftStance2.time.duration.x0 = 0.4;

bounds.LeftStance2.inputs.ConstraintWrench.fLeftToeBottom.lb = -10000;
bounds.LeftStance2.inputs.ConstraintWrench.fLeftToeBottom.ub = 10000;
bounds.LeftStance2.inputs.ConstraintWrench.fLeftToeBottom.x0 = 100;

bounds.LeftStance2.inputs.ConstraintWrench.ffixedKneeSpring.lb = -10000;
bounds.LeftStance2.inputs.ConstraintWrench.ffixedKneeSpring.ub = 10000;
bounds.LeftStance2.inputs.ConstraintWrench.ffixedKneeSpring.x0 = 100;

bounds.LeftStance2.inputs.ConstraintWrench.ffourBar.lb = -10000;
bounds.LeftStance2.inputs.ConstraintWrench.ffourBar.ub = 10000;
bounds.LeftStance2.inputs.ConstraintWrench.ffourBar.x0 = 100;

bounds.LeftStance2.params.pfixedKneeSpring.lb = -0*ones(2,1);
bounds.LeftStance2.params.pfixedKneeSpring.ub = 0*ones(2,1);
bounds.LeftStance2.params.pfixedKneeSpring.x0 = zeros(2,1);

bounds.LeftStance2.params.pfourBar.lb = -0*ones(2,1);
bounds.LeftStance2.params.pfourBar.ub = 0*ones(2,1);
bounds.LeftStance2.params.pfourBar.x0 = zeros(2,1);

bounds.LeftStance2.params.atime.lb = -10*ones(6*10,1);
bounds.LeftStance2.params.atime.ub = 10*ones(6*10,1);
bounds.LeftStance2.params.atime.x0 = zeros(6*10,1);

bounds.LeftStance2.params.ptime.lb = [bounds.LeftStance2.time.tf.lb, bounds.LeftStance2.time.t0.lb];
bounds.LeftStance2.params.ptime.ub = [bounds.LeftStance2.time.tf.ub, bounds.LeftStance2.time.t0.ub];
bounds.LeftStance2.params.ptime.x0 = [bounds.LeftStance2.time.t0.x0, bounds.LeftStance2.time.tf.x0];

bounds.LeftStance2.time.kp = 100;
bounds.LeftStance2.time.kd = 20;

bounds.LeftStance2.toe_to_toe_width.lb = -model_bounds.toe_to_toe_width.ub; 
bounds.LeftStance2.toe_to_toe_width.ub = -model_bounds.toe_to_toe_width.lb;

%% Impacts

% Right Impact
bounds.RightImpact = model_bounds;
% Left Impact
bounds.LeftImpact = model_bounds;

end