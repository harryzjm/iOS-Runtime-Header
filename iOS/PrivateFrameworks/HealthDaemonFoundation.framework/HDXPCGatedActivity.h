//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;
@protocol OS_os_log, OS_xpc_object;

@interface HDXPCGatedActivity : NSObject
{
    struct os_unfair_lock_s _lock;
    CDUnknownBlockType _handler;
    NSObject<OS_xpc_object> *_criteria;
    double _nextScheduledFireDeadline;
    _Bool _inProgress;
    NSMutableArray *_pendingCompletions;
    double _nextFireTime;
    NSMutableArray *_nextCompletions;
    _Bool _rescheduleWhileInProgress;
    NSString *_name;
    NSObject<OS_os_log> *_loggingCategory;
    NSObject<OS_xpc_object> *_currentActivity;
}

- (void).cxx_destruct;
@property _Bool rescheduleWhileInProgress; // @synthesize rescheduleWhileInProgress=_rescheduleWhileInProgress;
@property(retain) NSObject<OS_xpc_object> *currentActivity; // @synthesize currentActivity=_currentActivity;
@property(readonly, nonatomic) NSObject<OS_os_log> *loggingCategory; // @synthesize loggingCategory=_loggingCategory;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)_lock_resetNextActivityFireDate;
- (void)_lock_setNextScheduledFireDeadline:(double)arg1;
- (void)_activityFinishedWithResult:(long long)arg1 error:(id)arg2;
- (void)_performActivity:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleXPCActivityCallback:(id)arg1;
- (void)_registerActivityWithCriteria:(id)arg1 delay:(double)arg2;
- (void)_registerActivityWithCriteria:(id)arg1;
@property(readonly) _Bool shouldDefer;
- (void)runUngatedWithCompletion:(CDUnknownBlockType)arg1;
- (void)requestRunWithMaximumDelay:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (id)description;
@property _Bool waitingForTrigger;
- (id)initWithName:(id)arg1 criteria:(id)arg2 loggingCategory:(id)arg3 handler:(CDUnknownBlockType)arg4;

@end
