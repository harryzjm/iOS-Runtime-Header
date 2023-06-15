//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, NSObject, VCRateSharingGroup;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCRateControllerManager
{
    NSObject<OS_dispatch_queue> *_delegateQueue;
    VCRateSharingGroup *_defaultSharingGroup;
    NSMutableDictionary *_sharingGroup;
    struct _opaque_pthread_mutex_t _sharingGroupMutex;
}

+ (id)sharedInstance;
- (id)getRateControllerSharingGroupWithConnection:(id)arg1 usePolicy:(unsigned int)arg2;
- (void)cleanupRateControllerSharingGroupWithConnection:(id)arg1 usePolicy:(unsigned int)arg2;
- (id)prepareEndPointKeyFromConnection:(id)arg1;
- (void)dealloc;
- (id)init;

@end

