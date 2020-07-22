//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface MPStoreAssetInfoPlaybackCache : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableArray *_accessOrderedRequests;
    NSMutableDictionary *_requestToCachedResponse;
}

+ (id)sharedCache;
- (void).cxx_destruct;
- (void)updateForPlaybackOfFileAsset:(id)arg1 fromResponse:(id)arg2;
- (id)cachedResponseForRequest:(id)arg1;
- (void)addCachedResponse:(id)arg1 forRequest:(id)arg2;
- (id)_init;

@end

