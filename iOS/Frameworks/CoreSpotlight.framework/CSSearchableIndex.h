//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSIndexingQueue, NSMutableArray, NSString;
@protocol CSSearchableIndexDelegate, OS_dispatch_queue;

@interface CSSearchableIndex : NSObject
{
    CSIndexingQueue *_activityQueue;
    _Bool _batchOpen;
    int _awakeNotifyToken;
    int _indexID;
    id <CSSearchableIndexDelegate> _indexDelegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSString *_name;
    NSString *_protectionClass;
    NSString *_bundleIdentifier;
    NSMutableArray *_batchedItemsToIndex;
    NSMutableArray *_batchedItemIdentifiersToDelete;
    long long _options;
}

+ (_Bool)activityShouldBeIndexed:(id)arg1 bundleID:(id)arg2;
+ (id)mainBundleLocalizedString;
+ (id)mainBundleID;
+ (void)_setLastUpdateTime;
+ (double)lastUpdateTime;
+ (void)notifyIndexDelegates;
+ (id)_requestQueueAttribute;
+ (id)defaultSearchableIndex;
+ (id)codedIdentifiers:(id)arg1;
+ (id)codedUniqueIdentifiers:(id)arg1;
+ (void)initialize;
+ (_Bool)isIndexingAvailable;
@property(readonly, nonatomic) int indexID; // @synthesize indexID=_indexID;
@property(nonatomic) _Bool batchOpen; // @synthesize batchOpen=_batchOpen;
@property(nonatomic) int awakeNotifyToken; // @synthesize awakeNotifyToken=_awakeNotifyToken;
@property(nonatomic) long long options; // @synthesize options=_options;
@property(retain, nonatomic) NSMutableArray *batchedItemIdentifiersToDelete; // @synthesize batchedItemIdentifiersToDelete=_batchedItemIdentifiersToDelete;
@property(retain, nonatomic) NSMutableArray *batchedItemsToIndex; // @synthesize batchedItemsToIndex=_batchedItemsToIndex;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(copy, nonatomic) NSString *protectionClass; // @synthesize protectionClass=_protectionClass;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
- (void).cxx_destruct;
- (void)deleteAllInteractionsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)deleteAllInteractionsWithBundleID:(id)arg1 protectionClass:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)deleteInteractionsWithGroupIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deleteInteractionsWithGroupIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)deleteInteractionsWithIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deleteInteractionsWithIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)addInteraction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addInteraction:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)performIndexJob:(id)arg1;
- (void)performIndexJob:(id)arg1 acknowledgementHandler:(CDUnknownBlockType)arg2;
- (void)_performIndexJob:(id)arg1 acknowledgementHandler:(CDUnknownBlockType)arg2;
- (void)performDataMigrationWithTimeout:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)flushUserActivities;
- (void)_indexActivities:(id)arg1 flush:(_Bool)arg2;
- (void)indexUserActivity:(id)arg1;
- (void)_changeStateOfSearchableItemsWithUIDs:(id)arg1 toState:(long long)arg2 forUser:(unsigned int)arg3 forBundleID:(id)arg4 forUTIType:(id)arg5;
- (void)changeStateOfSearchableItemsWithUIDs:(id)arg1 toState:(long long)arg2;
- (void)fetchLastClientStateWithProtectionClass:(id)arg1 forBundleID:(id)arg2 clientStateName:(id)arg3 options:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)fetchLastClientStateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_issueCommand:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)provideFileURLForBundle:(id)arg1 identifier:(id)arg2 type:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)provideDataForBundle:(id)arg1 identifier:(id)arg2 type:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)deleteSearchableItemsSinceDate:(id)arg1 protectionClass:(id)arg2 forBundleID:(id)arg3 options:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)deleteSearchableItemsSinceDate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deleteAllSearchableItemsWithProtectionClass:(id)arg1 forBundleID:(id)arg2 options:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)deleteAllSearchableItemsForBundleID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deleteAllSearchableItemsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)deleteSearchableItemsWithDomainIdentifiers:(id)arg1 protectionClass:(id)arg2 forBundleID:(id)arg3 options:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)deleteSearchableItemsWithDomainIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deleteSearchableItemsWithIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_standardizeItems:(id)arg1;
- (void)_setMailMessageAttributes:(id)arg1;
- (void)willModifySearchableItemsWithIdentifiers:(id)arg1 protectionClass:(id)arg2 forBundleID:(id)arg3 options:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)willModifySearchableItemsWithIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_validateOperation;
- (id)_validateOperationWithIdentifiers:(id)arg1;
- (id)_validateOperationWithItems:(id)arg1;
- (id)_validateOperationWithItems:(id)arg1 identifiers:(id)arg2;
- (id)_validateClientState:(id)arg1;
- (void)indexSearchableItems:(id)arg1 deleteSearchableItemsWithIdentifiers:(id)arg2 clientState:(id)arg3 clientStateName:(id)arg4 protectionClass:(id)arg5 forBundleID:(id)arg6 options:(long long)arg7 completionHandler:(CDUnknownBlockType)arg8;
- (void)indexSearchableItems:(id)arg1 deleteSearchableItemsWithIdentifiers:(id)arg2 clientState:(id)arg3 protectionClass:(id)arg4 forBundleID:(id)arg5 options:(long long)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)indexSearchableItems:(id)arg1 deleteSearchableItemsWithIdentifiers:(id)arg2 clientState:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)indexSearchableItems:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_itemsBySanitizingItemsForSpotlight:(id)arg1;
- (void)indexSearchableItems:(id)arg1 returningItemsSanitizedForSpotlightTo:(CDUnknownBlockType)arg2;
- (void)endIndexBatchWithClientState:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)beginIndexBatch;
- (_Bool)_supportsBatching;
@property __weak id <CSSearchableIndexDelegate> indexDelegate; // @synthesize indexDelegate=_indexDelegate;
- (void)_checkInWithIndexDelegate:(id)arg1 reason:(id)arg2;
- (id)xpc_dictionary_for_command:(const char *)arg1;
- (void)_registerAwakeNotifyToken;
- (void)_cancelAwakeNotifyToken;
@property(readonly, nonatomic) CSIndexingQueue *activityQueue;
- (void)_makeActivityQueueIfNecessary;
- (void)dealloc;
- (void)_commonInit;
- (id)_initWithName:(id)arg1 protectionClass:(id)arg2 bundleIdentifier:(id)arg3 options:(long long)arg4;
- (id)init;
- (id)initWithName:(id)arg1 protectionClass:(id)arg2 bundleIdentifier:(id)arg3;
- (id)initWithName:(id)arg1 protectionClass:(id)arg2;
- (id)initWithName:(id)arg1 options:(long long)arg2;
- (id)initWithName:(id)arg1 bundleIdentifier:(id)arg2;
- (id)initWithName:(id)arg1;
- (id)description;
- (void)unthrottle;
- (void)throttle;
- (id)throttleQueue;
- (id)requestQueue;

@end

