//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, VCRemoteVideoManagerDelegate, VCRemoteVideoManagerStreamOutputDelegate;

__attribute__((visibility("hidden")))
@interface VCRemoteVideoManager : NSObject
{
    NSMutableDictionary *_queuesForStreamTokenDict;
    NSMutableDictionary *_stateCacheForStreamTokenDict;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSObject<OS_dispatch_queue> *_xpcCallbackQueue;
    id <VCRemoteVideoManagerDelegate> _delegate;
    id _streamOutputDelegate;
}

+ (id)defaultManager;
@property(nonatomic) id <VCRemoteVideoManagerStreamOutputDelegate> streamOutputDelegate; // @synthesize streamOutputDelegate=_streamOutputDelegate;
- (void)registerBlocksForService;
- (void)dispatchedNotifyCachedStateForStreamToken:(id)arg1;
- (void)notifyCachedStateForStreamToken:(id)arg1;
- (id)setLayerBoundsForStreamTokenWithArguments:(id)arg1 error:(id *)arg2;
- (id)contextIdForStreamTokenWithArguments:(id)arg1 error:(id *)arg2;
- (void)cleanupDictionaries;
- (unsigned int)slotForStreamToken:(long long)arg1 videoMode:(int)arg2;
- (void)connectionDidChangeWithLocalInterfaceType:(id)arg1 remoteInterfaceType:(id)arg2 streamToken:(long long)arg3;
- (void)dispatchedConnectionDidChangeWithLocalInterfaceType:(id)arg1 remoteInterfaceType:(id)arg2 streamToken:(long long)arg3;
- (void)remoteVideoDidSuspend:(_Bool)arg1 streamToken:(long long)arg2;
- (void)dispatchedRemoteVideoDidSuspend:(_Bool)arg1 streamToken:(long long)arg2;
- (void)remoteVideoDidDegrade:(_Bool)arg1 streamToken:(long long)arg2;
- (void)dispatchedRemoteVideoDidDegrade:(_Bool)arg1 streamToken:(long long)arg2;
- (void)remoteMediaDidStall:(_Bool)arg1 streamToken:(long long)arg2;
- (void)dispatchedRemoteMediaDidStall:(_Bool)arg1 streamToken:(long long)arg2;
- (void)remoteVideoDidPause:(_Bool)arg1 streamToken:(long long)arg2;
- (void)dispatchedRemoteVideoDidPause:(_Bool)arg1 streamToken:(long long)arg2;
- (void)remoteVideoAttributesDidChange:(id)arg1 streamToken:(long long)arg2;
- (void)dispatchedRemoteVideoAttributesDidChange:(id)arg1 streamToken:(long long)arg2;
- (void)remoteScreenAttributesDidChange:(id)arg1 streamToken:(long long)arg2;
- (void)dispatchedRemoteScreenAttributesDidChange:(id)arg1 streamToken:(long long)arg2;
- (void)didReceiveFirstRemoteFrameForStreamToken:(long long)arg1;
- (void)dispatchedDidReceiveFirstRemoteFrameForStreamToken:(long long)arg1;
- (void)releaseQueueForStreamToken:(long long)arg1;
- (_Bool)doesQueueExistForStreamToken:(id)arg1;
- (_Bool)queueExistsForStreamToken:(id)arg1;
- (id)getQueueForStreamToken:(unsigned int)arg1 videoMode:(int)arg2;
- (id)newQueueForStreamToken:(long long)arg1 videoMode:(int)arg2 imageQueueProtected:(_Bool)arg3;
- (id)newQueueForStreamToken:(long long)arg1 videoMode:(int)arg2;
@property(nonatomic) id <VCRemoteVideoManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

