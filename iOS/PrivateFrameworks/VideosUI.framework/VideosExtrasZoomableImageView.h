//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIScrollView.h>

@class NSString, UIImage, UIImageView;

__attribute__((visibility("hidden")))
@interface VideosExtrasZoomableImageView : UIScrollView
{
    UIImage *_image;
    double _scaleToRestoreAfterResize;
    UIImageView *_zoomView;
    struct CGSize _imageSize;
    struct CGPoint _pointToCenterAfterResize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *zoomView; // @synthesize zoomView=_zoomView;
@property(nonatomic) double scaleToRestoreAfterResize; // @synthesize scaleToRestoreAfterResize=_scaleToRestoreAfterResize;
@property(nonatomic) struct CGPoint pointToCenterAfterResize; // @synthesize pointToCenterAfterResize=_pointToCenterAfterResize;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void)_updateMinimumAndMaximumZoomScalesForCurrentBounds;
- (void)_recoverFromResizing;
- (void)_prepareToResize;
- (struct CGPoint)_minimumContentOffset;
- (struct CGPoint)_maximumContentOffset;
- (void)zoomToPoint:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (void)finalizeZoomingImageTransitionWithContext:(id)arg1 transitionFinished:(_Bool)arg2;
- (void)performZoomingImageTransitionWithContext:(id)arg1;
- (void)prepareZoomingImageTransitionWithContext:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

