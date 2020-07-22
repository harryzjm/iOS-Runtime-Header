//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface CKAudioMediaObject
{
}

+ (id)generateThumbnailForWidth:(double)arg1 color:(id)arg2 powerLevels:(id)arg3 fileURL:(id)arg4;
+ (id)_cachedPowerLevelsForKey:(id)arg1;
+ (void)_cachePowerLevels:(id)arg1 forKey:(id)arg2;
+ (id)attachmentSummary:(unsigned long long)arg1;
+ (id)fallbackFilenamePrefix;
+ (id)UTITypes;
+ (Class)__ck_attachmentItemClass;
- (id)generatePlaceholderThumbnailForWidth:(double)arg1;
- (id)previewItemTitle;
- (id)generateThumbnailForWidth:(double)arg1 orientation:(BOOL)arg2;
- (id)savedPreviewFromURL:(id)arg1 forOrientation:(BOOL)arg2;
- (void)savePreview:(id)arg1 toURL:(id)arg2 forOrientation:(BOOL)arg3;
- (id)previewFilenameExtension;
- (id)generatePreviewFromThumbnail:(id)arg1 width:(double)arg2 orientation:(BOOL)arg3;
- (id)composeWaveformForWidth:(double)arg1 orientation:(BOOL)arg2;
- (id)waveformForWidth:(double)arg1 orientation:(BOOL)arg2;
- (void)export:(id)arg1;
- (_Bool)canExport;
- (Class)coloredBalloonViewClass;
- (_Bool)isLikeAudioMessage;
@property(retain, nonatomic) NSArray *powerLevels; // @dynamic powerLevels;
- (_Bool)shouldBeQuickLooked;
- (int)mediaType;

@end
