//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class LACachedExternalizedContext, LAContext, NSData, NSError, NSMutableArray, NSNumber, NSString, NSUUID, NSXPCConnection;
@protocol LAContextXPC, LAUIDelegate;

__attribute__((visibility("hidden")))
@interface LAClient : NSObject
{
    _Bool _shouldRecoverConnection;
    id <LAUIDelegate> _uiDelegate;
    NSUUID *_uuid;
    NSError *_permanentError;
    NSXPCConnection *_serverConnection;
    NSObject<LAContextXPC> *_remoteContext;
    NSObject<LAContextXPC> *_synchronousRemoteContext;
    NSMutableArray *_invalidations;
    LACachedExternalizedContext *_cachedExternalizedContext;
    NSNumber *_userSession;
    NSData *_existingContext;
    LAContext *_context;
}

+ (void)_performInvalidationBlocks:(id)arg1;
+ (id)createConnection:(const unsigned int *)arg1 legacyService:(_Bool)arg2;
+ (id)_queue;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak LAContext *context; // @synthesize context=_context;
@property(retain, nonatomic) NSData *existingContext; // @synthesize existingContext=_existingContext;
@property(readonly, nonatomic) NSNumber *userSession; // @synthesize userSession=_userSession;
@property _Bool shouldRecoverConnection; // @synthesize shouldRecoverConnection=_shouldRecoverConnection;
@property(retain) LACachedExternalizedContext *cachedExternalizedContext; // @synthesize cachedExternalizedContext=_cachedExternalizedContext;
@property(readonly, nonatomic) NSMutableArray *invalidations; // @synthesize invalidations=_invalidations;
@property(readonly, nonatomic) NSObject<LAContextXPC> *synchronousRemoteContext; // @synthesize synchronousRemoteContext=_synchronousRemoteContext;
@property(retain, nonatomic) NSObject<LAContextXPC> *remoteContext; // @synthesize remoteContext=_remoteContext;
@property(readonly, nonatomic) NSXPCConnection *serverConnection; // @synthesize serverConnection=_serverConnection;
@property(retain) NSError *permanentError; // @synthesize permanentError=_permanentError;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) __weak id <LAUIDelegate> uiDelegate; // @synthesize uiDelegate=_uiDelegate;
- (void)bootstrapServiceType:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setShowingCoachingHint:(_Bool)arg1 event:(long long)arg2 reply:(CDUnknownBlockType)arg3;
- (void)notifyEvent:(long long)arg1 options:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)resetWithReply:(CDUnknownBlockType)arg1;
- (void)prearmTouchIdWithReply:(CDUnknownBlockType)arg1;
- (void)authMethodWithReply:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSData *externalizedContext;
- (id)synchronousExternalizedContextWithError:(id *)arg1;
- (void)externalizedContextWithReply:(CDUnknownBlockType)arg1;
- (_Bool)setServerPropertyForOption:(long long)arg1 value:(id)arg2 error:(id *)arg3;
- (id)serverPropertyForOption:(long long)arg1 error:(id *)arg2;
- (void)setServerPropertyForOption:(long long)arg1 value:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)serverPropertyForOption:(long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)verifyFileVaultUser:(id)arg1 volumeUuid:(id)arg2 options:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;
- (void)optionsForInternalOperation:(long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)setOptions:(id)arg1 forInternalOperation:(long long)arg2 reply:(CDUnknownBlockType)arg3;
- (void)credentialOfType:(long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)setCredential:(id)arg1 type:(long long)arg2 reply:(CDUnknownBlockType)arg3;
- (void)isCredentialSet:(long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)setCredential:(id)arg1 forProcessedEvent:(long long)arg2 credentialType:(long long)arg3 reply:(CDUnknownBlockType)arg4;
- (void)pauseProcessedEvent:(long long)arg1 pause:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;
- (void)resetProcessedEvent:(long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)retryProcessedEvent:(long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)failProcessedEvent:(long long)arg1 failureError:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)evaluateACL:(id)arg1 operation:(id)arg2 options:(id)arg3 uiDelegate:(id)arg4 synchronous:(_Bool)arg5 reply:(CDUnknownBlockType)arg6;
- (void)evaluateACL:(id)arg1 operation:(id)arg2 options:(id)arg3 uiDelegate:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)evaluateACL:(id)arg1 operation:(id)arg2 options:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)evaluatePolicy:(long long)arg1 options:(id)arg2 uiDelegate:(id)arg3 synchronous:(_Bool)arg4 reply:(CDUnknownBlockType)arg5;
- (void)evaluatePolicy:(long long)arg1 options:(id)arg2 uiDelegate:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)evaluatePolicy:(long long)arg1 options:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (id)_updateOptions:(id)arg1;
- (_Bool)_setPermanentError:(id)arg1;
- (void)_performSynchronous:(_Bool)arg1 callBool:(CDUnknownBlockType)arg2 finally:(CDUnknownBlockType)arg3;
- (void)_performSynchronous:(_Bool)arg1 callId:(CDUnknownBlockType)arg2 finally:(CDUnknownBlockType)arg3;
- (void)_performCallBool:(CDUnknownBlockType)arg1 finally:(CDUnknownBlockType)arg2;
- (void)_performCallId:(CDUnknownBlockType)arg1 finally:(CDUnknownBlockType)arg2;
- (void)_checkIdResultForTCC:(id)arg1 synchronous:(_Bool)arg2 error:(id)arg3 retryBlock:(CDUnknownBlockType)arg4 finally:(CDUnknownBlockType)arg5;
- (void)invalidateWithReply:(CDUnknownBlockType)arg1;
- (void)_serializedInvalidateWithMessage:(id)arg1;
- (void)invalidateWithMessage:(id)arg1;
- (void)invalidatedWithError:(id)arg1;
- (void)tokenForTransferToUnknownProcess:(CDUnknownBlockType)arg1;
- (void)allowTransferToProcess:(int)arg1 receiverAuditTokenData:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)_recoverConnection;
- (void)_scheduleRecovery;
- (void)_handleConnectionResult:(id)arg1 uuid:(id)arg2 error:(id)arg3;
- (void)_synchronousRemoteObjectProxy:(const unsigned int *)arg1 performCall:(CDUnknownBlockType)arg2;
- (void)_connectToServerWithRecovery:(_Bool)arg1 userSession:(const unsigned int *)arg2 legacyService:(_Bool)arg3;
- (void)dealloc;
- (id)initWithUUID:(id)arg1 token:(id)arg2 senderAuditTokenData:(id)arg3 context:(id)arg4;
- (id)initWithExternalizedContext:(id)arg1 userSession:(unsigned int *)arg2 context:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

