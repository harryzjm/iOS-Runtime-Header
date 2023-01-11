//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameCenterFoundation/GKUtilityService-Protocol.h>

@class CNContact, NSArray, NSData, NSNumber, NSURL;

@protocol GKUtilityServicePrivate <GKUtilityService>
- (oneway void)clearCoreRecencyBlackList;
- (oneway void)suggestedContactsListWithLimit:(NSNumber *)arg1 handler:(void (^)(NSArray *, NSError *))arg2;
- (oneway void)loadContactsFromCoreRecencyWithLimit:(NSNumber *)arg1 contactKeyDescriptors:(NSArray *)arg2 handler:(void (^)(NSArray *, NSError *))arg3;
- (oneway void)blackListRecentContact:(CNContact *)arg1 handler:(void (^)(NSError *))arg2;
- (oneway void)loadDataForURL:(NSURL *)arg1 postBody:(NSData *)arg2 completionHandler:(void (^)(NSData *, NSError *))arg3;
- (oneway void)refreshPreferences;
- (oneway void)updateNotificationTopics;
- (oneway void)pingWithHandler:(void (^)(void))arg1;
- (oneway void)clearCaches;
- (oneway void)terminate;
- (oneway void)openGameCenterSettings;
- (oneway void)openICloudSettings;
- (oneway void)openSettings;
@end
