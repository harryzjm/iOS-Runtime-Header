//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <SpringBoardUIServices/SBFLegibilitySettingsProvider-Protocol.h>
#import <SpringBoardUIServices/SBFLegibilitySettingsProviderDelegate-Protocol.h>
#import <SpringBoardUIServices/SBSUIWallpaperPreviewViewDelegate-Protocol.h>

@class AVURLAsset, NSDictionary, NSString, NSTimer, SBFWallpaperConfiguration, SBFWallpaperConfigurationManager, SBFWallpaperOptions, SBSUIProgressHUD, UIImage, _SBSUIOrientedImageView, _UILegibilitySettings;
@protocol SBFLegibilitySettingsProviderDelegate, SBSUIWallpaperPreviewViewControllerDelegate;

@interface SBSUIWallpaperPreviewViewController : UIViewController <SBFLegibilitySettingsProviderDelegate, SBSUIWallpaperPreviewViewDelegate, SBFLegibilitySettingsProvider>
{
    NSTimer *_dateTimer;
    SBFWallpaperConfigurationManager *_wallpaperConfigurationManager;
    SBFWallpaperConfiguration *_initialConfiguration;
    UIImage *_wallpaperImage;
    NSDictionary *_wallpaperImageDict;
    NSDictionary *_proceduralWallpaper;
    NSDictionary *_proceduralWallpaperOptions;
    _Bool _allowScrolling;
    long long _variant;
    NSString *_name;
    _Bool _colorSamplingEnabled;
    AVURLAsset *_video;
    NSDictionary *_videoDict;
    double _stillTimeInVideo;
    SBFWallpaperOptions *_options;
    NSDictionary *_optionsDict;
    _Bool _enableButtons;
    _Bool _disableContents;
    _Bool _disableParallax;
    SBSUIProgressHUD *_hud;
    _SBSUIOrientedImageView *_homeScreenPreviewView;
    _Bool _motionEnabled;
    _Bool _irisEnabled;
    id <SBFLegibilitySettingsProviderDelegate> _delegate;
    id <SBSUIWallpaperPreviewViewControllerDelegate> _previewDelegate;
    double _zoomScale;
    double _parallaxFactor;
    SBFWallpaperConfiguration *_wallpaperConfiguration;
    struct CGRect _cropRect;
}

- (void).cxx_destruct;
@property(copy, nonatomic) SBFWallpaperConfiguration *wallpaperConfiguration; // @synthesize wallpaperConfiguration=_wallpaperConfiguration;
@property(nonatomic) double parallaxFactor; // @synthesize parallaxFactor=_parallaxFactor;
@property(nonatomic) double zoomScale; // @synthesize zoomScale=_zoomScale;
@property(nonatomic) struct CGRect cropRect; // @synthesize cropRect=_cropRect;
@property(nonatomic) _Bool irisEnabled; // @synthesize irisEnabled=_irisEnabled;
@property(nonatomic) _Bool motionEnabled; // @synthesize motionEnabled=_motionEnabled;
@property(readonly) UIImage *wallpaperImage; // @synthesize wallpaperImage=_wallpaperImage;
@property(nonatomic) __weak id <SBSUIWallpaperPreviewViewControllerDelegate> previewDelegate; // @synthesize previewDelegate=_previewDelegate;
@property(nonatomic) __weak id <SBFLegibilitySettingsProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)colorSamplingEnabled;
- (void)setColorSamplingEnabled:(_Bool)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_startDateTimer;
- (void)_stopDateTimer;
- (void)_updateDateView;
- (id)_dateView;
- (void)_enableIrisOrParallaxIfEligible;
- (void)_displaySettingWallpaperHUD;
- (id)_wallpaperViewIfLoaded;
- (id)_wallpaperView;
- (id)_previewViewIfLoaded;
- (id)_previewView;
- (id)_colorWallpaperViewWithFrame:(struct CGRect)arg1 variant:(long long)arg2 configuration:(id)arg3;
- (id)_proceduralWallpaperViewWithFrame:(struct CGRect)arg1 variant:(long long)arg2 configuration:(id)arg3;
- (id)_wallpaperViewWithFrame:(struct CGRect)arg1 variant:(long long)arg2 options:(id)arg3;
- (id)_wallpaperViewWithFrame:(struct CGRect)arg1 image:(id)arg2 video:(id)arg3 videoURL:(id)arg4 stillTimeInVideo:(double)arg5 supportsCropping:(_Bool)arg6 variant:(long long)arg7 needsWallpaperDimming:(_Bool)arg8;
- (id)_wallpaperViewWithFrame:(struct CGRect)arg1;
- (void)userDidTapOnSetButton:(id)arg1;
- (void)userDidTapOnCancelButton:(id)arg1;
- (void)userDidTapOnParallaxButton:(id)arg1;
- (void)userDidTapOnIrisButton:(id)arg1;
- (void)providerLegibilitySettingsChanged:(id)arg1;
@property(readonly, nonatomic) _UILegibilitySettings *legibilitySettings;
- (void)setMotionEnabled:(_Bool)arg1 updateParallaxOnWallpaperView:(_Bool)arg2;
@property(readonly, copy, nonatomic) SBFWallpaperOptions *wallpaperOptions;
- (void)_applyHomeScreenPreview;
- (void)_setProceduralWallpaperForLocationsOnMainThread:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_setImageWallpaperForLocationsOnMainThread:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setImageWallpaperForLocations:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_setWallpaperImagesOnMainThread:(id)arg1 options:(id)arg2 locations:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)setWallpaperImages:(id)arg1 options:(id)arg2 locations:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)setWallpaperImages:(id)arg1 options:(id)arg2 locations:(long long)arg3;
- (void)_setWallpaperForLocationsOnMainThread:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setWallpaperForLocations:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setWallpaperForLocations:(long long)arg1;
- (double)_parallaxFactor;
- (long long)_wallpaperType;
- (id)_wallpaperTypeDescription;
- (id)wallpaperConfigurationManager;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithScrollableImage:(id)arg1 video:(id)arg2 time:(double)arg3;
- (id)initWithScrollableImage:(id)arg1;
- (id)initWithImages:(id)arg1 videos:(id)arg2 variant:(long long)arg3 options:(id)arg4 disableSegmentedControl:(_Bool)arg5 enableButtons:(_Bool)arg6 disableContents:(_Bool)arg7 disableParallax:(_Bool)arg8;
- (id)initWithImages:(id)arg1 videos:(id)arg2 variant:(long long)arg3 options:(id)arg4 disableSegmentedControl:(_Bool)arg5 enableButtons:(_Bool)arg6 disableContents:(_Bool)arg7;
- (id)initWithImage:(id)arg1 video:(id)arg2 variant:(long long)arg3 options:(id)arg4 disableSegmentedControl:(_Bool)arg5 enableButtons:(_Bool)arg6 disableContents:(_Bool)arg7;
- (id)initWithImage:(id)arg1 name:(id)arg2 video:(id)arg3 time:(double)arg4;
- (id)initWithImage:(id)arg1 name:(id)arg2;
- (id)initWithProceduralWallpaper:(id)arg1 options:(id)arg2 variant:(long long)arg3 disableSegmentedControl:(_Bool)arg4 enableButtons:(_Bool)arg5 disableContents:(_Bool)arg6;
- (id)initWithProceduralWallpaper:(id)arg1 options:(id)arg2;
- (id)initWithWallpaperVariant:(long long)arg1;
- (id)initWithImage:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
