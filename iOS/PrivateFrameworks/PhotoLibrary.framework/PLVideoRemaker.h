//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class AVAssetExportSession, NSString, NSTimer, PFVideoAVObjectBuilder, PLProgressView;

@interface PLVideoRemaker : NSObject
{
    NSString *_trimmedPath;
    double _duration;
    double _trimStartTime;
    double _trimEndTime;
    int _mode;
    AVAssetExportSession *_exportSession;
    float _percentComplete;
    NSTimer *_progressTimer;
    PLProgressView *_progressView;
    id _delegate;
    _Bool _shouldExportToPhotoDataDirectory;
    CDUnknownBlockType _progressHandler;
    NSString *_exportPresetOverride;
    NSString *_customAccessibilityLabel;
    PFVideoAVObjectBuilder *__videoAVObjectBuilder;
}

+ (int)getSDRemakerModeForMode:(int)arg1;
+ (int)getHDRemakerModeForMode:(int)arg1;
+ (long long)approximateByteSizeForMode:(int)arg1 duration:(double)arg2;
+ (double)maximumDurationForTrimMode:(int)arg1;
+ (long long)fileLengthLimitForRemakerMode:(int)arg1;
@property(readonly, retain, nonatomic) PFVideoAVObjectBuilder *_videoAVObjectBuilder; // @synthesize _videoAVObjectBuilder=__videoAVObjectBuilder;
@property(copy, nonatomic) NSString *customAccessibilityLabel; // @synthesize customAccessibilityLabel=_customAccessibilityLabel;
@property(copy, nonatomic) NSString *exportPresetOverride; // @synthesize exportPresetOverride=_exportPresetOverride;
@property(nonatomic) _Bool shouldExportToPhotoDataDirectory; // @synthesize shouldExportToPhotoDataDirectory=_shouldExportToPhotoDataDirectory;
@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
- (void)_exportCompletedWithSuccess:(_Bool)arg1;
- (void)cancel;
- (void)_didEndRemakingWithTemporaryPath:(id)arg1;
- (id)_fileFormatForURL:(id)arg1;
- (void)remake;
- (id)_metadata;
- (void)_updateProgress;
- (void)_removeProgressTimer;
- (void)_resetProgressTimer;
- (void)setTrimEndTime:(double)arg1;
- (double)trimEndTime;
- (void)setTrimStartTime:(double)arg1;
- (double)trimStartTime;
@property(readonly, nonatomic) NSString *exportPreset;
- (void)setMode:(int)arg1;
- (int)mode;
- (void)setDuration:(double)arg1;
- (double)duration;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)progressView;
- (id)messageForRemakingProgress;
- (void)dealloc;
- (id)initWithManagedAsset:(id)arg1 applyVideoAdjustments:(_Bool)arg2;
- (id)initWithAVAsset:(id)arg1;
- (id)initWithPublishingMedia:(id)arg1;

@end

