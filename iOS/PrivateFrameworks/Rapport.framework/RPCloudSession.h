//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Rapport/NSSecureCoding-Protocol.h>
#import <Rapport/RPAuthenticatable-Protocol.h>
#import <Rapport/RPCloudXPCClientInterface-Protocol.h>
#import <Rapport/RPMessageable-Protocol.h>

@class CUPairingSession, CUPairingStream, NSError, NSString, NSXPCConnection, RPCloudXPCConnection;
@protocol OS_dispatch_queue;

@interface RPCloudSession : NSObject <NSSecureCoding, RPCloudXPCClientInterface, RPAuthenticatable, RPMessageable>
{
    _Bool _activateCalled;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    _Bool _isClient;
    CUPairingStream *_mainStream;
    CUPairingSession *_pairSetupSession;
    CUPairingSession *_pairVerifySession;
    struct LogCategory *_ucat;
    NSXPCConnection *_xpcCnx;
    int _internalState;
    _Bool _stepDone;
    NSError *_stepError;
    unsigned int _pairSetupFlags;
    unsigned int _pairVerifyFlags;
    int _passwordType;
    unsigned int _destinationPort;
    unsigned int _sourcePort;
    NSString *_password;
    CDUnknownBlockType _showPasswordHandler;
    CDUnknownBlockType _hidePasswordHandler;
    CDUnknownBlockType _promptForPasswordHandler;
    NSString *_destinationID;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
    NSString *_label;
    NSString *_serviceIdentifier;
    NSString *_destinationIDMulticast;
    NSString *_destinationIDUnicast;
    RPCloudXPCConnection *_serverXPCCnx;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) unsigned int sourcePort; // @synthesize sourcePort=_sourcePort;
@property(retain, nonatomic) RPCloudXPCConnection *serverXPCCnx; // @synthesize serverXPCCnx=_serverXPCCnx;
@property(nonatomic) unsigned int destinationPort; // @synthesize destinationPort=_destinationPort;
@property(copy, nonatomic) NSString *destinationIDUnicast; // @synthesize destinationIDUnicast=_destinationIDUnicast;
@property(copy, nonatomic) NSString *destinationIDMulticast; // @synthesize destinationIDMulticast=_destinationIDMulticast;
@property(copy, nonatomic) NSString *serviceIdentifier; // @synthesize serviceIdentifier=_serviceIdentifier;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) CDUnknownBlockType interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(retain, nonatomic) NSString *destinationID; // @synthesize destinationID=_destinationID;
@property(copy, nonatomic) CDUnknownBlockType promptForPasswordHandler; // @synthesize promptForPasswordHandler=_promptForPasswordHandler;
@property(copy, nonatomic) CDUnknownBlockType hidePasswordHandler; // @synthesize hidePasswordHandler=_hidePasswordHandler;
@property(copy, nonatomic) CDUnknownBlockType showPasswordHandler; // @synthesize showPasswordHandler=_showPasswordHandler;
@property(nonatomic) int passwordType; // @synthesize passwordType=_passwordType;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(nonatomic) unsigned int pairVerifyFlags; // @synthesize pairVerifyFlags=_pairVerifyFlags;
@property(nonatomic) unsigned int pairSetupFlags; // @synthesize pairSetupFlags=_pairSetupFlags;
- (void).cxx_destruct;
- (void)xpcCloudReceivedFrameData:(id)arg1 fromID:(id)arg2;
- (void)sendRequestID:(id)arg1 request:(id)arg2 destinationID:(id)arg3 options:(id)arg4 responseHandler:(CDUnknownBlockType)arg5;
- (void)deregisterRequestID:(id)arg1;
- (void)registerRequestID:(id)arg1 options:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)sendEventID:(id)arg1 event:(id)arg2 destinationID:(id)arg3 options:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)deregisterEventID:(id)arg1;
- (void)registerEventID:(id)arg1 options:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_sendFrameType:(unsigned char)arg1 destinationID:(id)arg2 unencryptedObject:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_receivedStopUnencrypted:(id)arg1;
- (void)_receivedFrameHeader:(const CDStruct_793dca1b *)arg1 unencryptedBodyPtr:(const char *)arg2 bodyLen:(unsigned long long)arg3 fromID:(id)arg4;
- (void)_receivedFrameHeader:(const CDStruct_793dca1b *)arg1 encryptedBodyPtr:(const char *)arg2 bodyLen:(unsigned long long)arg3 fromID:(id)arg4;
- (void)tryPassword:(id)arg1;
- (void)_serverPairSetupCompleted:(id)arg1;
- (void)_serverPairSetupNext:(id)arg1;
- (void)_serverPairSetupStart;
- (void)_serverRun;
- (void)_clientPairSetupCompleted:(id)arg1;
- (void)_clientPairSetup:(id)arg1 start:(_Bool)arg2;
- (void)_clientStartResponse:(id)arg1 fromID:(id)arg2;
- (void)_clientStartRequest;
- (void)_clientRun;
- (void)_run;
- (void)_pairVerifyInvalidate;
- (void)_pairSetupInvalidate;
- (void)_invalidated;
- (void)invalidate;
- (void)_interrupted;
- (void)_ensureXPCStarted;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1 reactivate:(_Bool)arg2;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;

@end

