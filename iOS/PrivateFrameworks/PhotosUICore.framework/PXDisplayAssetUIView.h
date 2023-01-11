//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXReusableObject-Protocol.h>

@class NSArray, NSError, NSString, PXImageRequester, PXLoadingFailureBadgeView, PXRoundProgressView, PXUIMediaProvider, UIImage;
@protocol PXDisplayAsset;

@interface PXDisplayAssetUIView : UIView <PXReusableObject, PXChangeObserver>
{
    CDStruct_d97c9657 _updateFlags;
    _Bool _displayLoadingIndicator;
    _Bool _isDisplayingFullQualityContent;
    _Bool _animatedContentEnabled;
    id <PXDisplayAsset> _asset;
    long long _playbackStyle;
    PXUIMediaProvider *_mediaProvider;
    NSArray *_placeholderImageFilters;
    double _placeholderTransitionDuration;
    NSError *_error;
    UIView *_contentView;
    UIImage *_image;
    PXImageRequester *_imageRequester;
    PXRoundProgressView *_progressView;
    PXLoadingFailureBadgeView *_failureView;
    double _imageProgress;
    double _loadingProgress;
    struct CGSize _targetSize;
    struct CGRect _contentBounds;
    struct CGRect _contentsRect;
}

+ (void)checkInView:(id)arg1;
+ (id)checkOutViewForAsset:(id)arg1 withPlaybackStyle:(long long)arg2;
+ (id)checkOutViewForAsset:(id)arg1;
+ (id)viewPool;
- (void).cxx_destruct;
@property(readonly, nonatomic) double loadingProgress; // @synthesize loadingProgress=_loadingProgress;
@property(readonly, nonatomic) double imageProgress; // @synthesize imageProgress=_imageProgress;
@property(retain, nonatomic) PXLoadingFailureBadgeView *failureView; // @synthesize failureView=_failureView;
@property(retain, nonatomic) PXRoundProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) PXImageRequester *imageRequester; // @synthesize imageRequester=_imageRequester;
@property(nonatomic) struct CGRect contentsRect; // @synthesize contentsRect=_contentsRect;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) struct CGRect contentBounds; // @synthesize contentBounds=_contentBounds;
@property(nonatomic) struct CGSize targetSize; // @synthesize targetSize=_targetSize;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic, getter=isAnimatedContentEnabled) _Bool animatedContentEnabled; // @synthesize animatedContentEnabled=_animatedContentEnabled;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) _Bool isDisplayingFullQualityContent; // @synthesize isDisplayingFullQualityContent=_isDisplayingFullQualityContent;
@property(nonatomic) _Bool displayLoadingIndicator; // @synthesize displayLoadingIndicator=_displayLoadingIndicator;
@property(nonatomic) double placeholderTransitionDuration; // @synthesize placeholderTransitionDuration=_placeholderTransitionDuration;
@property(copy, nonatomic) NSArray *placeholderImageFilters; // @synthesize placeholderImageFilters=_placeholderImageFilters;
@property(retain, nonatomic) PXUIMediaProvider *mediaProvider; // @synthesize mediaProvider=_mediaProvider;
@property(readonly, nonatomic) long long playbackStyle; // @synthesize playbackStyle=_playbackStyle;
@property(retain, nonatomic) id <PXDisplayAsset> asset; // @synthesize asset=_asset;
- (void)_loadContentView;
- (void)_updateFailureView;
- (void)_updateProgressView;
- (void)_updateTargetSize;
- (void)_updateIfNeeded;
- (void)updateContent;
- (void)imageProgressDidChange;
- (void)isDisplayingFullQualityContentDidChange;
- (void)placeholderTransitionDurationDidChange;
- (void)contentModeDidChange;
- (void)animatedContentEnabledDidChange;
- (void)contentsRectDidChange;
- (void)placeholderImageFiltersDidChange;
- (void)imageDidChange;
- (void)invalidateLoadingProgress;
- (void)setImageProgress:(double)arg1;
- (void)setNeedsUpdateContent;
@property(readonly, nonatomic) struct CGRect currentContentsRect;
@property(readonly, nonatomic) UIImage *currentImage;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)prepareForReuse;
- (void)becomeReusable;
- (void)setContentMode:(long long)arg1;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
