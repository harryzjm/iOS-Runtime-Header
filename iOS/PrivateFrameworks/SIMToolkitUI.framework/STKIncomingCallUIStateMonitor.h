//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSTimer, NSHashTable;

@interface STKIncomingCallUIStateMonitor : NSObject
{
    struct os_unfair_lock_s _observersLock;
    NSHashTable *_observersLock_observers;
    BSTimer *_fallbackTimer;
    struct os_unfair_lock_s _lock;
    _Bool _lock_showingIncomingCallUI;
    int _inCallAlertVisibleNotifyToken;
    _Bool _isShowingIncomingCallUI;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) _Bool isShowingIncomingCallUI; // @synthesize isShowingIncomingCallUI=_isShowingIncomingCallUI;
- (void)_setIncomingCallUIState:(_Bool)arg1 forReason:(id)arg2;
- (void)_refreshState;
- (double)_fallbackTimerDuration;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)init;

@end
