//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol VCAudioIOControllerDelegate;

__attribute__((visibility("hidden")))
@interface VCAudioIOControllerClient : NSObject
{
    id _delegate;
    struct tagVCAudioFrameFormat _clientFormat;
    struct tagVCAudioFrameFormat _controllerFormat;
    int _deviceRole;
    _Bool _allowAudioRecording;
    int _operatingMode;
    _Bool _isRemoteCodecInfoValid;
    unsigned int _remoteCodecType;
    double _remoteCodecSampleRate;
    _Bool _isRemoteVersionInfoValid;
    struct VoiceIOFarEndVersionInfo _farEndVersionInfo;
    int _clientPid;
    _Bool _isInputMeteringEnabled;
    _Bool _isOutputMeteringEnabled;
    unsigned char _direction;
    struct _VCAudioIOControllerClientIO _sinkIO;
    struct _VCAudioIOControllerClientIO _sourceIO;
    unsigned int _audioSessionId;
    _Bool _isPrewarmingClient;
    unsigned long long _spatialToken;
    _Bool _spatialAudioDisabled;
    unsigned int _channelIndex;
}

@property(nonatomic) _Bool spatialAudioDisabled; // @synthesize spatialAudioDisabled=_spatialAudioDisabled;
@property(readonly, nonatomic) unsigned long long spatialToken; // @synthesize spatialToken=_spatialToken;
@property(nonatomic) unsigned int channelIndex; // @synthesize channelIndex=_channelIndex;
@property(readonly, nonatomic) _Bool isPrewarmingClient; // @synthesize isPrewarmingClient=_isPrewarmingClient;
@property(readonly, nonatomic) unsigned int audioSessionId; // @synthesize audioSessionId=_audioSessionId;
@property(nonatomic) unsigned char direction; // @synthesize direction=_direction;
@property(nonatomic, getter=isOuputMeteringEnabled) _Bool outputMeteringEnabled; // @synthesize outputMeteringEnabled=_isOutputMeteringEnabled;
@property(nonatomic, getter=isInputMeteringEnabled) _Bool inputMeteringEnabled; // @synthesize inputMeteringEnabled=_isInputMeteringEnabled;
@property(readonly, nonatomic) int clientPid; // @synthesize clientPid=_clientPid;
@property(readonly, nonatomic) struct VoiceIOFarEndVersionInfo farEndVersionInfo; // @synthesize farEndVersionInfo=_farEndVersionInfo;
@property(readonly, nonatomic) _Bool isRemoteVersionInfoValid; // @synthesize isRemoteVersionInfoValid=_isRemoteVersionInfoValid;
@property(readonly, nonatomic) double remoteCodecSampleRate; // @synthesize remoteCodecSampleRate=_remoteCodecSampleRate;
@property(readonly, nonatomic) unsigned int remoteCodecType; // @synthesize remoteCodecType=_remoteCodecType;
@property(readonly, nonatomic) _Bool isRemoteCodecInfoValid; // @synthesize isRemoteCodecInfoValid=_isRemoteCodecInfoValid;
@property(nonatomic) int operatingMode; // @synthesize operatingMode=_operatingMode;
@property(nonatomic) _Bool allowAudioRecording; // @synthesize allowAudioRecording=_allowAudioRecording;
@property(nonatomic) int deviceRole; // @synthesize deviceRole=_deviceRole;
@property(nonatomic) _Bool isMediaPriorityEnabled;
@property(nonatomic) _Bool isVoiceActivityEnabled;
@property(readonly, nonatomic) id <VCAudioIOControllerDelegate> delegate;
@property(nonatomic) const struct tagVCAudioFrameFormat *controllerFormat;
@property(readonly, nonatomic) const struct tagVCAudioFrameFormat *clientFormat;
- (void)setClientFormat:(const struct tagVCAudioFrameFormat *)arg1;
- (void)setRemoteCodecType:(unsigned int)arg1 sampleRate:(double)arg2;
- (void)setFarEndVersionInfo:(struct VoiceIOFarEndVersionInfo)arg1;
@property(readonly, nonatomic) struct _VCAudioIOControllerClientIO *sinkIO;
@property(readonly, nonatomic) struct _VCAudioIOControllerClientIO *sourceIO;
- (id)description;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 audioSessionId:(unsigned int)arg2 channelIndex:(unsigned int)arg3 sourceContext:(void *)arg4 sourceProcess:(CDUnknownFunctionPointerType)arg5 sinkContext:(void *)arg6 sinkProcess:(CDUnknownFunctionPointerType)arg7 clientPid:(int)arg8 isPrewarmingClient:(_Bool)arg9 spatialToken:(unsigned long long)arg10 isVoiceActivityEnabled:(_Bool)arg11 isMediaPriorityEnabled:(_Bool)arg12;

@end

