//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CallKit/CXProviderHostProtocol-Protocol.h>
#import <CallKit/CXProviderVendorProtocol-Protocol.h>

@class NSBundle, NSString;
@protocol CXCallSourceDelegate, CXProviderVendorProtocol, OS_dispatch_queue;

@interface CXCallSource : NSObject <CXProviderHostProtocol, CXProviderVendorProtocol>
{
    _Bool _connected;
    id <CXCallSourceDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic, getter=isConnected) _Bool connected; // @synthesize connected=_connected;
@property(nonatomic) __weak id <CXCallSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (oneway void)handleAudioSessionActivationStateChangedTo:(_Bool)arg1;
- (oneway void)handleActionTimeout:(id)arg1;
- (oneway void)commitTransaction:(id)arg1;
- (oneway void)actionCompleted:(id)arg1;
- (oneway void)reportCallWithUUID:(id)arg1 crossDeviceIdentifier:(id)arg2 changedBytesOfDataUsed:(long long)arg3;
- (oneway void)reportCallWithUUID:(id)arg1 changedFrequencyData:(id)arg2 forDirection:(long long)arg3;
- (oneway void)reportAudioFinishedForCallWithUUID:(id)arg1;
- (oneway void)reportOutgoingCallWithUUID:(id)arg1 connectedAtDate:(id)arg2;
- (oneway void)reportOutgoingCallWithUUID:(id)arg1 startedConnectingAtDate:(id)arg2;
- (oneway void)reportOutgoingCallWithUUID:(id)arg1 sentInvitationAtDate:(id)arg2;
- (oneway void)reportCallWithUUID:(id)arg1 endedAtDate:(id)arg2 privateReason:(long long)arg3 failureContext:(id)arg4;
- (oneway void)reportCallWithUUID:(id)arg1 updated:(id)arg2;
- (oneway void)reportNewIncomingCallWithUUID:(id)arg1 update:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (oneway void)registerWithConfiguration:(id)arg1;
- (void)beginWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic, getter=isPermittedToUsePrivateAPI) _Bool permittedToUsePrivateAPI;
@property(readonly, nonatomic, getter=isPermittedToUsePublicAPI) _Bool permittedToUsePublicAPI;
@property(readonly, nonatomic) int processIdentifier;
@property(readonly, copy, nonatomic) NSBundle *bundle;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly, copy, nonatomic) NSString *identifier;
@property(readonly, nonatomic) id <CXProviderVendorProtocol> vendorProtocolDelegate;
@property(readonly, copy) NSString *description;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
