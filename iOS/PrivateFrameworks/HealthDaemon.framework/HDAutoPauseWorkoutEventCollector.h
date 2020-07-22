//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/CMWorkoutManagerDelegate-Protocol.h>

@class CMWorkoutManager, NSString;

@interface HDAutoPauseWorkoutEventCollector <CMWorkoutManagerDelegate>
{
    CMWorkoutManager *_cmWorkoutManager;
}

- (void).cxx_destruct;
- (void)_deliverWorkoutEvent:(long long)arg1 sessionId:(id)arg2 eventDate:(id)arg3;
- (void)workoutManagerSuggestedStop:(id)arg1 workout:(id)arg2 stopDate:(id)arg3;
- (void)workoutManagerDidFail:(id)arg1 workout:(id)arg2 error:(id)arg3;
- (void)workoutManagerWillResumeWorkout:(id)arg1 workout:(id)arg2 resumeDate:(id)arg3;
- (void)workoutManagerWillPauseWorkout:(id)arg1 workout:(id)arg2 pauseDate:(id)arg3;
- (void)workoutManagerDidStopWorkout:(id)arg1 workout:(id)arg2 stopDate:(id)arg3;
- (void)workoutManagerDidStartWorkout:(id)arg1 workout:(id)arg2 startDate:(id)arg3;
- (id)initWithProfile:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
