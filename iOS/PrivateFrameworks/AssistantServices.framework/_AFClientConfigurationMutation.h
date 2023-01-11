//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFClientConfigurationMutating-Protocol.h>

@class AFAudioPlaybackRequest, AFClientConfiguration, NSString;

@interface _AFClientConfigurationMutation : NSObject <AFClientConfigurationMutating>
{
    AFClientConfiguration *_baseModel;
    long long _deviceRingerSwitchState;
    _Bool _isDeviceInSetupFlow;
    _Bool _isDeviceInCarDNDMode;
    _Bool _isDeviceInStarkMode;
    _Bool _isAccessibilityVoiceOverTouchEnabled;
    _Bool _isAccessibilityVibrationDisabled;
    float _outputVolume;
    AFAudioPlaybackRequest *_tapToSiriAudioPlaybackRequest;
    AFAudioPlaybackRequest *_twoShotAudioPlaybackRequest;
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasDeviceRingerSwitchState:1;
        unsigned int hasIsDeviceInSetupFlow:1;
        unsigned int hasIsDeviceInCarDNDMode:1;
        unsigned int hasIsDeviceInStarkMode:1;
        unsigned int hasIsAccessibilityVoiceOverTouchEnabled:1;
        unsigned int hasIsAccessibilityVibrationDisabled:1;
        unsigned int hasOutputVolume:1;
        unsigned int hasTapToSiriAudioPlaybackRequest:1;
        unsigned int hasTwoShotAudioPlaybackRequest:1;
    } _mutationFlags;
}

- (void).cxx_destruct;
- (id)generate;
- (void)setTwoShotAudioPlaybackRequest:(id)arg1;
- (void)setTapToSiriAudioPlaybackRequest:(id)arg1;
- (void)setOutputVolume:(float)arg1;
- (void)setIsAccessibilityVibrationDisabled:(_Bool)arg1;
- (void)setIsAccessibilityVoiceOverTouchEnabled:(_Bool)arg1;
- (void)setIsDeviceInStarkMode:(_Bool)arg1;
- (void)setIsDeviceInCarDNDMode:(_Bool)arg1;
- (void)setIsDeviceInSetupFlow:(_Bool)arg1;
- (void)setDeviceRingerSwitchState:(long long)arg1;
- (id)initWithBaseModel:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

