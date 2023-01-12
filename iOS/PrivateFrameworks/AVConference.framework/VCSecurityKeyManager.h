//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, VCMediaKeyIndex;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface VCSecurityKeyManager : NSObject
{
    id _delegate;
    id _reportingAgentWeak;
    NSMutableArray *_unknownKeyIndexList;
    NSMutableDictionary *_sendKeys;
    NSMutableDictionary *_receiveKeys;
    NSMutableDictionary *_prunePendingReceiveKeys;
    VCMediaKeyIndex *_latestSendKeyIndex;
    VCMediaKeyIndex *_latestReceiveKeyIndex;
    VCMediaKeyIndex *_keyIndexNotReceived;
    _Bool _isSendKeysCleanUpPending;
    _Bool _isReceiveKeysCleanUpPending;
    _Bool _forceRemoteMKMMissing;
    double _keyMaterialNotUsedTimeout;
    NSObject<OS_dispatch_queue> *_keyManagerQueue;
    double _lastKeyIndexNotReceived;
    NSObject<OS_dispatch_source> *_pruneTimer;
    NSObject<OS_dispatch_source> *_encryptionKeyRollTimer;
    _Bool _isRunning;
}

@property(nonatomic) struct opaqueRTCReporting *reportingAgent;
- (id)copyMKMWithPrefix:(id)arg1;
- (_Bool)associateMKI:(id)arg1 withClientID:(id)arg2;
- (void)scheduleEncryptionRollTimerWithDelay:(double)arg1;
- (void)handlePruneTimerEventAndReschedule;
- (void)schedulePruneTimer:(double)arg1;
- (double)firstExpirationTime;
- (double)pruneAllExpiredKeys;
- (void)pruneRecvKeyMaterialWithDelay:(double)arg1;
- (void)pruneSendKeyMaterialWithDelay:(double)arg1;
- (id)getLatestRecvKeyMaterial;
- (id)getLatestSendKeyMaterial;
- (id)getRecvKeyMaterialWithIndex:(id)arg1;
- (id)getSendKeyMaterialWithIndex:(id)arg1;
- (_Bool)addSecurityKeyMaterial:(id)arg1;
- (void)stopTimers;
- (_Bool)startTimers;
- (void)releaseTimers;
- (void)stop;
- (void)start;
- (id)logPrefix;
- (long long)getNotUsedTimeout;
- (id)delegate;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end

