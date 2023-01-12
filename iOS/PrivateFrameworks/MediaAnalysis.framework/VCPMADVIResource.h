//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, VIService;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCPMADVIResource
{
    NSObject<OS_dispatch_queue> *_queue;
    VIService *_service;
}

- (void).cxx_destruct;
- (void)purge;
@property(readonly, nonatomic) VIService *service;
- (double)inactiveCost;
- (double)activeCost;
- (id)init;

@end
