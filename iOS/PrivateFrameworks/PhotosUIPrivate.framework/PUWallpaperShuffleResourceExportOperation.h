//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXAsyncOperation.h>

@class NSError, NSURL, PFPosterEditConfiguration, PFPosterMedia, PIParallaxStyle;
@protocol PISegmentationItem, PISegmentationLoading;

__attribute__((visibility("hidden")))
@interface PUWallpaperShuffleResourceExportOperation : PXAsyncOperation
{
    PFPosterMedia *_posterMedia;
    PFPosterEditConfiguration *_editConfiguration;
    PIParallaxStyle *_style;
    PIParallaxStyle *_persistedStyle;
    NSURL *_sourceDirectory;
    NSURL *_exportDirectory;
    unsigned long long _options;
    id <PISegmentationItem> _segmentationItem;
    id <PISegmentationLoading> _exportTask;
    NSError *_error;
}

- (void).cxx_destruct;
@property(retain) NSError *error; // @synthesize error=_error;
@property(retain) id <PISegmentationLoading> exportTask; // @synthesize exportTask=_exportTask;
@property(retain, nonatomic) id <PISegmentationItem> segmentationItem; // @synthesize segmentationItem=_segmentationItem;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(retain, nonatomic) NSURL *exportDirectory; // @synthesize exportDirectory=_exportDirectory;
@property(retain, nonatomic) NSURL *sourceDirectory; // @synthesize sourceDirectory=_sourceDirectory;
@property(retain, nonatomic) PIParallaxStyle *persistedStyle; // @synthesize persistedStyle=_persistedStyle;
@property(retain, nonatomic) PIParallaxStyle *style; // @synthesize style=_style;
@property(copy, nonatomic) PFPosterEditConfiguration *editConfiguration; // @synthesize editConfiguration=_editConfiguration;
@property(copy, nonatomic) PFPosterMedia *posterMedia; // @synthesize posterMedia=_posterMedia;
- (void)px_finishIfPossible;
- (_Bool)px_shouldWaitForCancel;
- (void)cancel;
- (void)_handleExportCompletion:(id)arg1;
- (_Bool)_exportFromDirectory;
- (_Bool)_canExportFromDirectory;
- (_Bool)_tryExportFromDirectory;
- (void)px_start;

@end

