//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

#import <RelevanceEngineUI/UIGestureRecognizerDelegate-Protocol.h>

@class CALayer, NSString, REContent, UIColor, UIImage, UIImageView, UILongPressGestureRecognizer, UIView;
@protocol REUpNextCellDelegate;

@interface REUpNextBaseCell : UICollectionViewCell <UIGestureRecognizerDelegate>
{
    struct CGSize _shadowSize;
    UIImageView *_shadowView;
    CALayer *_imageLayer;
    UIView *_overlayView;
    UILongPressGestureRecognizer *_longPressRecognizer;
    double _darkeningAmount;
    double _contentBrightness;
    REContent *_content;
    unsigned long long _behavior;
    struct UIEdgeInsets _overlayInsets;
    _Bool _shouldOverrideContentHeaderColor;
    UIImage *_contentImage;
    id <REUpNextCellDelegate> _delegate;
    UIImage *_overrideContentImage;
    NSString *_representedElementIdentifier;
    UIColor *_defaultTextColor;
}

+ (id)_shadowImage;
+ (void)initialize;
@property(readonly, nonatomic) CALayer *imageLayer; // @synthesize imageLayer=_imageLayer;
@property(readonly, nonatomic) _Bool shouldOverrideContentHeaderColor; // @synthesize shouldOverrideContentHeaderColor=_shouldOverrideContentHeaderColor;
@property(readonly, nonatomic) UIColor *defaultTextColor; // @synthesize defaultTextColor=_defaultTextColor;
@property(retain, nonatomic) NSString *representedElementIdentifier; // @synthesize representedElementIdentifier=_representedElementIdentifier;
@property(readonly, nonatomic) REContent *content; // @synthesize content=_content;
@property(retain, nonatomic) UIImage *overrideContentImage; // @synthesize overrideContentImage=_overrideContentImage;
@property(nonatomic) __weak id <REUpNextCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIImage *contentImage; // @synthesize contentImage=_contentImage;
- (void).cxx_destruct;
- (id)transitionContext;
- (void)_updateColorOverlay;
- (void)applyLayoutAttributes:(id)arg1;
- (void)defaultTextColorDidChange;
- (void)setForegroundTextColorToColor:(id)arg1 shouldOverrideContentHeaderColor:(_Bool)arg2;
- (void)configureWithContent:(id)arg1;
- (void)setShadowViewHidden:(_Bool)arg1;
- (void)setContentImage:(id)arg1 animated:(_Bool)arg2;
- (void)setContentBrightness:(double)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setHighlightInsets:(struct UIEdgeInsets)arg1;
- (void)setHighlightBehavior:(unsigned long long)arg1;
- (void)didLongPress:(id)arg1;
- (id)secondaryEffectViews;
- (id)primaryEffectViews;
- (void)setHighlighted:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

