//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DeviceManagementTools/CATSharingDeviceSession-Protocol.h>

@class CATSharingDevice, DMTSharingDevice, NSString, SFSession;
@protocol OS_dispatch_queue;

@interface DMTCatalystSharingBackedDeviceSession : NSObject <CATSharingDeviceSession>
{
    _Bool _invalidated;
    _Bool _paired;
    _Bool _ready;
    CATSharingDevice *_remoteDevice;
    CDUnknownBlockType _deviceSessionInvalidatedHandler;
    CDUnknownBlockType _deviceSessionReadyHandler;
    CDUnknownBlockType _deviceSessionErrorHandler;
    CDUnknownBlockType _pinPromptHandler;
    CDUnknownBlockType _messageReceivedHandler;
    NSObject<OS_dispatch_queue> *_sessionQueue;
    SFSession *_session;
}

+ (id)failureTypeForPairingError:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic, getter=isReady) _Bool ready; // @synthesize ready=_ready;
@property(nonatomic, getter=isPaired) _Bool paired; // @synthesize paired=_paired;
@property(nonatomic, getter=isInvalidated) _Bool invalidated; // @synthesize invalidated=_invalidated;
@property(readonly, nonatomic) SFSession *session; // @synthesize session=_session;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *sessionQueue; // @synthesize sessionQueue=_sessionQueue;
@property(copy) CDUnknownBlockType messageReceivedHandler; // @synthesize messageReceivedHandler=_messageReceivedHandler;
@property(copy) CDUnknownBlockType pinPromptHandler; // @synthesize pinPromptHandler=_pinPromptHandler;
@property(copy) CDUnknownBlockType deviceSessionErrorHandler; // @synthesize deviceSessionErrorHandler=_deviceSessionErrorHandler;
@property(copy) CDUnknownBlockType deviceSessionReadyHandler; // @synthesize deviceSessionReadyHandler=_deviceSessionReadyHandler;
@property(copy) CDUnknownBlockType deviceSessionInvalidatedHandler; // @synthesize deviceSessionInvalidatedHandler=_deviceSessionInvalidatedHandler;
@property(readonly, nonatomic) CATSharingDevice *remoteDevice; // @synthesize remoteDevice=_remoteDevice;
- (void)invalidateWithError:(id)arg1;
- (void)removePrimitiveHandlers;
- (void)addPrimitiveHandlers;
- (void)sendMessage:(id)arg1;
- (void)tryPairingPIN:(id)arg1;
- (void)verifyPairing:(CDUnknownBlockType)arg1;
- (void)beginPairWithCompletion:(CDUnknownBlockType)arg1;
- (void)deactivate;
- (void)activate;
@property(readonly, nonatomic) DMTSharingDevice *device;
- (id)initWithDevice:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
