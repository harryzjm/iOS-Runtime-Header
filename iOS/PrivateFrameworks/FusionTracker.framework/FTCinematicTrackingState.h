//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTCinematicHighPriorityTrackerState, FTCinematicInput;

@interface FTCinematicTrackingState : NSObject
{
    shared_ptr_0abad622 _tracker;
    unsigned long long _commitToken;
    shared_ptr_a4dcdb7c _frame;
    _Bool _isTapToTrackOverlapWithIspMitigationEnabled;
    FTCinematicHighPriorityTrackerState *_highPriorityTrackerState;
    FTCinematicInput *_input;
}

+ (id)stateWithTracker:(shared_ptr_0abad622)arg1 frame:(shared_ptr_a4dcdb7c)arg2 input:(id)arg3;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) FTCinematicInput *input; // @synthesize input=_input;
@property(readonly, nonatomic) FTCinematicHighPriorityTrackerState *highPriorityTrackerState; // @synthesize highPriorityTrackerState=_highPriorityTrackerState;
- (id)commit;

@end
