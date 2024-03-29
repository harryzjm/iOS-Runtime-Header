//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIImage.h>

@interface UIImage (HUAdditions)
+ (id)hu_imageForDescriptionBadgeType:(unsigned long long)arg1 tintColor:(id)arg2;
+ (id)hu_symbolNameForDescriptionBadgeType:(unsigned long long)arg1;
+ (id)hu_walletAppIconImage;
+ (id)hu_mutedMicrophoneImageInCircleWithTintColor:(id)arg1 backgroundColor:(id)arg2;
+ (id)hu_mutedMicrophoneImageWithTintColor:(id)arg1;
+ (id)hu_circleImageWithDiameter:(double)arg1;
+ (id)hu_avatarImageWithSymbolNamed:(id)arg1 textStyle:(id)arg2 scale:(long long)arg3 diameter:(double)arg4;
+ (id)hu_gearSymbolImageWithBadgeCount:(unsigned long long)arg1;
+ (id)hu_gearImageWithBadgeCount:(unsigned long long)arg1;
+ (id)hu_settingsImageUsingStandardSymbolConfiguration:(_Bool)arg1;
+ (id)hu_microphoneGlyphForTalkingState:(_Bool)arg1 usingStandardSymbolConfiguration:(_Bool)arg2;
+ (id)hu_recordingDeleteButton;
+ (id)hu_playButtonImageForAnnouncementPlaybackButton;
+ (id)hu_stopButtonImage;
+ (id)hu_pauseButton;
+ (id)hu_playButton;
+ (id)hu_smallAirPlayAudioImage;
+ (id)hu_airPlaySpeakerImage;
+ (id)hu_fastForwardButtonImage;
+ (id)hu_connectedCheckmarkImage;
+ (id)hu_recordingButtonMicOffImage;
+ (id)hu_recordingButtonMicOnImage;
+ (id)hu_recordingButtonSendImage;
+ (id)hu_recordingButtonStopImage;
+ (id)hu_recordingButtonWaveformImage;
+ (id)hu_waveformImage;
+ (id)hu_closeButtonImage;
+ (id)hu_exclamationMarkImage;
+ (id)hu_cellCheckmarkImage;
+ (id)hu_cameraErrorImage;
+ (id)hu_smallQRBadgeTemplateImage;
+ (id)hu_largeQRBadgeTemplateImage;
+ (id)hu_navigationBarGlyphList;
+ (id)hu_navigationBarGlyphPlus;
+ (id)hu_navigationBarGlyphHouse;
+ (id)hu_semiboldSymbolConfiguration;
+ (id)hu_navigationBarGlyphSize;
+ (id)hu_largeSymbolConfiguration;
+ (id)hu_standardSymbolConfiguration;
+ (id)hu_symbolFromProductPlatform:(id)arg1;
+ (id)hu_symbolForDevice:(id)arg1;
+ (id)hu_systemImageNamed:(id)arg1 withBackgroundColor:(id)arg2 symbolColor:(id)arg3 size:(struct CGSize)arg4 cornerRadius:(double)arg5 configuration:(id)arg6;
+ (id)hu_systemImageNamed:(id)arg1 withBackgroundColor:(id)arg2 symbolColor:(id)arg3 size:(struct CGSize)arg4 cornerRadius:(double)arg5;
+ (struct CGSize)hu_scaleSize:(struct CGSize)arg1 toSize:(struct CGSize)arg2 contentMode:(long long)arg3;
+ (id)hu_locationArrowTemplate;
- (id)hu_imageScaledToSize:(struct CGSize)arg1 contentMode:(long long)arg2;
@end

