//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUI/PXTrimToolPlayerWrapperNUMediaViewPlayerItemSource-Protocol.h>

@class NSArray, NUMediaView, PHLivePhoto, PHLivePhotoView, PICompositionController, PLPhotoEditRenderer, PUPhotoEditToolController, UIButton, UIFont, UIImage, UIView;
@protocol NUImageProperties;

@protocol PUPhotoEditToolControllerDelegate <PXTrimToolPlayerWrapperNUMediaViewPlayerItemSource>
- (struct CGRect)previewViewFrame;
- (_Bool)isImageFrameReady;
- (_Bool)isImageZooming;
- (_Bool)hasLoopingVideoAdjustment;
- (void)configureEnablenessOfControlButton:(UIButton *)arg1 animated:(_Bool)arg2 canVisuallyDisable:(_Bool)arg3;
- (void)toggleLivePhotoActive;
- (void)updateMutedState;
- (void)dismissLivePhotoRevertConfirmationAlert;
- (id <NUImageProperties>)imageProperties;
- (UIFont *)fontForButtons;
- (_Bool)isHighframeRateVideo;
- (_Bool)isVideoOn;
- (_Bool)isStandardVideo;
- (_Bool)isLoopingVideo;
- (UIView *)toolControllerHitEventForwardView:(PUPhotoEditToolController *)arg1;
- (NUMediaView *)mediaView;
- (PHLivePhotoView *)mainLivePhotoView;
- (void)updateProgressIndicatorAnimated:(_Bool)arg1;
- (struct CGPoint)toolController:(PUPhotoEditToolController *)arg1 viewPointFromOriginalPoint:(struct CGPoint)arg2 view:(UIView *)arg3;
- (struct CGPoint)toolController:(PUPhotoEditToolController *)arg1 originalPointFromViewPoint:(struct CGPoint)arg2 view:(UIView *)arg3;
- (void)toolControllerDidFinish:(PUPhotoEditToolController *)arg1;
- (unsigned long long)toolControllerSourceAssetType:(PUPhotoEditToolController *)arg1;
- (struct CGSize)toolControllerOriginalImageSize:(PUPhotoEditToolController *)arg1;
- (struct CGSize)toolControllerOriginalOrientedImageSize:(PUPhotoEditToolController *)arg1;
- (void)toolControllerRequestLivePhoto:(PUPhotoEditToolController *)arg1 filters:(NSArray *)arg2 completion:(void (^)(PHLivePhoto *))arg3;
- (PHLivePhoto *)toolControllerLivePhoto:(PUPhotoEditToolController *)arg1;
- (UIView *)toolControllerPreviewView:(PUPhotoEditToolController *)arg1;
- (PLPhotoEditRenderer *)toolControllerMainRenderer:(PUPhotoEditToolController *)arg1;
- (UIImage *)toolControllerPlaceholderImage:(PUPhotoEditToolController *)arg1;
- (UIView *)toolControllerMainContainerView:(PUPhotoEditToolController *)arg1;
- (CDStruct_0b004a15)toolControllerImageModulationOptions:(PUPhotoEditToolController *)arg1;
- (PICompositionController *)toolControllerOriginalCompositionController:(PUPhotoEditToolController *)arg1;
- (PICompositionController *)toolControllerUneditedCompositionController:(PUPhotoEditToolController *)arg1;
- (void)toolController:(PUPhotoEditToolController *)arg1 switchEditSource:(long long)arg2;
- (long long)overcaptureType;
- (long long)sourceSelection;
- (void)toolControllerDidUpdateToolbar:(PUPhotoEditToolController *)arg1;
- (void)toolControllerDidChangePreferredAlternateToolbarButton:(PUPhotoEditToolController *)arg1;
- (void)toolControllerDidChangeWantsDefaultPreviewView:(PUPhotoEditToolController *)arg1;
- (void)toolController:(PUPhotoEditToolController *)arg1 didChangePreferredPreviewViewInsetsAnimated:(_Bool)arg2;
- (void)toolControllerDidChangeIsPerformingLiveInteraction:(PUPhotoEditToolController *)arg1;
- (void)toolController:(PUPhotoEditToolController *)arg1 updateModelDependentControlsAnimated:(_Bool)arg2;
- (void)toolControllerDidFinishLoadingThumbnails:(PUPhotoEditToolController *)arg1;
@end
