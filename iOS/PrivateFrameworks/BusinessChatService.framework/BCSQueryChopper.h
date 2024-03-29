//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol BCSMetricFactoryProtocol, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BCSQueryChopper : NSObject
{
    NSObject<OS_dispatch_queue> *_serialDispatchQueue;
    id <BCSMetricFactoryProtocol> _metricFactory;
}

- (void).cxx_destruct;
- (void)queryChopperDelegate:(id)arg1 isBusinessRegisteredForURL:(id)arg2 isBloomFilterCached:(_Bool)arg3 forClientBundleID:(id)arg4 metric:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)queryChopperDelegate:(id)arg1 fetchLinkItemModelWithURL:(id)arg2 isBloomFilterCached:(_Bool)arg3 forClientBundleID:(id)arg4 metric:(id)arg5 completion:(CDUnknownBlockType)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

