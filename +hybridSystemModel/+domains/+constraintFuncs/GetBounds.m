function bounds =GetBounds(model,args)
%% Set bounds for optimization problem
rabbit=model;
%% Set Bounds
model_bounds = rabbit.getLimits();
model_bounds.states.x.lb = [-10, 0.5, -1, 2, 0.5, 2, 0.5];
model_bounds.states.x.ub = [10, 2, 1, 5, 2, 5, 2];
model_bounds.states.dx.lb = -20*ones(1,7);
model_bounds.states.dx.ub = 20*ones(1,7);
model_bounds.states.ddx.lb = -100*ones(1,7);
model_bounds.states.ddx.ub = 100*ones(1,7);
model_bounds.params.pdoubleSupportConst.x0=[0,5];
model_bounds.params.prightStance.x0=[0,5];
model_bounds.params.pleftStance.x0=[0,5];

model_bounds.gains.kp =100;
model_bounds.gains.kd = 20;
bounds = struct();
%%
bounds.DoubleSupportConstHeight=model_bounds;
bounds.DoubleSupportConstHeight.time.t0.lb=0;
bounds.DoubleSupportConstHeight.time.t0.ub = 0;
bounds.DoubleSupportConstHeight.time.t0.x0 = 0;

bounds.DoubleSupportConstHeight.time.tf.lb = 0.25;
bounds.DoubleSupportConstHeight.time.tf.ub = 0.75;
bounds.DoubleSupportConstHeight.time.tf.x0 = 0.75;

%
bounds.DoubleSupportConstHeight.inputs.ConstraintWrench.fRightToe.lb = [-1e3;-1e3;-1e3];
bounds.DoubleSupportConstHeight.inputs.ConstraintWrench.fRightToe.ub =[1e3;1e3;1e3];
bounds.DoubleSupportConstHeight.inputs.ConstraintWrench.fRightToe.x0 = [100;100;100];

bounds.DoubleSupportConstHeight.inputs.ConstraintWrench.fLeftToe.lb = [-1e3;-1e3;-1000];
bounds.DoubleSupportConstHeight.inputs.ConstraintWrench.fLeftToe.ub =[1e3;1e3;1e3];
bounds.DoubleSupportConstHeight.inputs.ConstraintWrench.fLeftToe.x0 = [100;100;100];

bounds.DoubleSupportConstHeight.params.pRightToe.lb = -0*ones(3,1);
bounds.DoubleSupportConstHeight.params.pRightToe.ub = 0*ones(3,1);
bounds.DoubleSupportConstHeight.params.pRightToe.x0 = zeros(3,1);

bounds.DoubleSupportConstHeight.params.pLeftToe.lb = [-10,-10,0]';
bounds.DoubleSupportConstHeight.params.pLeftToe.ub = [10,10,0]';
bounds.DoubleSupportConstHeight.params.pLeftToe.x0 = zeros(3,1);

%% Right Stance
bounds.RightStance = model_bounds;


bounds.RightStance.time.tf.lb = 0.75;
bounds.RightStance.time.tf.ub = 1.75;
bounds.RightStance.time.tf.x0 = 1;



bounds.RightStance.inputs.ConstraintWrench.fRightToe.lb = -1000;
bounds.RightStance.inputs.ConstraintWrench.fRightToe.ub = 1000;
bounds.RightStance.inputs.ConstraintWrench.fRightToe.x0 = 100;

bounds.RightStance.inputs.Control.u.lb = -100*ones(4,1);
bounds.RightStance.inputs.Control.u.ub = 100*ones(4,1);
bounds.RightStance.inputs.Control.u.x0 = zeros(4,1);

bounds.RightStance.params.pRightToe.lb = [-10,-10,-10]';
bounds.RightStance.params.pRightToe.ub =  [10,10,10]';
bounds.RightStance.params.pRightToe.x0 = zeros(3,1);


%% left stance
bounds.LeftStance = model_bounds;

bounds.LeftStance.time.tf.lb = 1.75;
bounds.LeftStance.time.tf.ub = 3;
bounds.LeftStance.time.tf.x0 = 2;

bounds.LeftStance.inputs.ConstraintWrench.fLeftToe.lb = -1000;
bounds.LeftStance.inputs.ConstraintWrench.fLeftToe.ub = 1000;
bounds.LeftStance.inputs.ConstraintWrench.fLeftToe.x0 = 100;

bounds.LeftStance.inputs.Control.u.lb = -100*ones(4,1);
bounds.LeftStance.inputs.Control.u.ub = 100*ones(4,1);
bounds.LeftStance.inputs.Control.u.x0 = zeros(4,1);


bounds.LeftStance.params.pLeftToe.lb = [-10;-10;-10];
bounds.LeftStance.params.pLeftToe.ub = [10;10;10];
bounds.LeftStance.params.pLeftToe.x0 = zeros(3,1);


end