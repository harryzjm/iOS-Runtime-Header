//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVWeakReference;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVAssetResourceLoadingDataRequestInternal : NSObject
{
    long long requestedOffset;
    long long requestedLength;
    long long currentOffset;
    NSObject<OS_dispatch_queue> *dataResponseQueue;
    _Bool requestsAllDataToEndOfResource;
    _Bool canSupplyIncrementalDataImmediately;
    AVWeakReference *weakReferenceToLoadingRequest;
}

@end
