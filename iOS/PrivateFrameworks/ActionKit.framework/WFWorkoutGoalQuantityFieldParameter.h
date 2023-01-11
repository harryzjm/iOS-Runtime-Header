//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFQuantityFieldParameter.h>

#import <ActionKit/WFActionEventObserver-Protocol.h>

@class NSArray, NSString, WFAction;

@interface WFWorkoutGoalQuantityFieldParameter : WFQuantityFieldParameter <WFActionEventObserver>
{
    NSArray *_possibleUnits;
    id _defaultSerializedRepresentation;
    WFAction *_action;
}

+ (id)unitConversion;
- (void).cxx_destruct;
@property(nonatomic) __weak WFAction *action; // @synthesize action=_action;
- (void)setPossibleUnits:(id)arg1;
- (id)possibleUnits;
- (id)localizedLabelForPossibleUnit:(id)arg1 magnitude:(id)arg2 style:(unsigned long long)arg3;
- (_Bool)parameterStateIsValid:(id)arg1;
- (void)updatePossibleUnits;
- (void)updateCurrentStateWithNewUnitString:(id)arg1 currentState:(id)arg2;
- (id)defaultState;
- (id)defaultSerializedRepresentation;
- (void)availableUnitsForWorkoutActivityType:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)currentWorkoutActivityType;
- (void)action:(id)arg1 parameterStateDidChangeForKey:(id)arg2;
- (void)wasRemovedFromWorkflow;
- (void)wasAddedToWorkflow;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
