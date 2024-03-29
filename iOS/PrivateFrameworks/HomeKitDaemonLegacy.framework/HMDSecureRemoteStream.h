//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFMessageTransport.h>

@class HMDDevice, HMDSecureRemoteStreamInternal, HMDUser, HMFPairingIdentity, NSArray, NSDate, NSNumber, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDSecureRemoteStream : HMFMessageTransport
{
    struct os_unfair_lock_s _lock;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _open;
    _Bool _idle;
    _Bool _authenticated;
    _Bool _supportsSharedIdentities;
    long long _qualityOfService;
    NSNumber *_maximumRemoteStreams;
    NSDate *_lastActivity;
    HMDDevice *_peerDevice;
    long long _role;
    NSUUID *_sessionID;
    HMDUser *_peer;
    HMFPairingIdentity *_peerIdentity;
    HMDSecureRemoteStreamInternal *_remoteSession;
    HMDDevice *_currentDevice;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(nonatomic) _Bool supportsSharedIdentities; // @synthesize supportsSharedIdentities=_supportsSharedIdentities;
@property(readonly, nonatomic) HMDDevice *currentDevice; // @synthesize currentDevice=_currentDevice;
@property(retain, nonatomic) HMDSecureRemoteStreamInternal *remoteSession; // @synthesize remoteSession=_remoteSession;
@property(retain, nonatomic) HMFPairingIdentity *peerIdentity; // @synthesize peerIdentity=_peerIdentity;
@property(retain, nonatomic) HMDUser *peer; // @synthesize peer=_peer;
@property(readonly, copy, nonatomic) NSUUID *sessionID; // @synthesize sessionID=_sessionID;
@property(readonly) long long role; // @synthesize role=_role;
- (id)logIdentifier;
- (void)__handleDeviceRemovedFromAccount:(id)arg1;
- (void)__handleAccountRemovedFromRegistry:(id)arg1;
- (void)__handleRemovedIdentity:(id)arg1;
- (void)handleSecureMessage:(id)arg1 fromDevice:(id)arg2 fromTransport:(id)arg3;
- (void)handleCompletedMessage:(id)arg1 options:(id)arg2 responsePayload:(id)arg3 error:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)sendMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)stop;
- (void)_closeWithError:(id)arg1;
- (void)closedWithError:(id)arg1;
- (void)_configureWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)startAndInvokeOnQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, copy) NSDate *lastActivity; // @synthesize lastActivity=_lastActivity;
- (void)setIdle:(_Bool)arg1;
@property(readonly, getter=isIdle) _Bool idle; // @synthesize idle=_idle;
- (void)setAuthenticated:(_Bool)arg1;
@property(readonly, getter=isAuthenticated) _Bool authenticated; // @synthesize authenticated=_authenticated;
- (void)setOpen:(_Bool)arg1;
@property(readonly, getter=isOpen) _Bool open; // @synthesize open=_open;
- (void)setMaximumRemoteStreams:(id)arg1;
@property(readonly, copy) NSNumber *maximumRemoteStreams; // @synthesize maximumRemoteStreams=_maximumRemoteStreams;
@property long long qualityOfService; // @synthesize qualityOfService=_qualityOfService;
@property(retain) HMDDevice *peerDevice; // @synthesize peerDevice=_peerDevice;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly, copy) NSString *shortDescription;
- (void)dealloc;
- (id)initWithCurrentDevice:(id)arg1 peerDevice:(id)arg2 clientMode:(_Bool)arg3 sessionID:(id)arg4 accountRegistry:(id)arg5;

// Remaining properties
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *privateDescription;
@property(readonly) Class superclass;

@end

