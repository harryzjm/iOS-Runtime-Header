//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriActivation/AFMyriadDelegate-Protocol.h>
#import <SiriActivation/SASLockStateMonitorDelegate-Protocol.h>

@class AFMyriadCoordinator, CMMotionActivityManager, FBSDisplayLayoutMonitor, NSString, SASLockStateMonitor;
@protocol OS_dispatch_semaphore, SASMyriadControllerDelegate;

@interface SASMyriadController : NSObject <SASLockStateMonitorDelegate, AFMyriadDelegate>
{
    NSObject<OS_dispatch_semaphore> *_myriadFinishedSemaphore;
    AFMyriadCoordinator *_myriadCoordinator;
    CMMotionActivityManager *_activityManager;
    _Bool _isLifted;
    double _liftEndTime;
    _Bool _isLocked;
    SASLockStateMonitor *_lockStateMonitor;
    FBSDisplayLayoutMonitor *_displayMonitor;
    double _raiseToWakeTime;
    CDUnknownBlockType _shouldContinueBlock;
    CDUnknownBlockType _shoudAbortAnotherDeviceBetterBlock;
    id <SASMyriadControllerDelegate> _delegate;
    _Bool _canceledByMyriad;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool canceledByMyriad; // @synthesize canceledByMyriad=_canceledByMyriad;
- (void)_handleCMMotionActivity:(id)arg1;
- (void)didChangeLockState:(unsigned long long)arg1 toState:(unsigned long long)arg2;
- (void)shouldAbortAnotherDeviceBetter:(id)arg1;
- (void)shouldContinue:(id)arg1;
- (void)_updateRaiseToWakeTimeForTransition:(id)arg1;
- (void)activateForInTaskRequest:(_Bool)arg1 isVisible:(_Bool)arg2;
- (_Bool)activateForRequest:(id)arg1 visible:(_Bool)arg2;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
