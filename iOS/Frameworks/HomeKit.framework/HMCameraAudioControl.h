//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMCharacteristic, _HMCameraAudioControl;

@interface HMCameraAudioControl
{
    _HMCameraAudioControl *_audioControl;
}

@property(retain, nonatomic) _HMCameraAudioControl *audioControl; // @synthesize audioControl=_audioControl;
- (void).cxx_destruct;
@property(readonly, nonatomic) HMCharacteristic *volume;
@property(readonly, nonatomic) HMCharacteristic *mute;
- (id)initWithAudioControl:(id)arg1;

@end
