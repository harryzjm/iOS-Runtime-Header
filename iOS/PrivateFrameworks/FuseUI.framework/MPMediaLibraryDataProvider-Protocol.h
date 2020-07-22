//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FuseUI/NSObject-Protocol.h>

@class MPMediaEntityCache, MPMediaQueryCriteria, NSArray, NSData, NSSet, NSString;
@protocol MPArtworkDataSource, MPMediaLibraryResultSet;

@protocol MPMediaLibraryDataProvider <NSObject>
@property(readonly, nonatomic) id <MPArtworkDataSource> artworkDataSource;
@property(readonly, nonatomic) MPMediaEntityCache *entityCache;
@property(readonly, nonatomic) NSString *uniqueIdentifier;
@property(readonly, nonatomic) NSString *name;
- (void)loadQueryCriteria:(MPMediaQueryCriteria *)arg1 countOfCollectionsWithCompletionBlock:(void (^)(unsigned long long))arg2;
- (void)loadQueryCriteria:(MPMediaQueryCriteria *)arg1 countOfItemsWithCompletionBlock:(void (^)(unsigned long long))arg2;
- (void)loadQueryCriteria:(MPMediaQueryCriteria *)arg1 hasCollectionsWithCompletionBlock:(void (^)(_Bool))arg2;
- (void)loadQueryCriteria:(MPMediaQueryCriteria *)arg1 hasItemsWithCompletionBlock:(void (^)(_Bool))arg2;
- (id <MPMediaLibraryResultSet>)collectionResultSetForQueryCriteria:(MPMediaQueryCriteria *)arg1;
- (id <MPMediaLibraryResultSet>)itemResultSetForQueryCriteria:(MPMediaQueryCriteria *)arg1;
- (void)loadProperties:(NSSet *)arg1 ofCollectionWithIdentifier:(long long)arg2 groupingType:(long long)arg3 completionBlock:(void (^)(NSDictionary *))arg4;
- (void)loadProperties:(NSSet *)arg1 ofItemWithIdentifier:(long long)arg2 completionBlock:(void (^)(NSDictionary *))arg3;
- (void)loadValueForAggregateFunction:(NSString *)arg1 onCollectionsForProperty:(NSString *)arg2 queryCriteria:(MPMediaQueryCriteria *)arg3 completionBlock:(void (^)(id))arg4;
- (void)loadValueForAggregateFunction:(NSString *)arg1 onItemsForProperty:(NSString *)arg2 queryCriteria:(MPMediaQueryCriteria *)arg3 completionBlock:(void (^)(id))arg4;

@optional
@property(readonly, nonatomic) NSString *syncValidity;
@property(readonly, nonatomic) NSSet *propertiesToCache;
@property(readonly, nonatomic) _Bool requiresAuthentication;
- (void)setLibraryPublicContainerFilterPredicatesWithCloudFilteringType:(long long)arg1 additionalFilterPredicates:(NSArray *)arg2;
- (void)setLibraryPublicEntityFilterPredicatesWithCloudFilteringType:(long long)arg1 additionalFilterPredicates:(NSArray *)arg2;
- (void)setLibraryContainerFilterPredicatesWithCloudFilteringType:(long long)arg1 additionalFilterPredicates:(NSArray *)arg2;
- (void)setLibraryEntityFilterPredicatesWithCloudFilteringType:(long long)arg1 additionalFilterPredicates:(NSArray *)arg2;
- (void)enumerateEntityChangesAfterSyncAnchor:(NSString *)arg1 maximumRevisionType:(int)arg2 inUsersLibrary:(_Bool)arg3 itemBlock:(void (^)(long long, NSString *, int, _Bool *))arg4 collectionBlock:(void (^)(long long, long long, NSString *, int, _Bool *))arg5;
- (void)disconnect;
- (void)connectWithAuthenticationData:(NSData *)arg1 completionBlock:(void (^)(_Bool, NSError *))arg2 progressHandler:(void (^)(float))arg3;
- (void)enumerateCollectionIdentifiersForQueryCriteria:(MPMediaQueryCriteria *)arg1 ordered:(_Bool)arg2 cancelBlock:(_Bool (^)(void))arg3 usingBlock:(void (^)(long long, NSDictionary *, _Bool *))arg4;
- (void)enumerateItemIdentifiersForQueryCriteria:(MPMediaQueryCriteria *)arg1 ordered:(_Bool)arg2 cancelBlock:(_Bool (^)(void))arg3 usingBlock:(void (^)(long long, _Bool *))arg4;
@end

