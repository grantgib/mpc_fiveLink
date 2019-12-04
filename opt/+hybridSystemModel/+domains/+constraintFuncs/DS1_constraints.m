function DS1_constraints(nlp, bounds, varargin)
%% virtual constraints
system=nlp.Plant;
load_path=[];
system.VirtualConstraints.time.imposeNLPConstraint(nlp,[bounds.gains.kp,bounds.gains.kd],[1,1],load_path);

% T  = SymVariable('t',[2, 1]);
%     field_names = fieldnames(system.VirtualConstraints);
%     for i = 1:length(field_names)
%         p_name = system.VirtualConstraints.(field_names{i}).PhaseParamName;
%         p = {SymVariable(tomatrix(system.VirtualConstraints.(field_names{i}).PhaseParams(:)))};
%         tau_0 = SymFunction(['tau_0_',p_name,'_',system.Name], T(1) - p{1}(1), [{T},p]);
%         tau_F = SymFunction(['tau_F_',p_name,'_',system.Name], T(2) - p{1}(2), [{T},p]);
%         addNodeConstraint(nlp, tau_0, [{'T'},p_name], 'first', 0, 0, 'linear');
%         addNodeConstraint(nlp, tau_F, [{'T'},p_name], 'last', 0, 0, 'linear');
%     end


% tau boundary [0,1]
    T_name = nlp.OptVarTable.T(1).Name;
    T  = SymVariable(lower(T_name),[nlp.OptVarTable.T(1).Dimension,1]);
    p_name = nlp.OptVarTable.ptime(1).Name;
    p  = SymVariable(lower(p_name),[nlp.OptVarTable.ptime(1).Dimension,1]);
    tau_0 = SymFunction(['tau_0_',system.Name], T(1) - p(2), {T,p});
    tau_F = SymFunction(['tau_F_',system.Name], T(2) - p(1), {T,p});
    addNodeConstraint(nlp, tau_0, {T_name,p_name}, 'first', 0, 0, 'Linear');
    addNodeConstraint(nlp, tau_F, {T_name,p_name}, 'last', 0, 0, 'Linear');
%% other constraints
% % %diff in x and y b/w feet
% rightFoot=getCartesianPosition(system,system.ContactPoints.RightToe);
% leftFoot=getCartesianPosition(system,system.ContactPoints.LeftToe);
% % feetPosDiff=rightFoot(1:2)-leftFoot(1:2);
% % feetPosDiff_fun=SymFunction(['feetPosDiffInit',system.Name],feetPosDiff,{system.States.x});
% % lb = bounds.constrBounds.feetPosDiff.lb;
% % ub = bounds.constrBounds.feetPosDiff.ub;
% % addNodeConstraint(nlp, feetPosDiff_fun, {'x'}, 'first', lb, ub, 'NonLinear');
% 
% %x and y position of the feet
% feetPos=leftFoot(1:2);
% feetPos_fun=SymFunction(['feetPosInit',system.Name],feetPos,{system.States.x});
% lb = bounds.constrBounds.feetPos.lb;
% ub = bounds.constrBounds.feetPos.ub;
% addNodeConstraint(nlp, feetPos_fun, {'x'}, 'first', lb, ub, 'NonLinear');
% 
% %torso
% torsoRot_fun=SymFunction(['torsoRot',system.Name],system.States.x(3),{system.States.x});
% % lb = bounds.constrBounds.torsoRot.lb;
% % ub = bounds.constrBounds.torsoRot.ub;
% addNodeConstraint(nlp, torsoRot_fun, {'x'}, 'all', deg2rad(-45), deg2rad(45), 'NonLinear');
% 
% %torso base
% torsoBase_fun=SymFunction(['torsoBase',system.Name],system.States.x(2),{system.States.x});
% addNodeConstraint(nlp, torsoBase_fun, {'x'}, 'all', 0, inf, 'NonLinear');






end