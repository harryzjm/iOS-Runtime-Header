//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BookUtility/BURestrictionsProviding-Protocol.h>
#import <BookUtility/MCProfileConnectionObserver-Protocol.h>

@class NSHashTable, NSString;
@protocol OS_dispatch_queue;

@interface BUManagedRestrictionsProvider : NSObject <MCProfileConnectionObserver, BURestrictionsProviding>
{
    struct os_unfair_lock_s _observersLock;
    NSObject<OS_dispatch_queue> *_accessQueue;
    _Bool _isBookStoreAllowed;
    _Bool _isExplicitContentAllowed;
    _Bool _isAccountModificationAllowed;
    NSHashTable *_observers;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(nonatomic) _Bool isAccountModificationAllowed; // @synthesize isAccountModificationAllowed=_isAccountModificationAllowed;
@property(nonatomic) _Bool isExplicitContentAllowed; // @synthesize isExplicitContentAllowed=_isExplicitContentAllowed;
@property(nonatomic) _Bool isBookStoreAllowed; // @synthesize isBookStoreAllowed=_isBookStoreAllowed;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)_uq_updateRestrictionsIfNeeded;
- (void)_uq_notifyObserversForAccountModificationRestrictionsChange;
- (void)_uq_notifyObserversForExplicitContentRestrictionsChange;
- (void)_uq_notifyObserversForBookStoreRestrictionsChange;
- (id)_currentObserversCopy;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
