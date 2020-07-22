//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFDumpState-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFMessageReceiver-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMDMediaEndpoint, HMFMessageDispatcher, NSMutableArray, NSMutableSet, NSObject, NSSet, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDMediaSession : HMFObject <HMFMessageReceiver, HMFDumpState, HMFLogging, NSSecureCoding>
{
    HMFMessageDispatcher *_msgDispatcher;
    NSMutableSet *_mediaProfiles;
    _Bool _connecting;
    NSString *_sessionIdentifier;
    HMDMediaEndpoint *_endpoint;
    long long _playbackState;
    NSString *_logID;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSUUID *_uuid;
    NSMutableArray *_pendingBlocks;
}

+ (_Bool)supportsSecureCoding;
+ (long long)_mapToHMMediaPlaybackState:(unsigned int)arg1;
+ (id)logCategory;
@property(retain, nonatomic) NSMutableArray *pendingBlocks; // @synthesize pendingBlocks=_pendingBlocks;
@property(readonly, copy, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(readonly, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) NSString *logID; // @synthesize logID=_logID;
@property(nonatomic, getter=isConnecting) _Bool connecting; // @synthesize connecting=_connecting;
@property(nonatomic) long long playbackState; // @synthesize playbackState=_playbackState;
@property(retain, nonatomic) HMDMediaEndpoint *endpoint; // @synthesize endpoint=_endpoint;
@property(readonly, copy, nonatomic) NSString *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)removeMediaProfile:(id)arg1;
- (void)addMediaProfile:(id)arg1;
@property(readonly, nonatomic) NSSet *mediaProfiles;
- (void)registerForSessionUpdates:(_Bool)arg1;
- (void)_handleMediaUpdateMuted:(id)arg1;
- (void)_handleMediaUpdateVolume:(id)arg1;
- (void)_handleMediaSessionSetAudioControl:(id)arg1;
- (void)_notifyClientsOfUpdatedVolume:(id)arg1 muted:(id)arg2 inResponseToMessage:(id)arg3;
- (void)_handleMediaSessionSetPlayback:(id)arg1;
- (void)_notifyPendingBlocksOfError:(id)arg1;
- (void)_addPendingBlock:(CDUnknownBlockType)arg1 externalDevice:(void *)arg2;
- (void)_notifyClientsOfPlaybackStateUpdate:(long long)arg1 error:(id)arg2 inResponseToMessage:(id)arg3;
- (void)_registerForSessionUpdates:(_Bool)arg1;
- (void)mediaPlaybackStateChanged:(id)arg1;
- (void)_handleGetPlaybackState:(id)arg1;
- (void *)_getExternalDevice;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)dumpState;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)logIdentifier;
- (id)initWithEndpoint:(id)arg1 mediaProfiles:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

