//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibrary/PLUIImageViewController.h>

#import <PhotosUI/PUPhotoPickerSelectionHandler-Protocol.h>
#import <PhotosUI/PUPhotoPickerServicesConsumer-Protocol.h>
#import <PhotosUI/PUVideoPlayerViewDelegate-Protocol.h>
#import <PhotosUI/UIGestureRecognizerDelegate-Protocol.h>

@class ISAnimatedImageView, NSString, NSURL, PHAsset, PHLivePhotoView, PUBrowsingIrisPlayer, PUPhotoPickerAppearance, PUVideoPlayerView;
@protocol PUPhotoPicker;

__attribute__((visibility("hidden")))
@interface PUUIImageViewController : PLUIImageViewController <UIGestureRecognizerDelegate, PUVideoPlayerViewDelegate, PUPhotoPickerServicesConsumer, PUPhotoPickerSelectionHandler>
{
    _Bool _isIris;
    _Bool _isAutoloop;
    _Bool _isAnimatedImage;
    _Bool _wantsLivePhotoResult;
    _Bool _wantsVideoURLResult;
    PHAsset *_asset;
    int __imageManagerVideoRequestID;
    int __animatedImageRequestID;
    id <PUPhotoPicker> _photoPicker;
    PUBrowsingIrisPlayer *__irisPlayer;
    PHLivePhotoView *__livePhotoView;
    PUVideoPlayerView *__autoloopView;
    ISAnimatedImageView *__animatedImageView;
    NSURL *__videoAssetURL;
    NSURL *__assetURL;
    PUPhotoPickerAppearance *_previousPhotoPickerAppearance;
}

@property(retain, nonatomic) PUPhotoPickerAppearance *previousPhotoPickerAppearance; // @synthesize previousPhotoPickerAppearance=_previousPhotoPickerAppearance;
@property(setter=_setAnimatedImageRequestID:) int _animatedImageRequestID; // @synthesize _animatedImageRequestID=__animatedImageRequestID;
@property(setter=_setImageManagerVideoRequestID:) int _imageManagerVideoRequestID; // @synthesize _imageManagerVideoRequestID=__imageManagerVideoRequestID;
@property(retain, nonatomic, setter=_setAssetURL:) NSURL *_assetURL; // @synthesize _assetURL=__assetURL;
@property(retain, nonatomic, setter=_setVideoAssetURL:) NSURL *_videoAssetURL; // @synthesize _videoAssetURL=__videoAssetURL;
@property(retain, nonatomic, setter=_setAnimatedImageView:) ISAnimatedImageView *_animatedImageView; // @synthesize _animatedImageView=__animatedImageView;
@property(retain, nonatomic, setter=_setAutoloopView:) PUVideoPlayerView *_autoloopView; // @synthesize _autoloopView=__autoloopView;
@property(retain, nonatomic, setter=_setLivePhotoView:) PHLivePhotoView *_livePhotoView; // @synthesize _livePhotoView=__livePhotoView;
@property(retain, nonatomic) PUBrowsingIrisPlayer *_irisPlayer; // @synthesize _irisPlayer=__irisPlayer;
@property(nonatomic) __weak id <PUPhotoPicker> photoPicker; // @synthesize photoPicker=_photoPicker;
- (void).cxx_destruct;
- (_Bool)_isPhotosPickerExtensionAvailable;
- (void)performPhotoPickerSelection;
- (void)setPhotoPickerMediaTypes:(id)arg1;
- (_Bool)isDisplayedInPhotoPicker;
- (_Bool)uiipc_useTelephonyUI;
- (_Bool)wantsLegacyImageUI;
- (_Bool)wantsAutoloopUI;
- (unsigned long long)imagePickerSavingOptions;
- (_Bool)imagePickerAllowsEditing;
- (id)chooseButtonTitle;
- (_Bool)force1XCroppedImage;
- (_Bool)forceNativeScreenScale;
- (_Bool)disableVideoTrimMessage;
- (id)videoMaximumDuration;
- (_Bool)viewImageBeforeSelecting;
- (id)exportPreset;
- (id)videoQuality;
- (_Bool)doNotTranscode;
- (void)_finishAutoloopDeliveryWithVideoURL:(id)arg1 gifURL:(id)arg2;
- (void)handleAutoloopSelected;
- (void)handleVideoSelectionWithURL:(id)arg1 args:(id)arg2;
- (void)handleMediaSelectionUsingTile:(id)arg1 managedAsset:(id)arg2 args:(id)arg3 includeEditing:(_Bool)arg4;
- (void)cropOverlayWasOKed:(id)arg1;
- (void)_generateGIFFromVideoURL:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_fetchAnimatedImageWithCompletion:(CDUnknownBlockType)arg1;
- (void)_fetchLivePhotoWithCompletion:(CDUnknownBlockType)arg1;
- (void)_fetchVideoWithCompletion:(CDUnknownBlockType)arg1;
- (void)_fetchPreviewImageWithCompletion:(CDUnknownBlockType)arg1;
- (void)_handleLivePhotoRequestResult:(id)arg1 info:(id)arg2;
- (void)_loadLivePhoto;
- (void)_handleAutoloopVideoResult:(id)arg1;
- (void)_handleAutoloopPreviewImageResult:(id)arg1;
- (void)_loadAutoloopVideo;
- (void)_handleAnimatedImageResult:(id)arg1;
- (void)_handleAnimatedImagePreviewResult:(id)arg1;
- (void)_loadAnimatedImage;
- (void)videoPlayerView:(id)arg1 isReadyForDisplayDidChange:(_Bool)arg2;
- (id)irisPlayerViewViewHostingGestureRecognizers:(id)arg1;
- (id)irisPlayerView:(id)arg1 delegateForGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setIrisPlayer:(id)arg1;
- (void)setupNavigationItem;
- (void)loadView;
- (id)initWithPhoto:(id)arg1 imagePickerProperties:(id)arg2 expectsLivePhoto:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

