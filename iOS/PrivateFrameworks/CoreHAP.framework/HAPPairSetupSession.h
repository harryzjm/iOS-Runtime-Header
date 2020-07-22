//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <CoreHAP/HMFTimerDelegate-Protocol.h>

@class HMFTimer, NSObject, NSString;
@protocol HAPPairSetupSessionDelegate, OS_dispatch_queue;

@interface HAPPairSetupSession : HMFObject <HMFTimerDelegate>
{
    id <HAPPairSetupSessionDelegate> _delegate;
    long long _role;
    long long _options;
    NSObject<OS_dispatch_queue> *_clientQueue;
    unsigned long long _state;
    struct PairingSessionPrivate *_pairingSession;
    HMFTimer *_backoffTimer;
}

+ (_Bool)isValidSetupCode:(id)arg1;
+ (void)initialize;
@property(retain, nonatomic) HMFTimer *backoffTimer; // @synthesize backoffTimer=_backoffTimer;
@property(readonly, nonatomic) struct PairingSessionPrivate *pairingSession; // @synthesize pairingSession=_pairingSession;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(readonly, nonatomic) long long options; // @synthesize options=_options;
@property(readonly, nonatomic) long long role; // @synthesize role=_role;
@property(readonly) __weak id <HAPPairSetupSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)timerDidFire:(id)arg1;
- (void)_stopWithError:(id)arg1;
- (void)stopWithError:(id)arg1;
- (void)stop;
- (void)start;
- (_Bool)handleSavePeerRequestWithPeerIdentity:(id)arg1 error:(id *)arg2;
- (void)_handleBackoffExpiration;
- (void)handleBackoffRequestWithTimeout:(double)arg1;
- (void)handleInvalidSetupCode;
- (void)_processSetupCode:(id)arg1 error:(id)arg2;
- (void)handleSetupCodeRequest;
- (void)_handlePairSetupExchangeComplete;
- (void)_processSetupExchangeData:(id)arg1 error:(id)arg2;
- (void)receivedSetupExchangeData:(id)arg1 error:(id)arg2;
- (void)_initiateClientPairSetupExchange;
- (id)_handleLocalPairingIdentityRequestWithStatus:(int *)arg1;
- (_Bool)_initializeSession;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (id)descriptionWithPointer:(_Bool)arg1;
- (id)shortDescription;
- (void)_invalidate;
- (void)dealloc;
- (id)initWithRole:(long long)arg1 options:(long long)arg2 delegate:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

