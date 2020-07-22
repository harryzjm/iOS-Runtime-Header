//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface MPStoreItemMetadataRequestController : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    unsigned long long _lastExpiredMetadataPurgeMachTime;
    NSMutableDictionary *_itemCaches;
}

+ (unsigned long long)optimalBatchSize;
+ (id)sharedStoreItemMetadataRequestController;
- (void).cxx_destruct;
- (void)_removeExpiredItemsPeriodically;
- (void)getStoreItemMetadataForRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)requestStoreItemMetadataForReason:(unsigned long long)arg1 withItemIdentifiers:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)addStoreItemMetadata:(id)arg1;
- (id)init;

@end
