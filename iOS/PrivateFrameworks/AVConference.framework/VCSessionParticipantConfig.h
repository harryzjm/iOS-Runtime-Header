//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSString, VCAudioCaptionsCoordinator, VCNetworkFeedbackController, VCSecurityKeyManager, VCSessionMediaNegotiator;
@protocol OS_nw_activity;

__attribute__((visibility("hidden")))
@interface VCSessionParticipantConfig : NSObject
{
    NSData *_participantData;
    NSString *_uuid;
    unsigned long long _idsParticipantID;
    _Bool _audioEnabled;
    _Bool _videoEnabled;
    _Bool _screenEnabled;
    _Bool _frequencyMeteringEnabled;
    _Bool _audioMuted;
    float _volume;
    float _audioPosition;
    _Bool _audioPaused;
    _Bool _videoPaused;
    unsigned char _videoQuality;
    unsigned int _visibilityIndex;
    unsigned int _prominenceIndex;
    NSData *_positionalInfo;
    struct __CFDictionary *_spatialMetadataEntryMap;
    NSDictionary *_mediaStates;
    _Bool _isServerRTxEnabled;
    void *_spatialMetadata;
    VCSessionMediaNegotiator *_mediaNegotiator;
    VCSecurityKeyManager *_securityKeyManager;
    NSString *_sessionUUID;
    unsigned int _transportSessionID;
    NSString *_idsDestination;
    int _processId;
    _Bool _isGKVoiceChat;
    _Bool _isLowLatencyAudio;
    long long _sessionMode;
    _Bool _isOneToOneModeEnabled;
    VCNetworkFeedbackController *_networkFeedbackController;
    VCAudioCaptionsCoordinator *_captionsCoordinator;
    _Bool _isUplinkRetransmissionEnabled;
    _Bool _screenControlEnabled;
    _Bool _outOfProcessCodecsEnabled;
    NSObject<OS_nw_activity> *_nwActivity;
}

@property(nonatomic) _Bool isServerRTxEnabled; // @synthesize isServerRTxEnabled=_isServerRTxEnabled;
@property(nonatomic) _Bool outOfProcessCodecsEnabled; // @synthesize outOfProcessCodecsEnabled=_outOfProcessCodecsEnabled;
@property(nonatomic) _Bool screenControlEnabled; // @synthesize screenControlEnabled=_screenControlEnabled;
@property(nonatomic) _Bool isUplinkRetransmissionEnabled; // @synthesize isUplinkRetransmissionEnabled=_isUplinkRetransmissionEnabled;
@property(retain, nonatomic) VCAudioCaptionsCoordinator *captionsCoordinator; // @synthesize captionsCoordinator=_captionsCoordinator;
@property(retain, nonatomic) VCNetworkFeedbackController *networkFeedbackController; // @synthesize networkFeedbackController=_networkFeedbackController;
@property(nonatomic) _Bool isOneToOneModeEnabled; // @synthesize isOneToOneModeEnabled=_isOneToOneModeEnabled;
@property(nonatomic) long long sessionMode; // @synthesize sessionMode=_sessionMode;
@property(nonatomic) _Bool isLowLatencyAudio; // @synthesize isLowLatencyAudio=_isLowLatencyAudio;
@property(nonatomic) _Bool isGKVoiceChat; // @synthesize isGKVoiceChat=_isGKVoiceChat;
@property(retain, nonatomic) NSString *idsDestination; // @synthesize idsDestination=_idsDestination;
@property(nonatomic) unsigned int transportSessionID; // @synthesize transportSessionID=_transportSessionID;
@property(retain, nonatomic) NSString *sessionUUID; // @synthesize sessionUUID=_sessionUUID;
@property(nonatomic) int processId; // @synthesize processId=_processId;
@property(retain, nonatomic) VCSecurityKeyManager *securityKeyManager; // @synthesize securityKeyManager=_securityKeyManager;
@property(retain, nonatomic) VCSessionMediaNegotiator *mediaNegotiator; // @synthesize mediaNegotiator=_mediaNegotiator;
@property(retain, nonatomic) NSDictionary *mediaStates; // @synthesize mediaStates=_mediaStates;
@property(nonatomic) NSObject<OS_nw_activity> *nwActivity; // @synthesize nwActivity=_nwActivity;
@property(retain, nonatomic) NSData *positionalInfo; // @synthesize positionalInfo=_positionalInfo;
@property(nonatomic) unsigned int prominenceIndex; // @synthesize prominenceIndex=_prominenceIndex;
@property(nonatomic) unsigned int visibilityIndex; // @synthesize visibilityIndex=_visibilityIndex;
@property(nonatomic) unsigned char videoQuality; // @synthesize videoQuality=_videoQuality;
@property(nonatomic) _Bool videoPaused; // @synthesize videoPaused=_videoPaused;
@property(nonatomic) _Bool audioPaused; // @synthesize audioPaused=_audioPaused;
@property(nonatomic) float audioPosition; // @synthesize audioPosition=_audioPosition;
@property(nonatomic) float volume; // @synthesize volume=_volume;
@property(nonatomic) _Bool audioMuted; // @synthesize audioMuted=_audioMuted;
@property(nonatomic) _Bool frequencyMeteringEnabled; // @synthesize frequencyMeteringEnabled=_frequencyMeteringEnabled;
@property(nonatomic) _Bool screenEnabled; // @synthesize screenEnabled=_screenEnabled;
@property(nonatomic) _Bool videoEnabled; // @synthesize videoEnabled=_videoEnabled;
@property(nonatomic) _Bool audioEnabled; // @synthesize audioEnabled=_audioEnabled;
@property(nonatomic) unsigned long long idsParticipantID; // @synthesize idsParticipantID=_idsParticipantID;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) NSData *participantData; // @synthesize participantData=_participantData;
@property(nonatomic) struct __CFDictionary *spatialMetadataEntryMap;
- (void)cleanupNwActivity;
@property(nonatomic) void *spatialMetadata;
- (id)description;
- (void)dealloc;

@end

