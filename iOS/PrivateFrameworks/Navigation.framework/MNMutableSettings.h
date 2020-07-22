//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface MNMutableSettings
{
}

+ (id)settingsWithSettings:(id)arg1;
@property(nonatomic) _Bool shouldUseGuidanceEventManager; // @dynamic shouldUseGuidanceEventManager;
@property(nonatomic) _Bool isTracePlaybackCameraTestMode; // @dynamic isTracePlaybackCameraTestMode;
@property(nonatomic) _Bool shouldLoadETAUpdatesFromTrace; // @dynamic shouldLoadETAUpdatesFromTrace;
@property(nonatomic) _Bool shouldLoadReroutesFromTrace; // @dynamic shouldLoadReroutesFromTrace;
@property(nonatomic) _Bool shouldLoadInitialRouteFromTrace; // @dynamic shouldLoadInitialRouteFromTrace;
@property(nonatomic) double initialTraceSpeedMultiplier; // @dynamic initialTraceSpeedMultiplier;
@property(nonatomic) double alightSignalTimeBuffer; // @dynamic alightSignalTimeBuffer;
@property(nonatomic) long long fakeTrafficIncidentAlert; // @dynamic fakeTrafficIncidentAlert;
@property(nonatomic) double backgroundTimeWindow; // @dynamic backgroundTimeWindow;
@property(nonatomic) double initialRequestDelay; // @dynamic initialRequestDelay;
@property(nonatomic) double etaRequestInterval; // @dynamic etaRequestInterval;
@property(retain, nonatomic) NSString *voiceLanguage; // @dynamic voiceLanguage;
@property(nonatomic) _Bool beepBeforeInstruction; // @dynamic beepBeforeInstruction;
@property(nonatomic) _Bool walkingVoiceGuidance; // @dynamic walkingVoiceGuidance;
@property(nonatomic) _Bool drivingVoiceGuidance; // @dynamic drivingVoiceGuidance;
@property(nonatomic) unsigned long long maxAlternateRoutesCount; // @dynamic maxAlternateRoutesCount;
@property(nonatomic) _Bool speechEnabled; // @dynamic speechEnabled;
@property(nonatomic) _Bool muteSpeechOverride; // @dynamic muteSpeechOverride;
@property(nonatomic) _Bool pauseSpokenAudio; // @dynamic pauseSpokenAudio;
@property(nonatomic) unsigned long long distanceUnits; // @dynamic distanceUnits;
@property(nonatomic) unsigned long long voiceVolume; // @dynamic voiceVolume;

@end
