function right_stance(nlp, bounds, varargin)
    % Extract Plant
    domain = nlp.Plant;
    
    % Add Virtual Constraints
    domain.VirtualConstraints.time.imposeNLPConstraint(nlp, [bounds.time.kp, bounds.time.kd], [1,1]);
    
    %% Tau Boundary [0,1]
    addNodeConstraint(nlp, cassie.constraints.tau0(nlp), ...
        [{'T'},domain.VirtualConstraints.time.PhaseParamName], 'first', 0, 0, 'Nonlinear');
    addNodeConstraint(nlp, cassie.constraints.tauF(nlp), ...
        [{'T'},domain.VirtualConstraints.time.PhaseParamName], 'last', 0, 0, 'Nonlinear');
    
    %% Step Length
    addNodeConstraint(nlp, cassie.constraints.step_length(nlp), ...
       {'x'}, 'last', bounds.step_length.lb, bounds.step_length.ub, 'Nonlinear');
    
    %% Toe-to-Toe Distance  
    addNodeConstraint(nlp, cassie.constraints.step_width(nlp), ...
        {'x'}, 'all', bounds.toe_to_toe_width.lb, bounds.toe_to_toe_width.ub, 'Nonlinear');

    %% Pelvis-to-Toe Distance
    addNodeConstraint(nlp, cassie.constraints.distance_pelvis_to_stance_toe(nlp), ...
        {'x'}, 'all', bounds.distance_pelvis_to_stance_toe.lb, bounds.distance_pelvis_to_stance_toe.ub, 'Nonlinear');
    
    %% Swing Foot Clearance
    addNodeConstraint(nlp, cassie.constraints.step_height(nlp), ...
        {'x'}, floor(nlp.NumNode/2), bounds.foot_clearance.lb, bounds.foot_clearance.ub, 'Nonlinear');
    
    %% Swing Toe Velocity
    % Throughout all nodes
    addNodeConstraint(nlp, cassie.constraints.swing_toe_angular_velocity_x(nlp), ...
        {'x','dx'}, 'all', 0, 0, 'Nonlinear');
    addNodeConstraint(nlp, cassie.constraints.swing_toe_angular_velocity_z(nlp), ...
        {'x','dx'}, 'all', 0, 0, 'Nonlinear');
    % Final node
    addNodeConstraint(nlp, cassie.constraints.swing_toe_linear_velocity_x(nlp), ...
        {'x','dx'}, 'last', bounds.swing_toe_end_velocity.lb(1), bounds.swing_toe_end_velocity.ub(1), 'Nonlinear');
    addNodeConstraint(nlp, cassie.constraints.swing_toe_linear_velocity_y(nlp), ...
        {'x','dx'}, 'last', bounds.swing_toe_end_velocity.lb(2), bounds.swing_toe_end_velocity.ub(2), 'Nonlinear');
    addNodeConstraint(nlp, cassie.constraints.swing_toe_linear_velocity_z(nlp), ...
        {'x','dx'}, 'last', bounds.swing_toe_end_velocity.lb(3), bounds.swing_toe_end_velocity.ub(3), 'Nonlinear');
    
    %% Average pitch
    average_pitch_cstr = NlpFunction('Name',['average_pitch_', domain.Name],...
        'Dimension',1,...
        'lb', bounds.average_pitch.lb,...
        'ub', bounds.average_pitch.ub ,...
        'Type','Linear',...
        'SymFun', cassie.constraints.average_pitch(nlp),...
        'DepVariables',nlp.OptVarTable.x);
    
    addConstraint(nlp, ['average_pitch_', domain.Name], 'last', average_pitch_cstr);
    
    %% Average yaw
    average_yaw_cstr = NlpFunction('Name',['average_yaw_', domain.Name],...
        'Dimension',1,...
        'lb', bounds.average_yaw.lb,...
        'ub', bounds.average_yaw.ub ,...
        'Type','Linear',...
        'SymFun',cassie.constraints.average_yaw(nlp),...
        'DepVariables',nlp.OptVarTable.x);
    
    addConstraint(nlp, ['average_yaw_', domain.Name], 'last', average_yaw_cstr);
    
    %% Average hip abduction
    average_hip_abduction_cstr = NlpFunction('Name',['average_hip_abduction_', domain.Name],...
        'Dimension',2,...
        'lb', bounds.average_hip_abduction.lb,...
        'ub', bounds.average_hip_abduction.ub ,...
        'Type','Linear',...
        'SymFun', cassie.constraints.average_hip_abduction(nlp),...
        'DepVariables',nlp.OptVarTable.x);
    
    addConstraint(nlp, ['average_hip_abduction_', domain.Name], 'last', average_hip_abduction_cstr);
    
    %% Average hip rotation
    average_hip_rotation_cstr = NlpFunction('Name',['average_hip_rotation_', domain.Name],...
        'Dimension',2,...
        'lb', bounds.average_hip_rotation.lb,...
        'ub', bounds.average_hip_rotation.ub ,...
        'Type','Linear',...
        'SymFun', cassie.constraints.average_hip_rotation(nlp),...
        'DepVariables',nlp.OptVarTable.x);
    
    addConstraint(nlp, ['average_hip_rotation_', domain.Name], 'last', average_hip_rotation_cstr);
    
    %% Average Stance Knee Angle
    average_st_knee_angle_cstr = NlpFunction('Name',['average_st_knee_angle_', domain.Name],...
        'Dimension',1,...
        'lb', bounds.average_st_knee_angle.lb,...
        'ub', bounds.average_st_knee_angle.ub ,...
        'Type','Linear',...
        'SymFun',SixStep_Up_Down.constraints.average_right_knee_angle(nlp),...
        'DepVariables',nlp.OptVarTable.x);
    
    addConstraint(nlp, ['average_st_knee_angle_', domain.Name], 'last', average_st_knee_angle_cstr);
        
    %% Costs
    
    % Torque Cost
    addRunningCost(nlp, cassie.costs.torque(nlp), 'u');
    
    % Torso Pitch/Roll
%     addRunningCost(nlp, cassie.costs.pitch(nlp), 'x');
%     addRunningCost(nlp, cassie.costs.roll(nlp), 'x');
    

end


