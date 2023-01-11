//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableIndexSet, NSObject;
@protocol OS_dispatch_group, OS_dispatch_source, OS_os_activity;

@interface SYReceivingSession
{
    NSObject<OS_dispatch_source> *_stateUpdateSource;
    NSObject<OS_dispatch_source> *_sessionTimer;
    NSMutableIndexSet *_receivedBatchIndices;
    NSObject<OS_os_activity> *_sessionActivity;
    NSObject<OS_dispatch_group> *_asyncResetGroupToWaitOn;
    CDUnknownBlockType _weakBlockWaitingForReset;
    struct os_unfair_lock_s _flagsLock;
    struct {
        unsigned int state:4;
        unsigned int canRestart:1;
        unsigned int canRollback:1;
        unsigned int isResetSync:1;
        unsigned int started:1;
        unsigned int cancelled:1;
        unsigned int completed:1;
        unsigned int changedMetadata:1;
    } _flags;
}

- (void).cxx_destruct;
- (void)_continue;
- (void)_peerProcessedMessageWithIdentifier:(id)arg1 userInfo:(id)arg2;
- (void)_sentMessageWithIdentifier:(id)arg1 userInfo:(id)arg2;
- (void)_resolvedIdentifier:(id)arg1 forResponse:(id)arg2;
- (void)_resolvedIdentifierForRequest:(id)arg1;
- (_Bool)_handleEndSessionResponse:(id)arg1 error:(id *)arg2;
- (_Bool)_handleRestartSessionResponse:(id)arg1 error:(id *)arg2;
- (_Bool)_handleSyncBatchResponse:(id)arg1 error:(id *)arg2;
- (_Bool)_handleStartSessionResponse:(id)arg1 error:(id *)arg2;
- (void)_handleEndSession:(id)arg1 response:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_handleRestartSession:(id)arg1 response:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_handleSyncBatch:(id)arg1 response:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)cancelWithError:(id)arg1;
- (void)start:(CDUnknownBlockType)arg1;
- (_Bool)_postAsyncResetRequestReturningError:(id *)arg1;
- (_Bool)_isMissingSyncBatches;
- (void)_installStateListener;
- (void)_installTimers;
- (void)_processNextState;
- (void)_sessionFinished;
- (void)_sessionRestarted;
- (void)_sessionCancelled;
- (void)_notifyErrorAndShutdown;
- (void)_midStreamErrorHandled;
- (void)_sendEndSessionAndError:(id)arg1;
- (void)_tweakMessageHeader:(id)arg1;
- (id)_newMessageHeader;
- (_Bool)_hasStarted;
- (void)_setStarted;
- (void)_setCancelled;
- (_Bool)_hasCompleted;
- (void)_setCompleted;
- (_Bool)wasCancelled;
- (_Bool)isSending;
- (_Bool)isResetSync;
- (void)setCanRollback:(_Bool)arg1;
- (_Bool)canRollback;
- (void)setCanRestart:(_Bool)arg1;
- (_Bool)canRestart;
- (void)_setStateQuietly:(unsigned int)arg1;
- (void)setState:(unsigned int)arg1;
- (unsigned int)state;
@property(readonly, nonatomic) _Bool metadataModified;
- (void)setSessionMetadata:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)initWithService:(id)arg1 isReset:(_Bool)arg2 metadata:(id)arg3;

@end
