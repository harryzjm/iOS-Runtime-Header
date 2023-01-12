//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Catalyst/CATSharingDevicePairingTerminal-Protocol.h>

@class CATSharingDevice, NSString;
@protocol CATSharingDeviceSession;

__attribute__((visibility("hidden")))
@interface CATDeviceSessionBackedDevicePairingTerminal : NSObject <CATSharingDevicePairingTerminal>
{
    id <CATSharingDeviceSession> mDeviceSession;
    CDUnknownBlockType mVerifyPairingCompletion;
    CDUnknownBlockType mBeginPairingCompletion;
    CDUnknownBlockType mPINPromptHandler;
    _Bool _invalidated;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isInvalidated) _Bool invalidated; // @synthesize invalidated=_invalidated;
- (void)removeSessionHandlers;
- (void)invalidateWithError:(id)arg1;
- (void)vendConnectionForCompletion:(CDUnknownBlockType)arg1;
- (void)pairingCompleteWithError:(id)arg1;
- (void)fetchStableIdentifierFinished:(id)arg1;
- (void)fetchStableIdentifier;
- (void)sessionHasPromptedForPINWithWaitTime:(unsigned long long)arg1;
- (void)verifyPairingFinished:(_Bool)arg1;
- (void)verifyPairing;
- (void)deviceSessionReady;
- (void)deviceSessionEncounteredError:(id)arg1;
- (void)deviceSessionInvalidated:(id)arg1;
- (void)addSessionHandlers;
- (void)_invalidate;
- (void)_tryPIN:(id)arg1;
- (void)_beginPairing:(CDUnknownBlockType)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_verifyPairingAndFetchStableIdentifierWithCompletion:(CDUnknownBlockType)arg1;
- (void)invalidate;
- (void)tryPIN:(id)arg1;
- (void)beginPairing:(CDUnknownBlockType)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)verifyPairingAndFetchStableIdentifierWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) CATSharingDevice *device;
- (id)initWithDeviceSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
