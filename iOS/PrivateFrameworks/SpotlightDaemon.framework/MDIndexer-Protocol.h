//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpotlightDaemon/CSSearchableIndexInterface-Protocol.h>

@class CSSearchQueryContext, CSSearchableItem, CSUserAction, NSArray, NSDate, NSDictionary, NSString, SPCoreSpotlightTask;
@protocol CSIndexExtensionDelegate, CSSearchableIndexServiceInterface;

@protocol MDIndexer <CSSearchableIndexInterface>
- (NSString *)delegateServiceName;
- (NSString *)indexServiceName;
- (NSString *)searchServiceName;
- (void)runMigration;
- (double)lastUpdateTime;
- (void)userPerformedAction:(CSUserAction *)arg1 withItem:(CSSearchableItem *)arg2 protectionClass:(NSString *)arg3 forBundleID:(NSString *)arg4;
- (void)clientDidCheckin:(NSString *)arg1 protectionClass:(NSString *)arg2 service:(id <CSSearchableIndexServiceInterface>)arg3 completionHandler:(void (^)(CSIndexJob *, NSError *))arg4;

@optional
@property __weak id <CSIndexExtensionDelegate> extensionDelegate;
- (void)rewriteQueryWithQueryString:(NSString *)arg1 context:(CSSearchQueryContext *)arg2 matchInfo:(NSDictionary *)arg3 rewriteHandler:(void (^)(NSArray *, NSError *))arg4;
- (void)deleteActionsWithIdentifiers:(NSArray *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)deleteActionsBeforeTime:(double)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)deleteAllInteractionsWithBundleID:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)deleteAllUserActivities:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)deleteAllSearchableItemsWithBundleID:(NSString *)arg1 protectionClass:(NSString *)arg2 shouldGC:(_Bool)arg3 completionHandler:(void (^)(NSError *))arg4;
- (void)queryPreheat:(NSArray *)arg1;
- (void)recordEngagementForBundleID:(NSString *)arg1 uniqueIdentifier:(NSString *)arg2 protectionClass:(NSString *)arg3 userQuery:(NSString *)arg4 date:(NSDate *)arg5;
- (void)startQueryTask:(SPCoreSpotlightTask *)arg1;
-     // Error parsing type: @"SPCoreSpotlightTask"56@0:8@"NSString"16@"CSSearchQueryContext"24@?<^v@?i{?=(?={?=^vI}{?=^vQ}{?=*Q}{?=*I}*BCSIQTcsiqtdfdq^v)}Q^v>32@?<v@?iQ^{__MDStoreOIDArray=}^{__MDPlistBytes=}@"NSString">40@?<v@?@"NSError">48, name: taskForQueryWithQueryString:queryContext:eventHandler:resultsHandler:completionHandler:
-     // Error parsing type: @"SPCoreSpotlightTask"56@0:8@"NSString"16@"CSSearchQueryContext"24@?<^v@?i{?=(?={?=^vI}{?=^vQ}{?=*Q}{?=*I}*BCSIQTcsiqtdfdq^v)}Q^v>32@?<v@?iQ^{__MDStoreOIDArray=}^{__MDPlistBytes=}@"NSString">40@?<v@?@"NSError">48, name: startQueryWithQueryString:queryContext:eventHandler:resultsHandler:completionHandler:
-     // Error parsing type: @"SPCoreSpotlightTask"48@0:8@"NSString"16@"CSSearchQueryContext"24@?<^v@?i{?=(?={?=^vI}{?=^vQ}{?=*Q}{?=*I}*BCSIQTcsiqtdfdq^v)}Q^v>32@?<v@?iQ^{__MDStoreOIDArray=}^{__MDPlistBytes=}@"NSString">40, name: startQuery:withContext:eventHandler:handler:
- (SPCoreSpotlightTask *)startQuery:(NSString *)arg1 withContext:(CSSearchQueryContext *)arg2 handler:(void (^)(int, unsigned long long, struct __MDStoreOIDArray *, struct __MDPlistBytes *, NSString *))arg3;
@end

