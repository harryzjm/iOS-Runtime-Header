//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AVAudioOutputSettings.h"

__attribute__((visibility("hidden")))
@interface AVAVAudioSettingsAudioOutputSettings : AVAudioOutputSettings
{
}

+ (id)_audioOutputSettingsWithAudioSettingsDictionary:(id)arg1 exceptionReason:(id *)arg2;
+ (id)eligibleOutputSettingsDictionaryKeys;
- (id)audioOptions;
- (struct AudioChannelLayout *)copyAudioChannelLayoutForSourceFormatDescription:(struct opaqueCMFormatDescription *)arg1 audioChannelLayoutSize:(unsigned long long *)arg2;
- (void)getAudioStreamBasicDescription:(struct AudioStreamBasicDescription *)arg1 forAudioFileTypeID:(unsigned int)arg2 sourceFormatDescription:(struct opaqueCMFormatDescription *)arg3;
- (_Bool)canFullySpecifyOutputFormatReturningReason:(id *)arg1;
- (_Bool)encoderIsAvailableOnCurrentSystemReturningError:(id *)arg1;
- (_Bool)willYieldCompressedSamples;
- (id)initWithTrustedAVAudioSettingsDictionary:(id)arg1;
- (id)initWithAVAudioSettingsDictionary:(id)arg1 exceptionReason:(id *)arg2;

@end

