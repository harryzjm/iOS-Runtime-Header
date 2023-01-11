//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKit/HMFMessageReceiver-Protocol.h>
#import <HomeKit/HMObjectMerge-Protocol.h>

@class HMAudioControl, HMFUnfairLock, NSString, NSUUID, _HMContext;
@protocol OS_dispatch_queue, _HMMediaSessionDelegate;

__attribute__((visibility("hidden")))
@interface _HMMediaSession : NSObject <HMFMessageReceiver, HMObjectMerge>
{
    HMFUnfairLock *_lock;
    NSUUID *_uuid;
    NSString *_routeUID;
    long long _playbackState;
    long long _shuffleState;
    long long _repeatState;
    NSString *_mediaUniqueIdentifier;
    _HMContext *_context;
    NSUUID *_uniqueIdentifier;
    NSUUID *_messageTargetUUID;
    HMAudioControl *_audioControl;
    id <_HMMediaSessionDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <_HMMediaSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) HMAudioControl *audioControl; // @synthesize audioControl=_audioControl;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (_Bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)_handleSessionRouteUIDUpdated:(id)arg1;
- (void)_notifyDelegateOfUpdatedRouteUID:(id)arg1;
- (void)updateMediaState:(id)arg1;
- (void)updatePlaybackState:(id)arg1;
- (void)_updateMediaState:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleSessionPlaybackUpdated:(id)arg1;
- (void)_notifyDelegateOfUpdatedMediaState;
- (void)_notifyDelegateOfUpdatedPlaybackState:(long long)arg1;
- (void)refreshPlaybackStateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setPlaybackState:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
- (id)messageDestination;
@property(retain, nonatomic) NSUUID *messageTargetUUID; // @synthesize messageTargetUUID=_messageTargetUUID;
@property(readonly, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (void)setRouteUID:(id)arg1;
@property(readonly, nonatomic) NSString *routeUID; // @synthesize routeUID=_routeUID;
- (void)setMediaUniqueIdentifier:(id)arg1;
@property(readonly, copy) NSString *mediaUniqueIdentifier; // @synthesize mediaUniqueIdentifier=_mediaUniqueIdentifier;
- (void)setRepeatState:(long long)arg1;
@property(readonly) long long repeatState; // @synthesize repeatState=_repeatState;
- (void)setShuffleState:(long long)arg1;
@property(readonly) long long shuffleState; // @synthesize shuffleState=_shuffleState;
- (void)setPlaybackState:(long long)arg1;
@property(readonly) long long playbackState; // @synthesize playbackState=_playbackState;
@property(retain, nonatomic) _HMContext *context; // @synthesize context=_context;
- (void)setUuid:(id)arg1;
- (void)_registerNotificationHandlers;
- (id)initWithUUID:(id)arg1 routeUID:(id)arg2 playbackState:(long long)arg3 shuffleState:(long long)arg4 repeatState:(long long)arg5 audioControl:(id)arg6 mediaUniqueIdentifier:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
