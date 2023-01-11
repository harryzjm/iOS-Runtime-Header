//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

@class NSString, UIImageView, UILabel, UIView;
@protocol CAMZoomButtonDelegate;

@interface CAMZoomButton : UIControl
{
    id <CAMZoomButtonDelegate> _delegate;
    double _zoomFactor;
    long long _orientation;
    NSString *_contentSizeCategory;
    UIView *__contentContainerView;
    UILabel *__zoomFactorLabel;
    UIImageView *__circleImageView;
    UIImageView *__backgroundImageView;
    struct UIEdgeInsets _tappableEdgeInsets;
    struct CGAffineTransform _highlightingTransform;
}

+ (double)fontSizeForContentSize:(id)arg1;
+ (double)circleDiameterForContentSize:(id)arg1;
+ (_Bool)_shouldUseLargeButtonSizeForContentSize:(id)arg1;
+ (id)textForZoomFactor:(double)arg1;
@property(readonly, nonatomic) UIImageView *_backgroundImageView; // @synthesize _backgroundImageView=__backgroundImageView;
@property(readonly, nonatomic) UIImageView *_circleImageView; // @synthesize _circleImageView=__circleImageView;
@property(readonly, nonatomic) UILabel *_zoomFactorLabel; // @synthesize _zoomFactorLabel=__zoomFactorLabel;
@property(readonly, nonatomic) UIView *_contentContainerView; // @synthesize _contentContainerView=__contentContainerView;
@property(copy, nonatomic) NSString *contentSizeCategory; // @synthesize contentSizeCategory=_contentSizeCategory;
@property(nonatomic, setter=_setHighlightingTransform:) struct CGAffineTransform highlightingTransform; // @synthesize highlightingTransform=_highlightingTransform;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) struct UIEdgeInsets tappableEdgeInsets; // @synthesize tappableEdgeInsets=_tappableEdgeInsets;
@property(nonatomic) double zoomFactor; // @synthesize zoomFactor=_zoomFactor;
@property(nonatomic) __weak id <CAMZoomButtonDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (double)_backgroundImageDiameterForContentSize:(id)arg1;
- (double)_circleLineWidthForContentSize:(id)arg1;
- (id)_createCircleImageForContentSize:(id)arg1;
- (id)_createBackgroundImageForContentSize:(id)arg1;
- (void)setOrientation:(long long)arg1 animated:(_Bool)arg2;
- (void)_updateZoomFactorLabel;
- (void)_performHighlightAnimation;
- (struct CGAffineTransform)_targetTransformForHighlighted:(_Bool)arg1 orientation:(long long)arg2;
- (struct CGAffineTransform)_highlightingTransformForHighlighted:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)tintColorDidChange;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (struct UIEdgeInsets)alignmentRectInsets;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_updateForContentSize;
- (void)_commonCAMZoomButtonInitialization;

@end

