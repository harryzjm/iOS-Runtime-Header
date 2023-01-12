//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariShared/WBSHistoryLoader-Protocol.h>

@class NSArray, NSData, NSDate, NSSet, NSString, WBSHistoryItem, WBSHistoryTag, WBSHistoryVisit;
@protocol WBSHistoryStoreDelegate;

@protocol WBSHistoryStore <WBSHistoryLoader>
@property(readonly, nonatomic) _Bool isUsingInMemoryDatabase;
@property(nonatomic) double historyAgeLimit;
@property(nonatomic) __weak id <WBSHistoryStoreDelegate> delegate;
- (void)updateHistoryAfterSuccessfulPersistedLongLivedSaveOperationWithGeneration:(long long)arg1 completion:(void (^)(void))arg2;
- (void)visitIdentifiersMatchingExistingVisits:(NSSet *)arg1 populateAssociatedVisits:(_Bool)arg2 completion:(void (^)(NSSet *))arg3;
- (void)setServerChangeTokenData:(NSData *)arg1;
- (void)getServerChangeTokenDataWithCompletion:(void (^)(NSData *))arg1;
- (void)setLastSeenDate:(NSDate *)arg1 forCloudClientVersion:(unsigned long long)arg2;
- (NSDate *)lastSeenDateForCloudClientVersion:(unsigned long long)arg1;
- (void)pruneTombstonesWithEndDatePriorToDate:(NSDate *)arg1;
- (void)replayAndAddTombstones:(NSArray *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)getAllTombstonesWithCompletion:(void (^)(NSSet *))arg1;
- (void)setTitle:(NSString *)arg1 ofTag:(WBSHistoryTag *)arg2 completionHandler:(void (^)(_Bool, NSError *))arg3;
- (void)fetchTopicsFromStartDate:(NSDate *)arg1 toEndDate:(NSDate *)arg2 limit:(unsigned long long)arg3 minimumItemCount:(unsigned long long)arg4 sortOrder:(long long)arg5 completionHandler:(void (^)(NSArray *, NSError *))arg6;
- (void)fetchTopicsFromStartDate:(NSDate *)arg1 toEndDate:(NSDate *)arg2 completionHandler:(void (^)(NSArray *, NSError *))arg3;
- (void)assignHistoryItem:(WBSHistoryItem *)arg1 toTopicTags:(NSSet *)arg2 completionHandler:(void (^)(_Bool, NSError *))arg3;
- (void)tagsWithIdentifiers:(NSArray *)arg1 type:(unsigned long long)arg2 level:(long long)arg3 creatingIfNecessary:(_Bool)arg4 withTitles:(NSArray *)arg5 completionHandler:(void (^)(NSArray *, NSArray *, NSError *))arg6;
- (void)getItemCountBeforeDate:(NSDate *)arg1 completionHandler:(void (^)(long long, NSError *))arg2;
- (void)getAutocompleteTriggersForItem:(WBSHistoryItem *)arg1 completionHandler:(void (^)(NSArray *))arg2;
- (void)addAutocompleteTrigger:(NSString *)arg1 forItem:(WBSHistoryItem *)arg2;
- (void)closeWithCompletionHandler:(void (^)(void))arg1;
- (void)performMaintenance:(void (^)(void))arg1;
- (void)vacuumHistoryWithCompletionHandler:(void (^)(void))arg1;
- (void)clearHistoryVisitsAddedAfterDate:(NSDate *)arg1 beforeDate:(NSDate *)arg2 completionHandler:(void (^)(void))arg3;
- (void)clearHistoryWithCompletionHandler:(void (^)(void))arg1;
- (void)visitTitleWasUpdated:(WBSHistoryVisit *)arg1;
- (void)visitsWereModified:(NSArray *)arg1;
- (void)visitsWereAdded:(NSArray *)arg1;
- (void)itemWasReplaced:(WBSHistoryItem *)arg1 byItem:(WBSHistoryItem *)arg2;
- (void)itemsWereModified:(NSArray *)arg1 byUserInitiatedAction:(_Bool)arg2;
- (void)itemsWereAdded:(NSArray *)arg1 byUserInitiatedAction:(_Bool)arg2;
- (void)removePastHistoryVisitsForItem:(WBSHistoryItem *)arg1 completionHandler:(void (^)(void))arg2;
- (void)getHighLevelHTTPFamilyDomainsVisitedAfterDate:(NSDate *)arg1 beforeDate:(NSDate *)arg2 onlyFromThisDevice:(_Bool)arg3 completionHandler:(void (^)(NSSet *))arg4;
- (void)checkIfLocalVisitExistsInAnyOfItems:(NSSet *)arg1 withCompletion:(void (^)(_Bool))arg2;
- (void)getVisitsCreatedAfterDate:(NSDate *)arg1 beforeDate:(NSDate *)arg2 completionHandler:(void (^)(NSSet *))arg3;
- (void)enumerateSubsequentVisitsInRedirectChainOnDatabaseQueue:(NSSet *)arg1 items:(NSSet *)arg2 enumerationBlock:(void (^)(WBSHistoryVisit *))arg3;
- (void)enumeratePriorVisitsInRedirectChainOnDatabaseQueue:(NSSet *)arg1 items:(NSSet *)arg2 enumerationBlock:(void (^)(WBSHistoryVisit *))arg3;
- (void)enumerateLastVisitForItemsOnDatabaseQueue:(NSSet *)arg1 ignoringVisits:(NSSet *)arg2 enumerationBlock:(void (^)(WBSHistoryItem *, WBSHistoryVisit *))arg3;
- (void)addOrUpdateItemsOnDatabaseQueue:(NSSet *)arg1;
- (NSSet *)allVisitsForItemsOnDatabaseQueue:(NSSet *)arg1;
@end

