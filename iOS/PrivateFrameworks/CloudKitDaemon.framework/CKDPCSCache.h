//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKDClientContext, CKDPCSFetchAggregator, CKDPCSMemoryCache, CKDPCSSQLCache, NSMutableDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CKDPCSCache : NSObject
{
    CKDPCSSQLCache *_sqlCache;
    CKDPCSMemoryCache *_recordMemoryCache;
    CKDPCSMemoryCache *_zoneMemoryCache;
    CKDPCSMemoryCache *_shareMemoryCache;
    CKDClientContext *_context;
    CKDPCSFetchAggregator *_fetchAggregator;
    NSMutableDictionary *_outstandingFetches;
    NSObject<OS_dispatch_queue> *_fetchQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *fetchQueue; // @synthesize fetchQueue=_fetchQueue;
@property(retain, nonatomic) NSMutableDictionary *outstandingFetches; // @synthesize outstandingFetches=_outstandingFetches;
@property(retain, nonatomic) CKDPCSFetchAggregator *fetchAggregator; // @synthesize fetchAggregator=_fetchAggregator;
@property(nonatomic) __weak CKDClientContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) CKDPCSMemoryCache *shareMemoryCache; // @synthesize shareMemoryCache=_shareMemoryCache;
@property(readonly, nonatomic) CKDPCSMemoryCache *zoneMemoryCache; // @synthesize zoneMemoryCache=_zoneMemoryCache;
@property(readonly, nonatomic) CKDPCSMemoryCache *recordMemoryCache; // @synthesize recordMemoryCache=_recordMemoryCache;
- (void).cxx_destruct;
- (id)CKStatusReportArray;
- (_Bool)hasStatusToReport;
- (void)removePCSDataForItemsInShareWithID:(id)arg1;
- (void)removePCSDataForItemsInZoneWithID:(id)arg1;
- (void)updateMemoryCacheWithSharePCSData:(id)arg1 forShareWithID:(id)arg2 databaseScope:(long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)updateMemoryCacheWithRecordPCSData:(id)arg1 forRecordWithID:(id)arg2 databaseScope:(long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)updateMemoryCacheWithZonePCSData:(id)arg1 forZoneWithID:(id)arg2 databaseScope:(long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)_updateMemoryCacheWithPCSData:(id)arg1 forItemWithID:(id)arg2 inMemoryCache:(id)arg3 databaseScope:(long long)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;
- (void)_setPCSData:(id)arg1 forFetchedShareID:(id)arg2 withScope:(long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)_setPCSData:(id)arg1 forFetchedZoneID:(id)arg2 withScope:(long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)_setPCSData:(id)arg1 forFetchedRecordID:(id)arg2 withScope:(long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)fetchPCSForShareWithID:(id)arg1 forOperation:(id)arg2 options:(unsigned long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)fetchPCSForZoneWithID:(id)arg1 forOperation:(id)arg2 options:(unsigned long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)fetchPCSForRecordWithID:(id)arg1 forOperation:(id)arg2 options:(unsigned long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)_lockedFetchPCSForItem:(id)arg1 memoryCache:(id)arg2 forOperation:(id)arg3 options:(unsigned long long)arg4 fetchCreator:(CDUnknownBlockType)arg5 withCompletionHandler:(CDUnknownBlockType)arg6;
- (void)_lockedCreatePCSCacheFetchOfItem:(id)arg1 forOperation:(id)arg2 options:(unsigned long long)arg3 fetchCreator:(CDUnknownBlockType)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;
- (void)_lockedInvalidateAllOutstandingPCSFetchesForItemIDString:(id)arg1 databaseScope:(long long)arg2;
- (void)_lockedAddOutstandingFetch:(id)arg1 forItemIDString:(id)arg2 databaseScope:(long long)arg3;
- (id)_lockedGetOutstandingFetchForOperation:(id)arg1 options:(unsigned long long)arg2 itemIDString:(id)arg3;
- (void)_lockedRemoveOutstandingFetch:(id)arg1 forItemIDString:(id)arg2 databaseScope:(long long)arg3;
- (void)_lockedHandleMemoryFetchOfItem:(id)arg1 pcsData:(id)arg2 forOperation:(id)arg3 options:(unsigned long long)arg4 fetchCreator:(CDUnknownBlockType)arg5 withCompletionHandler:(CDUnknownBlockType)arg6;
@property(readonly, nonatomic) CKDPCSSQLCache *sqlCache; // @synthesize sqlCache=_sqlCache;
- (id)_lockedGetSQLCache;
- (void)dealloc;
- (id)initWithClientContext:(id)arg1;
- (void)clearPCSMemoryCaches;
- (void)clearPCSCaches;

@end

