//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSHashTable;
@protocol OS_dispatch_queue;

@interface SUKeybagInterface : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_observerCalloutQueue;
    _Bool _queue_hasPasscodeSet;
    _Bool _queue_isPasscodeLocked;
    NSHashTable *_queue_observers;
    int _stateChangedNotifyToken;
}

+ (id)sharedInstance;
- (void)_queue_setIsPasscodeLocked:(_Bool)arg1;
- (void)_queue_setHasPasscodeSet:(_Bool)arg1;
- (_Bool)_queue_hasPasscodeSetFromLockState:(int)arg1;
- (_Bool)_queue_isPasscodeLockedFromLockState:(int)arg1;
- (int)_queue_fetchKeybagState;
- (void)_queue_refreshState;
- (id)createPreventLockAssertionWithDuration:(double)arg1;
- (_Bool)disableKeybagStash;
- (_Bool)persistKeybagStash;
- (_Bool)createInstallationKeybagForDescriptor:(id)arg1 withSecret:(id)arg2 forUnattendedInstall:(_Bool)arg3;
- (int)installationKeybagStateForDescriptor:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly, nonatomic) _Bool isPasscodeLocked;
@property(readonly, nonatomic) _Bool hasPasscodeSet;
- (void)dealloc;
- (id)_init;
- (id)init;

@end

