//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class NSString;

@interface HMDCloudSettings : HMFObject <HMFLogging>
{
}

+ (id)logCategory;
+ (id)shortDescription;
+ (_Bool)supportsCloudSettings;
+ (id)sharedSettings;
- (void)__updateHomeEnabled:(_Bool)arg1 userInitiated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)updateHomeEnabled:(_Bool)arg1 userInitiated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)__migrateHomePreferences;
- (void)__registerForKeychainChangeNotifications;
- (void)__synchronize;
- (void)synchronize;
- (void)_notifyClientsOfUpdatedKeychainSyncState:(_Bool)arg1;
@property(getter=isKeychainSyncEnabled) _Bool keychainSyncEnabled;
- (void)_notifyClientsOfUpdatedHomeState:(_Bool)arg1 userInitiated:(_Bool)arg2;
- (void)enableHome:(_Bool)arg1 userInitiated:(_Bool)arg2;
@property(readonly, getter=isHomeEnabled) _Bool homeEnabled;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (id)descriptionWithPointer:(_Bool)arg1;
- (id)shortDescription;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

