//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "VCPMADResource.h"

@class NSObject, SCMLHandler;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MADImageSafetyClassificationResource : VCPMADResource
{
    NSObject<OS_dispatch_queue> *_queue;
    SCMLHandler *_handler;
}

+ (id)sharedResource;
- (void).cxx_destruct;
- (void)purge;
@property(readonly, nonatomic) SCMLHandler *handler;
- (long long)inactiveCost;
- (long long)activeCost;
- (id)init;

@end

