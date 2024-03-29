//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMAccessory, HMHome, HMHomeManager, HMUser, MPHomeUserMonitor, NSMutableDictionary, NSSet, NSString;
@protocol MPHomeManagerObserverDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MPHomeManagerObserver : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    HMHomeManager *_homeManager;
    HMHome *_currentHome;
    HMUser *_currentUser;
    NSSet *_homeUsers;
    NSMutableDictionary *_userMonitorMap;
    _Bool _soundCheckCachedValue;
    _Bool _setupDidComplete;
    unsigned long long _homekitInitSignpostId;
    id <MPHomeManagerObserverDelegate> _delegate;
}

+ (id)sharedObserver;
- (void).cxx_destruct;
@property(nonatomic) __weak id <MPHomeManagerObserverDelegate> delegate; // @synthesize delegate=_delegate;
- (void)homeManagerDidRemoveCurrentAccessory:(id)arg1;
- (void)homeManager:(id)arg1 didRemoveHome:(id)arg2;
- (void)homeManager:(id)arg1 didAddHome:(id)arg2;
- (void)homeManagerDidUpdatePrimaryHome:(id)arg1;
- (void)homeManagerDidUpdateHomes:(id)arg1;
- (void)homeManager:(id)arg1 didUpdateStatus:(unsigned long long)arg2;
- (void)homeManagerDidUpdateCurrentHome:(id)arg1;
- (void)homeDidUpdateAccessControlForCurrentUser:(id)arg1;
- (void)homeDidUpdateSoundCheck:(id)arg1;
- (void)home:(id)arg1 didRemoveUser:(id)arg2;
- (void)home:(id)arg1 didAddUser:(id)arg2;
- (void)_soundCheckDidChange;
- (void)_usersDidChange;
- (void)_currentUserDidChange;
- (void)_currentHomeDidChange;
- (void)_updateAsyncOnQueue;
- (void)_update;
- (void)_updateSoundCheck;
- (id)_userMonitorWithHomeIdentifiers:(id)arg1;
- (id)homeAccesssoryWithRouteID:(id)arg1;
- (id)userMonitorWithHomeIdentifiers:(id)arg1;
- (id)userMonitorWithHomeIdentifier:(id)arg1;
@property(readonly, nonatomic) MPHomeUserMonitor *monitorForCurrentUser;
@property(nonatomic, getter=isSoundCheckEnabled) _Bool soundCheckEnabled;
@property(readonly, nonatomic) HMAccessory *currentAccessory;
@property(readonly, nonatomic) HMHome *currentHome;
@property(readonly, nonatomic) HMUser *currentUser;
@property(readonly, nonatomic) _Bool hasCurrentAccessory;
@property(readonly, nonatomic) _Bool hasCurrentHome;
@property(readonly, nonatomic) _Bool hasCurrentUser;
@property(readonly, nonatomic) _Bool setupDidComplete;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

