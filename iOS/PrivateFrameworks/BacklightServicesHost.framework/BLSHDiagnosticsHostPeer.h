//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, RBSProcessMonitor;
@protocol BLSDiagnosticsXPCClientInterface, BLSFlipbookDiagnosticsProviding;

__attribute__((visibility("hidden")))
@interface BLSHDiagnosticsHostPeer : NSObject
{
    id <BLSFlipbookDiagnosticsProviding> _flipbookDiagnosticsProvider;
    id <BLSDiagnosticsXPCClientInterface> _client;
    RBSProcessMonitor *_processMonitor;
    struct os_unfair_lock_s _lock;
    NSMutableDictionary *_lock_hostFrames;
    int _clientPid;
    _Bool _clientIsTaskScheduled;
    _Bool _valid;
    unsigned long long _entitlements;
}

- (void).cxx_destruct;
- (id)_lock_hostFrameForUUID:(id)arg1;
- (id)hostFrameForUUID:(id)arg1;
- (oneway void)releaseFrameUUID:(id)arg1;
- (oneway void)releaseSurfaceForFrameUUID:(id)arg1;
- (void)surfaceForFrameUUID:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)frameOnGlassWhenFlipbookLastCancelled;
- (id)allFlipbookFrames;
- (unsigned long long)hostFramesCount;
- (void)invalidate;
- (_Bool)isValid;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithFlipbookDiagnosticsProvider:(id)arg1 peer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

