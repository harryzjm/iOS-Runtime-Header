//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AWAttentionAwarenessConfiguration, AWAttentionEvent, AWScheduler, NSArray, NSSet, NSString, NSXPCConnection;
@protocol AWFrameworkClient, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AWRemoteClient : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    AWScheduler *_scheduler;
    id <AWFrameworkClient> _proxy;
    NSXPCConnection *_connection;
    unsigned long long _tagIndex;
    unsigned long long _notificationMask;
    unsigned long long _eventMask;
    unsigned long long _attentionLostEventMask;
    _Bool _sampleWhileAbsent;
    _Bool _retroactiveTimeoutMode;
    _Bool _continuousFaceDetectMode;
    _Bool _samplingSuppressedNotificationSent;
    NSArray *_attentionLostTimeoutsSec;
    NSSet *_allowedHIDEventsForRemoteEvent;
    int _clientIndex;
    CDStruct_264b1ab3 *_clientState;
    AWAttentionEvent *_lastEvent;
    AWAttentionAwarenessConfiguration *_lastConfig;
    _Bool _invalid;
    NSString *_identifier;
    unsigned long long _samplingInterval;
    unsigned long long _samplingDelay;
    unsigned long long _streamingStartTime;
    double _streamingDuration;
}

- (void).cxx_destruct;
@property(nonatomic) double streamingDuration; // @synthesize streamingDuration=_streamingDuration;
@property(nonatomic) unsigned long long streamingStartTime; // @synthesize streamingStartTime=_streamingStartTime;
@property(readonly, nonatomic) int clientIndex; // @synthesize clientIndex=_clientIndex;
@property(readonly, nonatomic) _Bool invalid; // @synthesize invalid=_invalid;
@property(readonly, nonatomic) unsigned long long samplingDelay; // @synthesize samplingDelay=_samplingDelay;
@property(readonly, nonatomic) unsigned long long samplingInterval; // @synthesize samplingInterval=_samplingInterval;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)cancelFaceDetectStreamWithReply:(CDUnknownBlockType)arg1;
- (void)streamFaceDetectEventsWithReply:(CDUnknownBlockType)arg1;
- (_Bool)isStreamingClient;
- (void)notifyStreamingClientOfInterruption:(unsigned long long)arg1;
- (void)notifyClientOfStreamingEvent:(id)arg1;
- (void)pingWithReply:(CDUnknownBlockType)arg1;
- (unsigned long long)nextTimerForTime:(unsigned long long)arg1;
- (void)updateDeadlinesForTime:(unsigned long long)arg1;
- (unsigned long long)nextSampleTime;
- (unsigned long long)nextAttentionLostTime:(_Bool *)arg1;
- (void)pollWithTimeout:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)resetAttentionLostTimerWithReply:(CDUnknownBlockType)arg1;
- (void)_resetAttentionLostTimer;
- (void)getLastEvent:(CDUnknownBlockType)arg1;
- (_Bool)_interestedInHIDEvent:(struct __IOHIDEvent *)arg1 mask:(unsigned long long)arg2 metadata:(CDUnion_4b9e79fd *)arg3;
- (void)notifyHIDEvent:(struct __IOHIDEvent *)arg1 mask:(unsigned long long)arg2 timestamp:(unsigned long long)arg3;
- (void)notifyEvent:(unsigned long long)arg1 timestamp:(unsigned long long)arg2;
- (void)notifyEvent:(unsigned long long)arg1 timestamp:(unsigned long long)arg2 metadata:(CDUnion_4b9e79fd *)arg3;
- (void)updateEventTimesForMask:(unsigned long long)arg1 timestamp:(unsigned long long)arg2;
- (void)deliverPollEventType:(unsigned long long)arg1 event:(id)arg2;
- (void)deliverEvent:(id)arg1;
- (void)deliverNotification:(unsigned long long)arg1;
- (void)setClientConfig:(id)arg1 shouldReset:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;
- (void)reevaluateConfig;
- (_Bool)_setClientConfig:(id)arg1 shouldReset:(_Bool)arg2 error:(id *)arg3;
- (_Bool)_isSamplingClient;
- (unsigned long long)_activeEventMask;
- (void)invalidate;
- (void)invalidateWithHandler:(CDUnknownBlockType)arg1;
- (id)connection;
- (id)description;
- (void)initializeClientState;
- (id)initWithProxy:(id)arg1 connection:(id)arg2 clientConfig:(id)arg3 clientIndex:(int)arg4 scheduler:(id)arg5 error:(id *)arg6;

@end

