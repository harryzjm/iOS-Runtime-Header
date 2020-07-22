//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <AVConference/AVCRateControllerDelegate-Protocol.h>
#import <AVConference/VCMediaStreamDelegate-Protocol.h>
#import <AVConference/VCSecurityEventHandler-Protocol.h>

@class AVCRateController, NSArray, NSData, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, VCMediaNegotiationBlob;
@protocol OS_dispatch_queue, VCSessionParticipantDelegate, VCSessionParticipantStreamDelegate;

__attribute__((visibility("hidden")))
@interface VCSessionParticipant : NSObject <AVCRateControllerDelegate, VCMediaStreamDelegate, VCSecurityEventHandler>
{
    unsigned int _state;
    union tagNTP _creationTime;
    NSObject<OS_dispatch_queue> *_participantQueue;
    int _processId;
    id _delegate;
    id _streamDelegate;
    NSString *_uuid;
    NSString *_idsDestination;
    NSData *_opaqueData;
    VCMediaNegotiationBlob *_mediaBlob;
    NSDictionary *_participantInfo;
    NSMutableArray *_startingStreams;
    NSMutableArray *_stoppingStreams;
    NSMutableArray *_runningStreams;
    NSMutableDictionary *_participantStreams;
    AVCRateController *_rateController;
    float _volume;
    float _audioPosition;
    _Bool _isMuted;
    _Bool _frequencyMeteringEnabled;
}

@property(readonly, nonatomic) union tagNTP creationTime; // @synthesize creationTime=_creationTime;
@property(readonly, nonatomic) NSData *opaqueData; // @synthesize opaqueData=_opaqueData;
@property(readonly, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (void)handleEncryptionInfoChange:(id)arg1;
- (void)vcMediaStream:(id)arg1 updateFrequencyLevel:(id)arg2 isInputMeter:(_Bool)arg3;
- (void)vcMediaStream:(id)arg1 didResumeStream:(_Bool)arg2 error:(id)arg3;
- (void)vcMediaStream:(id)arg1 didPauseStream:(_Bool)arg2 error:(id)arg3;
- (void)vcMediaStreamDidStop:(id)arg1;
- (void)vcMediaStream:(id)arg1 didStartStream:(_Bool)arg2 error:(id)arg3;
@property(nonatomic, getter=isFrequencyMeteringEnabled) _Bool frequencyMeteringEnabled;
- (_Bool)setAudioPosition:(float)arg1;
- (_Bool)setVolume:(float)arg1;
@property(nonatomic, getter=isMuted) _Bool muted; // @synthesize muted=_isMuted;
@property(readonly, nonatomic) NSArray *audioStreams;
- (void)stop;
- (void)start;
@property(nonatomic) id <VCSessionParticipantStreamDelegate> streamDelegate;
@property(readonly, nonatomic) id <VCSessionParticipantDelegate> delegate;
- (char *)participantStateToString:(unsigned int)arg1;
- (void)setState:(unsigned int)arg1;
- (void)dealloc;
- (id)initWithIDSDestination:(id)arg1 delegate:(id)arg2 processId:(int)arg3;
- (_Bool)configureWithDatagramChannelToken:(unsigned int)arg1 isContinuity:(_Bool)arg2;
- (id)newStreamConfigurationWithRemoteSSRC:(unsigned int)arg1;
- (id)generateEncryptionKey;
- (id)streamsToString;
@property(readonly, copy) NSString *description;
- (void)dispatchedStreamDidStop:(id)arg1;
- (void)dispatchedStream:(id)arg1 didStart:(_Bool)arg2 error:(id)arg3;
- (void)dispatchedStop;
- (void)dispatchedStart;
- (void)applyNegotiatedStreamConfiguration:(id)arg1;
@property(readonly, nonatomic) NSMutableDictionary *streamConfiguration;
- (void)negotiateStreamConfiguration:(id)arg1;
- (void)rateController:(void *)arg1 targetBitrateDidChange:(unsigned int)arg2 rateChangeCounter:(unsigned int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

