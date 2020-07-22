//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Sharing/NSSecureCoding-Protocol.h>
#import <Sharing/SFXPCInterface-Protocol.h>

@class CUAppleIDClient, NSData, NSDate, NSDictionary, NSString, NSUUID, NSXPCConnection, NSXPCListenerEndpoint;
@protocol OS_dispatch_queue;

@interface SFService : NSObject <NSSecureCoding, SFXPCInterface>
{
    _Bool _activateCalled;
    _Bool _activateInProgress;
    _Bool _activateCompleted;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    struct NSMutableDictionary *_requestQueue;
    struct NSMutableDictionary *_sessions;
    int _tlsActivateState;
    struct NSMutableDictionary *_tlsBuffers;
    struct __SecIdentity *_tlsIdentity;
    NSData *_tlsRecordData;
    NSUUID *_tlsPeer;
    NSObject<OS_dispatch_queue> *_tlsQueue;
    NSDate *_tlsStart;
    struct NSMutableDictionary *_tlsSessions;
    struct NSMutableSet *_tlsVerifiedPeers;
    struct LogCategory *_ucatCore;
    struct LogCategory *_ucatCrypto;
    NSXPCConnection *_xpcCnx;
    unsigned char _deviceActionType;
    _Bool _needsSetup;
    _Bool _pairSetupDisabled;
    _Bool _tlsEnabled;
    _Bool _hasProblem;
    _Bool _needsKeyboard;
    _Bool _supportsAirPlayReceiver;
    _Bool _wakeDevice;
    _Bool _autoUnlockEnabled;
    _Bool _autoUnlockWatch;
    unsigned char _deviceClassCode;
    unsigned char _deviceColorCode;
    unsigned char _deviceModelCode;
    unsigned char _serviceType;
    _Bool _touchRemoteEnabled;
    _Bool _watchLocked;
    unsigned int _pinType;
    unsigned int _sessionFlags;
    long long _advertiseRate;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_fixedPIN;
    NSString *_identifier;
    NSString *_label;
    NSDictionary *_pairSetupACL;
    NSDictionary *_pairVerifyACL;
    NSString *_myAppleID;
    CUAppleIDClient *_myAppleIDInfoClient;
    NSString *_peerAppleID;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
    CDUnknownBlockType _showPINHandlerEx;
    CDUnknownBlockType _showPINHandler;
    CDUnknownBlockType _hidePINHandler;
    CDUnknownBlockType _receivedObjectHandler;
    CDUnknownBlockType _receivedRequestHandler;
    CDUnknownBlockType _sessionStartedHandler;
    CDUnknownBlockType _sessionEndedHandler;
    CDUnknownBlockType _sessionSecuredHandler;
    CDUnknownBlockType _errorHandler;
    CDUnknownBlockType _eventMessageHandler;
    CDUnknownBlockType _requestMessageHandler;
    CDUnknownBlockType _pairSetupCompletionHandler;
    CDUnknownBlockType _peerDisconnectedHandler;
    CDUnknownBlockType _receivedFramePeerHandler;
    NSString *_requestSSID;
    CDUnknownBlockType _responseMessageInternalHandler;
    CDUnknownBlockType _sendFramePeerHandler;
    NSUUID *_serviceUUID;
    NSXPCListenerEndpoint *_testListenerEndpoint;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool watchLocked; // @synthesize watchLocked=_watchLocked;
@property(nonatomic) _Bool touchRemoteEnabled; // @synthesize touchRemoteEnabled=_touchRemoteEnabled;
@property(retain, nonatomic) NSXPCListenerEndpoint *testListenerEndpoint; // @synthesize testListenerEndpoint=_testListenerEndpoint;
@property(copy, nonatomic) NSUUID *serviceUUID; // @synthesize serviceUUID=_serviceUUID;
@property(nonatomic) unsigned char serviceType; // @synthesize serviceType=_serviceType;
@property(copy, nonatomic) CDUnknownBlockType sendFramePeerHandler; // @synthesize sendFramePeerHandler=_sendFramePeerHandler;
@property(copy, nonatomic) CDUnknownBlockType responseMessageInternalHandler; // @synthesize responseMessageInternalHandler=_responseMessageInternalHandler;
@property(copy, nonatomic) NSString *requestSSID; // @synthesize requestSSID=_requestSSID;
@property(copy, nonatomic) CDUnknownBlockType receivedFramePeerHandler; // @synthesize receivedFramePeerHandler=_receivedFramePeerHandler;
@property(copy, nonatomic) CDUnknownBlockType peerDisconnectedHandler; // @synthesize peerDisconnectedHandler=_peerDisconnectedHandler;
@property(copy, nonatomic) CDUnknownBlockType pairSetupCompletionHandler; // @synthesize pairSetupCompletionHandler=_pairSetupCompletionHandler;
@property(nonatomic) unsigned char deviceModelCode; // @synthesize deviceModelCode=_deviceModelCode;
@property(nonatomic) unsigned char deviceColorCode; // @synthesize deviceColorCode=_deviceColorCode;
@property(nonatomic) unsigned char deviceClassCode; // @synthesize deviceClassCode=_deviceClassCode;
@property(nonatomic) _Bool autoUnlockWatch; // @synthesize autoUnlockWatch=_autoUnlockWatch;
@property(nonatomic) _Bool autoUnlockEnabled; // @synthesize autoUnlockEnabled=_autoUnlockEnabled;
@property(nonatomic) _Bool wakeDevice; // @synthesize wakeDevice=_wakeDevice;
@property(nonatomic) _Bool supportsAirPlayReceiver; // @synthesize supportsAirPlayReceiver=_supportsAirPlayReceiver;
@property(copy, nonatomic) CDUnknownBlockType requestMessageHandler; // @synthesize requestMessageHandler=_requestMessageHandler;
@property(nonatomic) _Bool needsKeyboard; // @synthesize needsKeyboard=_needsKeyboard;
@property(nonatomic) _Bool hasProblem; // @synthesize hasProblem=_hasProblem;
@property(copy, nonatomic) CDUnknownBlockType eventMessageHandler; // @synthesize eventMessageHandler=_eventMessageHandler;
@property(copy, nonatomic) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
@property(copy, nonatomic) CDUnknownBlockType sessionSecuredHandler; // @synthesize sessionSecuredHandler=_sessionSecuredHandler;
@property(copy, nonatomic) CDUnknownBlockType sessionEndedHandler; // @synthesize sessionEndedHandler=_sessionEndedHandler;
@property(copy, nonatomic) CDUnknownBlockType sessionStartedHandler; // @synthesize sessionStartedHandler=_sessionStartedHandler;
@property(copy, nonatomic) CDUnknownBlockType receivedRequestHandler; // @synthesize receivedRequestHandler=_receivedRequestHandler;
@property(copy, nonatomic) CDUnknownBlockType receivedObjectHandler; // @synthesize receivedObjectHandler=_receivedObjectHandler;
@property(copy, nonatomic) CDUnknownBlockType hidePINHandler; // @synthesize hidePINHandler=_hidePINHandler;
@property(copy, nonatomic) CDUnknownBlockType showPINHandler; // @synthesize showPINHandler=_showPINHandler;
@property(copy, nonatomic) CDUnknownBlockType showPINHandlerEx; // @synthesize showPINHandlerEx=_showPINHandlerEx;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) CDUnknownBlockType interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property(copy, nonatomic) NSString *peerAppleID; // @synthesize peerAppleID=_peerAppleID;
@property(retain, nonatomic) CUAppleIDClient *myAppleIDInfoClient; // @synthesize myAppleIDInfoClient=_myAppleIDInfoClient;
@property(copy, nonatomic) NSString *myAppleID; // @synthesize myAppleID=_myAppleID;
@property(nonatomic) _Bool tlsEnabled; // @synthesize tlsEnabled=_tlsEnabled;
@property(nonatomic) unsigned int sessionFlags; // @synthesize sessionFlags=_sessionFlags;
@property(nonatomic) unsigned int pinType; // @synthesize pinType=_pinType;
@property(copy, nonatomic) NSDictionary *pairVerifyACL; // @synthesize pairVerifyACL=_pairVerifyACL;
@property(nonatomic) _Bool pairSetupDisabled; // @synthesize pairSetupDisabled=_pairSetupDisabled;
@property(copy, nonatomic) NSDictionary *pairSetupACL; // @synthesize pairSetupACL=_pairSetupACL;
@property(nonatomic) _Bool needsSetup; // @synthesize needsSetup=_needsSetup;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *fixedPIN; // @synthesize fixedPIN=_fixedPIN;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(nonatomic) unsigned char deviceActionType; // @synthesize deviceActionType=_deviceActionType;
@property(nonatomic) long long advertiseRate; // @synthesize advertiseRate=_advertiseRate;
- (void).cxx_destruct;
- (void)serviceSessionFailed:(id)arg1 error:(id)arg2;
- (void)serviceReceivedResponse:(id)arg1;
- (void)serviceReceivedRequest:(id)arg1;
- (void)serviceReceivedFrameType:(unsigned char)arg1 data:(id)arg2 peer:(id)arg3;
- (void)serviceReceivedEvent:(id)arg1;
- (void)servicePeerDisconnected:(id)arg1 error:(id)arg2;
- (void)serviceError:(id)arg1;
- (void)_sendTLSEncryptedObject:(id)arg1 toPeer:(id)arg2;
- (void)sendTLSEncryptedObject:(id)arg1 toPeer:(id)arg2;
- (void)_sendToPeer:(id)arg1 type:(unsigned char)arg2 data:(id)arg3;
- (void)sendToPeer:(id)arg1 type:(unsigned char)arg2 data:(id)arg3;
- (void)_sendToPeer:(id)arg1 type:(unsigned char)arg2 unencryptedObject:(id)arg3;
- (void)sendToPeer:(id)arg1 flags:(unsigned int)arg2 object:(id)arg3;
- (void)sendResponse:(id)arg1;
- (void)sendRequest:(id)arg1;
- (void)sendEvent:(id)arg1;
- (void)tlsSetData:(id)arg1 forPeer:(id)arg2;
- (id)tlsDataForPeer:(id)arg1;
- (int)tlsState;
- (void)_tlsReceivedObjectFromPeer:(id)arg1 length:(unsigned long long)arg2;
- (void)_tlsReceivedData:(id)arg1 type:(unsigned char)arg2 peer:(id)arg3;
- (void)tlsReceivedData:(id)arg1 type:(unsigned char)arg2 peer:(id)arg3;
- (void)_pairTLSComplete:(int)arg1 peer:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_pairTLSSendValidationRecord;
- (void)_pairTLSWithPeer:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)pairTLSWithPeer:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (int)_tlsSetCertificatesForSession:(struct SSLContext *)arg1;
- (int)_tlsEnsureConfiguredWithPeer:(id)arg1;
- (void)activateTLSWithIdentity:(struct __SecIdentity *)arg1 recordData:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_performActivateSafeChange:(CDUnknownBlockType)arg1;
- (void)_invalidated;
- (void)invalidate;
- (void)_interrupted;
- (void)_ensureXPCStarted;
- (void)_tlsActivated;
- (void)_activated;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateWithService:(id)arg1;
- (void)clearEncryptionInfoForPeer:(id)arg1;
- (int)setEncryptionReadKey:(const char *)arg1 readKeyLen:(unsigned long long)arg2 writeKey:(const char *)arg3 writeKeyLen:(unsigned long long)arg4 peer:(id)arg5;
- (id)description;
- (void)_cleanup;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

