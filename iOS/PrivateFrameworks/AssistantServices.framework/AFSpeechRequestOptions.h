//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSSecureCoding-Protocol.h>

@class NSDictionary, NSFileHandle, NSNumber, NSString, NSURL, NSXPCListenerEndpoint;

@interface AFSpeechRequestOptions : NSObject <NSSecureCoding>
{
    _Bool _isEyesFree;
    _Bool _useAutomaticEndpointing;
    _Bool _useStreamingDictation;
    _Bool _isInitialBringUp;
    _Bool _acousticIdEnabled;
    _Bool _releaseAudioSessionOnRecordingCompletion;
    _Bool _usePrelisteningMode;
    _Bool _pendCallbacksUntilAfterContinuation;
    _Bool _useBorealisBuffer;
    _Bool _suppressStopAlert;
    long long _activationEvent;
    NSString *_activationDeviceIdentifier;
    NSString *_serverCommandId;
    double _homeButtonDownEventTime;
    unsigned long long _homeButtonDownEventMachAbsoluteTime;
    double _activationEventTime;
    unsigned long long _activationEventMachAbsoluteTime;
    double _expectedActivationEventTime;
    NSNumber *_homeButtonUpFromBeep;
    long long _audioFileType;
    NSFileHandle *_audioFileHandle;
    NSDictionary *_voiceTriggerEventInfo;
    NSString *_recordDeviceIdentifier;
    NSXPCListenerEndpoint *_speechRecordingEventListeningEndpoint;
    NSNumber *_notifyState;
    NSURL *_audioFileURL;
    unsigned long long _bargeInOptions;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) unsigned long long bargeInOptions; // @synthesize bargeInOptions=_bargeInOptions;
@property(nonatomic) _Bool suppressStopAlert; // @synthesize suppressStopAlert=_suppressStopAlert;
@property(copy, nonatomic) NSURL *audioFileURL; // @synthesize audioFileURL=_audioFileURL;
@property(copy, nonatomic) NSNumber *notifyState; // @synthesize notifyState=_notifyState;
@property(nonatomic) _Bool useBorealisBuffer; // @synthesize useBorealisBuffer=_useBorealisBuffer;
@property(nonatomic) _Bool pendCallbacksUntilAfterContinuation; // @synthesize pendCallbacksUntilAfterContinuation=_pendCallbacksUntilAfterContinuation;
@property(nonatomic) _Bool usePrelisteningMode; // @synthesize usePrelisteningMode=_usePrelisteningMode;
@property(retain, nonatomic) NSXPCListenerEndpoint *speechRecordingEventListeningEndpoint; // @synthesize speechRecordingEventListeningEndpoint=_speechRecordingEventListeningEndpoint;
@property(copy, nonatomic) NSString *recordDeviceIdentifier; // @synthesize recordDeviceIdentifier=_recordDeviceIdentifier;
@property(nonatomic) _Bool releaseAudioSessionOnRecordingCompletion; // @synthesize releaseAudioSessionOnRecordingCompletion=_releaseAudioSessionOnRecordingCompletion;
@property(copy, nonatomic) NSDictionary *voiceTriggerEventInfo; // @synthesize voiceTriggerEventInfo=_voiceTriggerEventInfo;
@property(retain, nonatomic) NSFileHandle *audioFileHandle; // @synthesize audioFileHandle=_audioFileHandle;
@property(nonatomic) long long audioFileType; // @synthesize audioFileType=_audioFileType;
@property(nonatomic) _Bool acousticIdEnabled; // @synthesize acousticIdEnabled=_acousticIdEnabled;
@property(copy, nonatomic) NSNumber *homeButtonUpFromBeep; // @synthesize homeButtonUpFromBeep=_homeButtonUpFromBeep;
@property(nonatomic) _Bool isInitialBringUp; // @synthesize isInitialBringUp=_isInitialBringUp;
@property(nonatomic) double expectedActivationEventTime; // @synthesize expectedActivationEventTime=_expectedActivationEventTime;
@property(nonatomic) unsigned long long activationEventMachAbsoluteTime; // @synthesize activationEventMachAbsoluteTime=_activationEventMachAbsoluteTime;
@property(nonatomic) double activationEventTime; // @synthesize activationEventTime=_activationEventTime;
@property(nonatomic) unsigned long long homeButtonDownEventMachAbsoluteTime; // @synthesize homeButtonDownEventMachAbsoluteTime=_homeButtonDownEventMachAbsoluteTime;
@property(nonatomic) double homeButtonDownEventTime; // @synthesize homeButtonDownEventTime=_homeButtonDownEventTime;
@property(nonatomic) _Bool useStreamingDictation; // @synthesize useStreamingDictation=_useStreamingDictation;
@property(nonatomic) _Bool useAutomaticEndpointing; // @synthesize useAutomaticEndpointing=_useAutomaticEndpointing;
@property(copy, nonatomic) NSString *serverCommandId; // @synthesize serverCommandId=_serverCommandId;
@property(nonatomic) _Bool isEyesFree; // @synthesize isEyesFree=_isEyesFree;
@property(copy, nonatomic) NSString *activationDeviceIdentifier; // @synthesize activationDeviceIdentifier=_activationDeviceIdentifier;
@property(nonatomic) long long activationEvent; // @synthesize activationEvent=_activationEvent;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSString *btDeviceAddress;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)initWithActivationEvent:(long long)arg1;

@end

