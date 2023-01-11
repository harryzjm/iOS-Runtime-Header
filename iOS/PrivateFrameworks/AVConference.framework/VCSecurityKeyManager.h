//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, VCMasterKeyIndex;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCSecurityKeyManager : NSObject
{
    NSMutableDictionary *_sendKeys;
    NSMutableDictionary *_receiveKeys;
    VCMasterKeyIndex *_latestSendKeyIndex;
    VCMasterKeyIndex *_latestReceiveKeyIndex;
    VCMasterKeyIndex *_keyIndexNotReceived;
    _Bool _isSendKeysCleanUpPending;
    _Bool _isReceiveKeysCleanUpPending;
    id _delegate;
    NSObject<OS_dispatch_queue> *_keyManagerQueue;
    _Bool _isKeyIndexNotReceivedReported;
    double _lastKeyIndexNotReceived;
    id _reportingAgentWeak;
    NSMutableArray *_unknownKeyIndexList;
}

- (struct opaqueRTCReporting *)reportingAgent;
- (void)pruneRecvKeyMaterialWithDelay:(double)arg1;
- (void)pruneSendKeyMaterialWithDelay:(double)arg1;
- (id)getLatestRecvKeyMaterial;
- (id)getLatestSendKeyMaterial;
- (id)getRecvKeyMaterialWithIndex:(id)arg1;
- (id)getSendKeyMaterialWithIndex:(id)arg1;
- (_Bool)addSecurityKeyMaterial:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 reportingAgent:(struct opaqueRTCReporting *)arg2;

@end
