//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NanoPassKit/PKFieldDetectorObserver-Protocol.h>

@class NSDictionary, NSObject, NSString, PKFieldDetector, PKPass;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface NPKFakePaymentSession <PKFieldDetectorObserver>
{
    _Bool _ourConfirmed;
    _Bool _ourInServiceMode;
    _Bool _ourPerformedFirstActivation;
    _Bool _invalidated;
    PKPass *_ourCurrentPass;
    NSDictionary *_ourVasPasses;
    NSObject<OS_dispatch_queue> *_ourCallbackQueue;
    NSObject<OS_dispatch_queue> *_ourInternalQueue;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    PKFieldDetector *_fieldDetector;
    unsigned long long _changeCardToken;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long changeCardToken; // @synthesize changeCardToken=_changeCardToken;
@property(nonatomic) _Bool invalidated; // @synthesize invalidated=_invalidated;
@property(retain, nonatomic) PKFieldDetector *fieldDetector; // @synthesize fieldDetector=_fieldDetector;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(nonatomic) _Bool ourPerformedFirstActivation; // @synthesize ourPerformedFirstActivation=_ourPerformedFirstActivation;
@property(nonatomic) _Bool ourInServiceMode; // @synthesize ourInServiceMode=_ourInServiceMode;
@property(nonatomic) _Bool ourConfirmed; // @synthesize ourConfirmed=_ourConfirmed;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *ourInternalQueue; // @synthesize ourInternalQueue=_ourInternalQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *ourCallbackQueue; // @synthesize ourCallbackQueue=_ourCallbackQueue;
@property(retain, nonatomic) NSDictionary *ourVasPasses; // @synthesize ourVasPasses=_ourVasPasses;
@property(retain, nonatomic) PKPass *ourCurrentPass; // @synthesize ourCurrentPass=_ourCurrentPass;
- (void)_sendTransactionCompleteToDelegate;
- (void)_handleSessionHasCredentialIfNecessaryWithCurrentPass:(id)arg1;
- (void)_handleTransactionCompleteDarwinNotification;
- (void)_handleTimeoutTimer;
- (void)_setTimeoutTimer;
- (void)_scheduleDidActivateEventForPass:(id)arg1;
- (void)deactivateSessionWithCompletion:(CDUnknownBlockType)arg1;
- (void)confirmSessionExpectingCredential:(_Bool)arg1;
- (void)fieldDetectorDidEnterField:(id)arg1 withProperties:(id)arg2;
- (_Bool)inServiceMode;
- (void)setInServiceMode:(_Bool)arg1;
- (_Bool)deferAuthorization;
- (void)setDeferAuthorization:(_Bool)arg1;
- (id)vasPasses;
- (void)setCredential:(id)arg1;
- (void)setVasPasses:(id)arg1;
- (id)currentPass;
- (void)setCurrentPass:(id)arg1;
- (void)dealloc;
- (_Bool)sessionStarted;
- (_Bool)startSession;
- (id)initWithQueue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
