//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKContainerID, CKDPCSSQLCacheTable, CKDPCSSQLCacheTableGroup, NSString;
@protocol OS_dispatch_queue;

@interface CKDPCSSQLCache : NSObject
{
    CKContainerID *_containerID;
    NSString *_accountID;
    NSString *_encryptionServiceName;
    CKDPCSSQLCacheTableGroup *_cacheGroup;
    CKDPCSSQLCacheTable *_table;
    NSObject<OS_dispatch_queue> *_asyncQueue;
    unsigned long long _cacheRequestCount;
    unsigned long long _cacheHitCount;
}

+ (void)evictPCSSQLCachesForKnownContainers;
- (void).cxx_destruct;
@property unsigned long long cacheHitCount; // @synthesize cacheHitCount=_cacheHitCount;
@property unsigned long long cacheRequestCount; // @synthesize cacheRequestCount=_cacheRequestCount;
- (id)CKStatusReportArray;
- (void)clearInvalidatedCacheEntriesWithSkipZonePCS:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)clearCache;
- (void)removePCSDataForItemsInShareWithID:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)removePCSDataForItemsInZoneWithID:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)setSharePCSData:(id)arg1 forShareWithID:(id)arg2 databaseScope:(long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)setRecordPCSData:(id)arg1 forRecordWithID:(id)arg2 databaseScope:(long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)setZonePCSData:(id)arg1 forZoneWithID:(id)arg2 databaseScope:(long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)_setPCSData:(id)arg1 forItemWithID:(id)arg2 databaseScope:(long long)arg3 itemType:(unsigned long long)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;
- (void)_lockedSetPCSData:(id)arg1 databaseScope:(long long)arg2 itemType:(unsigned long long)arg3 forID:(id)arg4;
- (void)fetchPCSDataForShareWithID:(id)arg1 databaseScope:(long long)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)fetchPCSDataForZoneWithID:(id)arg1 databaseScope:(long long)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)fetchPCSDataForRecordWithID:(id)arg1 databaseScope:(long long)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (id)_lockedFetchPCSDataForID:(id)arg1 databaseScope:(long long)arg2 itemType:(unsigned long long)arg3;
- (_Bool)hasStatusToReport;
- (id)initWithDeviceContext:(id)arg1 containerID:(id)arg2 accountOverrideInfo:(id)arg3 accountID:(id)arg4 encryptionServiceName:(id)arg5;

@end

