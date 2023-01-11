//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface ACHActivityTriggerGenerator : NSObject
{
}

+ (unsigned long long)allPossibleTriggers;
- (_Bool)_goalTypeIsMoveType:(long long)arg1;
- (CDStruct_bd1b3a42)_incrementWithInitialState:(CDStruct_bd1b3a42)arg1 forGoalType:(long long)arg2 dataProvider:(id)arg3 goalMetHandler:(CDUnknownBlockType)arg4;
- (unsigned long long)_triggersForNewActivityDataWithGoalType:(long long)arg1 dataProvider:(id)arg2 goalMetHandler:(CDUnknownBlockType)arg3;
- (unsigned long long)triggersForNewStandDataWithDataProvider:(id)arg1;
- (unsigned long long)triggersForNewExerciseDataWithDataProvider:(id)arg1;
- (unsigned long long)triggersForNewMoveTimeDataWithDataProvider:(id)arg1;
- (unsigned long long)triggersForNewMoveDataWithDataProvider:(id)arg1;

@end
