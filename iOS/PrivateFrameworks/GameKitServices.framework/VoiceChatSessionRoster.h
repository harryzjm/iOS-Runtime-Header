//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GKSessionInternal, GKVoiceChatSessionInternal, NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface VoiceChatSessionRoster : NSObject
{
    GKSessionInternal *_gkSession;
    NSString *_peerID;
    GKVoiceChatSessionInternal *_gkvs;
    NSObject<OS_dispatch_queue> *_sendQueue;
    NSMutableArray *_connectedPeers;
    NSMutableDictionary *_peerStateTable;
    struct _opaque_pthread_mutex_t resMutex;
    _Bool _needsUpdateBeaconList;
    _Bool _waitingToCalculateFocus;
    unsigned int _deviceRating;
    unsigned int _focusRating;
    unsigned int _chosenFocusRating;
    unsigned int _focusID;
    _Bool _isBeaconUp;
    _Bool _hasFocus;
}

- (_Bool)hasFocus;
- (id)subscribedPeers;
- (void)processSubscribeBeacon:(struct tagVoiceChatBeacon *)arg1 beaconState:(id)arg2 fromPeer:(id)arg3;
- (void)processUnsubscribeBeacon:(struct tagVoiceChatBeacon *)arg1 beaconState:(id)arg2 fromPeer:(id)arg3;
- (void)receivedBeacon:(id)arg1 fromPeer:(id)arg2;
- (void)peer:(id)arg1 didChangeState:(int)arg2;
- (void)calculateFocus:(id)arg1;
- (void)sendBeacons;
- (void)sendBeacon:(struct tagVoiceChatBeacon *)arg1 ToPeer:(id)arg2;
- (void)stopBeacon;
- (void)updateBeacon;
- (void)startBeacon;
- (void)startBeaconWrapper:(id)arg1;
- (_Bool)recalculateFocusRating;
- (void)configureDeviceRating;
- (unsigned int)focusID;
- (void)cleanup;
- (void)dealloc;
- (id)initWithGKSession:(id)arg1 peerID:(id)arg2 voiceChatSession:(id)arg3 sendQueue:(id)arg4;

@end

