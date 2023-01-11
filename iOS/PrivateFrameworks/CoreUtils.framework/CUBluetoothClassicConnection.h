//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreUtils/CUReadWriteRequestable-Protocol.h>

@class CBL2CAPChannel, CUReadRequest, CUWriteRequest, NSMutableArray, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CUBluetoothClassicConnection : NSObject <CUReadWriteRequestable>
{
    CDUnknownBlockType _activateCompletion;
    _Bool _btConnected;
    char _btDeviceAddrStr[32];
    struct BTSessionImpl *_btSession;
    _Bool _btSessionAttaching;
    _Bool _btSessionNeeded;
    _Bool _btSessionStarted;
    _Bool _btServiceAddCallbacks;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    NSObject<OS_dispatch_source> *_readSource;
    unsigned char _readSuspended;
    CUReadRequest *_readRequestCurrent;
    NSMutableArray *_readRequests;
    int _socketFD;
    int _state;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    NSObject<OS_dispatch_source> *_writeSource;
    unsigned char _writeSuspended;
    CUWriteRequest *_writeRequestCurrent;
    NSMutableArray *_writeRequests;
    struct LogCategory *_ucat;
    unsigned int _connectionFlags;
    unsigned int _requiredServices;
    NSString *_destinationPeer;
    NSString *_destinationService;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _errorHandler;
    CDUnknownBlockType _invalidationHandler;
    NSString *_label;
    CBL2CAPChannel *_l2capChannel;
    CDUnknownBlockType _serverInvalidationHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType serverInvalidationHandler; // @synthesize serverInvalidationHandler=_serverInvalidationHandler;
@property(retain, nonatomic) CBL2CAPChannel *l2capChannel; // @synthesize l2capChannel=_l2capChannel;
@property(nonatomic) unsigned int requiredServices; // @synthesize requiredServices=_requiredServices;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(copy, nonatomic) NSString *destinationService; // @synthesize destinationService=_destinationService;
@property(copy, nonatomic) NSString *destinationPeer; // @synthesize destinationPeer=_destinationPeer;
@property(nonatomic) unsigned int connectionFlags; // @synthesize connectionFlags=_connectionFlags;
- (void)_completeWriteRequest:(id)arg1 error:(id)arg2;
- (void)_abortWritesWithError:(id)arg1;
- (_Bool)_prepareWriteRequest:(id)arg1 error:(id *)arg2;
- (void)_processWrites;
- (void)writeEndOfDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)writeWithRequest:(id)arg1;
- (void)_completeReadRequest:(id)arg1 error:(id)arg2;
- (_Bool)_processReadStatus;
- (void)_abortReadsWithError:(id)arg1;
- (void)_prepareReadRequest:(id)arg1;
- (void)_processReads:(_Bool)arg1;
- (void)readWithRequest:(id)arg1;
- (void)_btEnsureStopped;
- (struct BTDeviceImpl *)_btDeviceWithID:(id)arg1 error:(id *)arg2;
- (_Bool)_runSetupChannel;
- (_Bool)_runOpenChannelStart;
- (_Bool)_runConnectStart;
- (_Bool)_runBTSessionStart;
- (void)_run;
- (void)_reportError:(id)arg1;
- (_Bool)_setupIOAndReturnError:(id *)arg1;
- (_Bool)_startConnectingAndReturnError:(id *)arg1;
- (void)_invalidated;
- (void)_invalidate;
- (void)invalidate;
- (_Bool)activateDirectAndReturnError:(id *)arg1;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end
