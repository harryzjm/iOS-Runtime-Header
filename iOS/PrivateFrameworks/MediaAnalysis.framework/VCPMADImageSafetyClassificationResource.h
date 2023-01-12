//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CVNLPCommSafetyHandler, NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCPMADImageSafetyClassificationResource
{
    NSObject<OS_dispatch_queue> *_queue;
    CVNLPCommSafetyHandler *_handler;
}

+ (id)sharedResource;
- (void).cxx_destruct;
- (void)purge;
- (id)handler;
- (id)init;

@end
