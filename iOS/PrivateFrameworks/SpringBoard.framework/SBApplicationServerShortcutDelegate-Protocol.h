//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/SBApplicationServerDelegate-Protocol.h>

@class NSArray, NSString, SBApplicationServer;
@protocol FBSServiceFacilityClientHandle;

@protocol SBApplicationServerShortcutDelegate <SBApplicationServerDelegate>
- (void)applicationServer:(SBApplicationServer *)arg1 client:(id <FBSServiceFacilityClientHandle>)arg2 setDynamicApplicationShortcutItems:(NSArray *)arg3 forBundleIdentifier:(NSString *)arg4;
- (void)applicationServer:(SBApplicationServer *)arg1 client:(id <FBSServiceFacilityClientHandle>)arg2 fetchApplicationShortcutItemsOfTypes:(unsigned long long)arg3 forBundleIdentifier:(NSString *)arg4 withCompletion:(void (^)(SBSApplicationShortcutServiceFetchResult *))arg5;
@end
