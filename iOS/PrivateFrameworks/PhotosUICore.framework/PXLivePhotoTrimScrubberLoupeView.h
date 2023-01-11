//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class AVAsset, AVVideoComposition, CAShapeLayer, NSObject, UIImageView, _PXLivePhotoTrimScrubberLoupeViewImageRequest;
@protocol OS_dispatch_queue;

@interface PXLivePhotoTrimScrubberLoupeView : UIView
{
    UIView *_container;
    CAShapeLayer *_maskLayer;
    UIImageView *_imageView;
    _Bool _imageIsValid;
    NSObject<OS_dispatch_queue> *_workQueue;
    _PXLivePhotoTrimScrubberLoupeViewImageRequest *_currentImageRequest;
    CDStruct_1b6d18a9 _frameTime;
    CAShapeLayer *_borderLayer;
    _Bool _playheadIsValid;
    double _needleWidth;
    unsigned long long _playheadStyle;
    AVAsset *_asset;
    AVVideoComposition *_videoComposition;
    double _aspectRatio;
    UIView *_playerView;
    double _verticalInset;
    double _outerCornerRadius;
    double _innerCornerRadius;
}

- (void).cxx_destruct;
@property(nonatomic) double innerCornerRadius; // @synthesize innerCornerRadius=_innerCornerRadius;
@property(nonatomic) double outerCornerRadius; // @synthesize outerCornerRadius=_outerCornerRadius;
@property(nonatomic) double verticalInset; // @synthesize verticalInset=_verticalInset;
@property(nonatomic) CDStruct_1b6d18a9 frameTime; // @synthesize frameTime=_frameTime;
@property(retain, nonatomic) UIView *playerView; // @synthesize playerView=_playerView;
@property(nonatomic) double aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property(readonly, nonatomic) AVVideoComposition *videoComposition; // @synthesize videoComposition=_videoComposition;
@property(readonly, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
@property(readonly, nonatomic) unsigned long long playheadStyle; // @synthesize playheadStyle=_playheadStyle;
- (void)_updatePlayheadBorderAnimate:(_Bool)arg1;
- (void)_updatePlayheadIfNeeded;
- (void)_invalidatePlayhead;
- (id)_transitionPathForBounds:(struct CGRect)arg1 needsCutout:(_Bool)arg2;
- (id)_expandedPathForBounds:(struct CGRect)arg1 needsCutout:(_Bool)arg2;
- (id)_collapsedPathForBounds:(struct CGRect)arg1;
- (void)_presentImage:(id)arg1;
- (void)_extractImageFromImageRequest:(id)arg1;
- (void)_updateImageIfNeeded;
- (void)_invalidateImage;
- (struct CGRect)_loupeFrameWithBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setAsset:(id)arg1 videoComposition:(id)arg2;
- (void)_setPlayheadStyle:(unsigned long long)arg1 animate:(_Bool)arg2;
- (void)setShowLoupePlayerAnimate:(_Bool)arg1;
- (void)setShowLoupeThumbnailWithFrameTime:(CDStruct_1b6d18a9)arg1 animate:(_Bool)arg2;
- (void)setShowNeedleWithWidth:(double)arg1 animate:(_Bool)arg2;
- (void)setShowPlayerView:(_Bool)arg1;
- (_Bool)showPlayerView;
- (void)layoutSubviews;
- (void)_PXLivePhotoTrimScrubberLoupeView_commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
