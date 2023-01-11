//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Navigation/NSObject-Protocol.h>

@class MNAudioOutputSetting, MNAudioOutputSettingsManager, NSArray;

@protocol MNAudioOutputSettingsManagerObserver <NSObject>
- (void)audioOutputSettingsManager:(MNAudioOutputSettingsManager *)arg1 didUpdateRouteSelection:(unsigned long long)arg2;
- (void)audioOutputSettingsManager:(MNAudioOutputSettingsManager *)arg1 didUpdateCurrentSettingForVoicePrompt:(MNAudioOutputSetting *)arg2;
- (void)audioOutputSettingsManager:(MNAudioOutputSettingsManager *)arg1 didUpdateCurrentSetting:(MNAudioOutputSetting *)arg2;
- (void)audioOutputSettingsManager:(MNAudioOutputSettingsManager *)arg1 didUpdateSettings:(NSArray *)arg2;
@end
