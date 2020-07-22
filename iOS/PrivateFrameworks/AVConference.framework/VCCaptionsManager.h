//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <AVConference/VCCaptionsSourceDelegate-Protocol.h>

@class AVConferenceXPCClient, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCCaptionsManager : NSObject <VCCaptionsSourceDelegate>
{
    NSMutableDictionary *_streamTokenList;
    AVConferenceXPCClient *_connection;
    NSObject<OS_dispatch_queue> *_xpcCommandQueue;
}

+ (id)defaultManager;
- (void)streamToken:(long long)arg1 didUpdateCaptions:(id)arg2;
- (void)streamToken:(long long)arg1 didStopCaptioningWithReason:(unsigned char)arg2;
- (void)streamToken:(long long)arg1 didStartCaptioningWithReason:(unsigned char)arg2;
- (void)streamToken:(long long)arg1 didDisableCaptions:(_Bool)arg2 error:(id)arg3;
- (void)streamToken:(long long)arg1 didEnableCaptions:(_Bool)arg2 error:(id)arg3;
- (void)notifyClientsWithStreamToken:(long long)arg1 service:(char *)arg2 arguments:(id)arg3;
- (void)deregisterBlocksForService;
- (void)registerBlocksForService;
- (id)captionsSourceFromClientContext:(id)arg1;
- (void)unregisterCaptionsSourceWithStreamToken:(long long)arg1;
- (void)registerCaptionsSource:(id)arg1 streamToken:(long long)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

