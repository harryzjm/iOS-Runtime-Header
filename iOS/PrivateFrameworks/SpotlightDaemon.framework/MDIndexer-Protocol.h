//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpotlightDaemon/CSSearchableIndexInterface-Protocol.h>

@class CSSearchQueryContext, CSSearchableItem, CSUserAction, NSDate, NSString, SPCoreSpotlightTask;
@protocol CSIndexExtensionDelegate, CSSearchableIndexServiceInterface;

@protocol MDIndexer <CSSearchableIndexInterface>
- (void)runMigration;
- (double)lastUpdateTime;
- (void)userPerformedAction:(CSUserAction *)arg1 withItem:(CSSearchableItem *)arg2 protectionClass:(NSString *)arg3 forBundleID:(NSString *)arg4;
- (void)clientDidCheckin:(NSString *)arg1 protectionClass:(NSString *)arg2 service:(id <CSSearchableIndexServiceInterface>)arg3 completionHandler:(void (^)(CSIndexJob *, NSError *))arg4;

@optional
@property __weak id <CSIndexExtensionDelegate> extensionDelegate;
- (void)deleteAllSearchableItemsWithBundleID:(NSString *)arg1 protectionClass:(NSString *)arg2 shouldGC:(_Bool)arg3 completionHandler:(void (^)(NSError *))arg4;
- (void)recordEngagementForBundleID:(NSString *)arg1 uniqueIdentifier:(NSString *)arg2 protectionClass:(NSString *)arg3 userQuery:(NSString *)arg4 date:(NSDate *)arg5;
- (void)startQueryTask:(SPCoreSpotlightTask *)arg1;
- (SPCoreSpotlightTask *)taskForQueryWithQueryString:(NSString *)arg1 queryContext:(CSSearchQueryContext *)arg2 resultsHandler:(void (^)(int, unsigned long long, struct __MDStoreOIDArray *, struct __MDPlistBytes *, NSString *))arg3 completionHandler:(void (^)(NSError *))arg4;
- (SPCoreSpotlightTask *)startQueryWithQueryString:(NSString *)arg1 queryContext:(CSSearchQueryContext *)arg2 resultsHandler:(void (^)(int, unsigned long long, struct __MDStoreOIDArray *, struct __MDPlistBytes *, NSString *))arg3 completionHandler:(void (^)(NSError *))arg4;
- (SPCoreSpotlightTask *)startQuery:(NSString *)arg1 withContext:(CSSearchQueryContext *)arg2 handler:(void (^)(int, unsigned long long, struct __MDStoreOIDArray *, struct __MDPlistBytes *, NSString *))arg3;
@end
