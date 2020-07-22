//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVFAudio/AVAudioMixing-Protocol.h>

@class AVAudioEnvironmentDistanceAttenuationParameters, AVAudioEnvironmentReverbParameters, NSArray, NSString;

@interface AVAudioEnvironmentNode <AVAudioMixing>
{
}

@property(readonly, nonatomic) AVAudioEnvironmentReverbParameters *reverbParameters;
@property(readonly, nonatomic) AVAudioEnvironmentDistanceAttenuationParameters *distanceAttenuationParameters;
@property(nonatomic) struct AVAudio3DAngularOrientation listenerAngularOrientation;
@property(nonatomic) struct AVAudio3DVectorOrientation listenerVectorOrientation;
@property(nonatomic) struct AVAudio3DPoint listenerPosition;
@property(readonly, nonatomic) NSArray *applicableRenderingAlgorithms;
@property(readonly, nonatomic) unsigned long long nextAvailableInputBus;
@property(nonatomic) float outputVolume;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) float volume;

@end

