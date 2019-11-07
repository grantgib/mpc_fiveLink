function bounds =GetBounds(model,args)
x_step=args.x_step;
y_step=args.y_step;
r_buff=args.r_buff;

common_bounds = model.getLimits();
common_bounds.gains.kp =100;
common_bounds.gains.kd = 20;

common_bounds.inputs.Control.u.lb=zeros(4,1);
common_bounds.inputs.Control.u.ub=inf*ones(4,1);

%% DS1
bounds.DoubleSupportConstHeight=common_bounds;
bounds.DoubleSupportConstHeight.time.t0.lb=0;
bounds.DoubleSupportConstHeight.time.t0.ub = 0;
bounds.DoubleSupportConstHeight.time.t0.x0 = 0;
bounds.DoubleSupportConstHeight.time.tf.lb = 0.1;
bounds.DoubleSupportConstHeight.time.tf.ub = 1;
bounds.DoubleSupportConstHeight.time.tf.x0 = 0.5;

bounds.DoubleSupportConstHeight.constrBounds.feetPosDiff.lb=0;
bounds.DoubleSupportConstHeight.constrBounds.feetPosDiff.ub=0;


bounds.DoubleSupportConstHeight.constrBounds.feetPos.lb=[0;0];
bounds.DoubleSupportConstHeight.constrBounds.feetPos.ub=[0;0];


%% LS_lift
bounds.LeftStanceLift=common_bounds;
bounds.LeftStanceLift.time.tf.lb = 1;
bounds.LeftStanceLift.time.tf.ub = 2;
bounds.LeftStanceLift.time.tf.x0 = 0.8;

bounds.LeftStanceLift.constrBounds.rFootPos.lb=-inf;
bounds.LeftStanceLift.constrBounds.rFootPos.ub=(2*x_step^2+r_buff);

%% LS_land
bounds.LeftStanceLand=common_bounds;
bounds.LeftStanceLand.time.tf.lb = 2;
bounds.LeftStanceLand.time.tf.ub = 3;
bounds.LeftStanceLand.time.tf.x0 = 1;

%% DS2
bounds.DoubleSupportDiffHeight=common_bounds;
bounds.DoubleSupportDiffHeight.time.tf.lb = 3;
bounds.DoubleSupportDiffHeight.time.tf.ub = 4;
bounds.DoubleSupportDiffHeight.time.tf.x0 = 1.2;


end