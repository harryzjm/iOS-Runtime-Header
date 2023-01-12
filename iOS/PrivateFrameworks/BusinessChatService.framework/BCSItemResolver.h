//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol BCSItemCacheSkipping, BCSItemCaching, BCSItemRemoteFetching, BCSMetricFactoryProtocol;

__attribute__((visibility("hidden")))
@interface BCSItemResolver : NSObject
{
    id <BCSItemCaching> _itemCache;
    id <BCSItemCacheSkipping> _itemCacheSkipper;
    id <BCSItemRemoteFetching> _itemRemoteFetcher;
    id <BCSMetricFactoryProtocol> _metricFactory;
}

- (void).cxx_destruct;
- (void)itemMatching:(id)arg1 config:(id)arg2 clientBundleID:(id)arg3 metric:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)cachedItemMatching:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

