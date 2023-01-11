//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDHomeMessageReceiver-Protocol.h>
#import <HomeKitDaemon/HMFDumpState-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMDMediaEndpoint, HMDMediaSessionState, HMFMessageDispatcher, HMFTimer, NSArray, NSMutableArray, NSMutableSet, NSObject, NSSet, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDMediaSession : HMFObject <HMFTimerDelegate, HMDHomeMessageReceiver, HMFDumpState, HMFLogging, NSSecureCoding>
{
    HMFMessageDispatcher *_msgDispatcher;
    NSMutableSet *_mediaProfiles;
    _Bool _connected;
    _Bool _currentAccessorySession;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    NSString *_sessionIdentifier;
    HMDMediaEndpoint *_endpoint;
    HMDMediaSessionState *_state;
    NSString *_logID;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSUUID *_uuid;
    NSMutableArray *_setPlaybackStateCompletionHandlers;
    HMFTimer *_setPlaybackStateTimer;
}

+ (_Bool)supportsSecureCoding;
+ (_Bool)hasMessageReceiverChildren;
+ (id)logCategory;
+ (id)sessionForCurrentAccessory:(id)arg1;
@property(retain, nonatomic) HMFTimer *setPlaybackStateTimer; // @synthesize setPlaybackStateTimer=_setPlaybackStateTimer;
@property(retain, nonatomic) NSMutableArray *setPlaybackStateCompletionHandlers; // @synthesize setPlaybackStateCompletionHandlers=_setPlaybackStateCompletionHandlers;
@property(readonly, copy, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(readonly, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) NSString *logID; // @synthesize logID=_logID;
@property(nonatomic, getter=isCurrentAccessorySession) _Bool currentAccessorySession; // @synthesize currentAccessorySession=_currentAccessorySession;
@property(nonatomic, getter=isConnected) _Bool connected; // @synthesize connected=_connected;
@property(retain, nonatomic) HMDMediaSessionState *state; // @synthesize state=_state;
@property(retain, nonatomic) HMDMediaEndpoint *endpoint; // @synthesize endpoint=_endpoint;
@property(readonly, copy, nonatomic) NSString *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
- (void).cxx_destruct;
- (void)timerDidFire:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeProperties:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)readProperties:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeMediaProfile:(id)arg1;
- (void)addMediaProfile:(id)arg1;
@property(readonly, nonatomic) NSArray *mediaProfiles;
- (void)updateEndpoint:(id)arg1;
- (void)registerForSessionUpdates:(_Bool)arg1;
- (void)_handleMediaUpdateMuted:(id)arg1;
- (void)_handleMediaUpdateVolume:(id)arg1;
- (void)_handleMediaSessionSetAudioControl:(id)arg1;
- (void)handleMediaSessionSetAudioControl:(id)arg1;
- (void)_notifyClientsOfUpdatedVolume:(id)arg1 muted:(id)arg2 inResponseToMessage:(id)arg3;
- (void)handleSetPlayback:(id)arg1;
- (void)_handleSetPlayback:(id)arg1;
- (void)_setPlaybackState:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_queueSetPlaybackStateCompletion:(CDUnknownBlockType)arg1;
- (void)_invokePendingSetPlaybackStateBlocksOfError:(id)arg1;
- (void)updateWithResponses:(id)arg1 message:(id)arg2;
- (void)_postNotificationOfPlaybackStateUpdateWithPayload:(id)arg1;
- (void)_postNotificationOfPlaybackStateUpdateWithError:(id)arg1 inResponseToMessage:(id)arg2;
- (void)_registerForSessionUpdates:(_Bool)arg1;
- (void)evaluateIfMediaPlaybackStateChanged:(id)arg1;
- (void)handleMediaPlaybackStateNotification:(id)arg1;
- (void)handleRefreshPlayback:(id)arg1;
- (void)_handleGetPlaybackState:(id)arg1;
- (void)_getPlaybackStateWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)dumpState;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)logIdentifier;
- (void)dealloc;
- (id)_initWithMediaProfiles:(id)arg1 state:(id)arg2;
- (id)initWithEndpoint:(id)arg1 mediaProfiles:(id)arg2 state:(id)arg3;
- (id)_initWithEndpoint:(id)arg1 mediaProfiles:(id)arg2 state:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSSet *messageReceiverChildren;
@property(readonly) Class superclass;

@end

