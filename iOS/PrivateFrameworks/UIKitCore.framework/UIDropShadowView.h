//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSArray, _UIGrabber, _UIRoundedRectShadowView;
@protocol UIDropShadowViewDelegate;

__attribute__((visibility("hidden")))
@interface UIDropShadowView : UIView
{
    _Bool __hasGrabber;
    _Bool __insetsContentViewForGrabber;
    _Bool _masksTopCornersOnly;
    _Bool _supportsShadow;
    UIView *_contentView;
    UIView *_overlayView;
    double __grabberAlpha;
    double __grabberSpacing;
    long long __grabberEdge;
    id <UIDropShadowViewDelegate> __delegate;
    long long _independentCorners;
    UIView *_firstCornerClippingDescendant;
    NSArray *_cornerClippingDescendants;
    _UIGrabber *__topGrabber;
    _UIGrabber *__bottomGrabber;
    _UIRoundedRectShadowView *_magicShadowView;
    struct UIRectCornerRadii _environmentMatchingCornerRadii;
    struct UIEdgeInsets _contentTouchInsets;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _UIRoundedRectShadowView *magicShadowView; // @synthesize magicShadowView=_magicShadowView;
@property(readonly, nonatomic) _UIGrabber *_bottomGrabber; // @synthesize _bottomGrabber=__bottomGrabber;
@property(readonly, nonatomic) _UIGrabber *_topGrabber; // @synthesize _topGrabber=__topGrabber;
@property(readonly, nonatomic) NSArray *cornerClippingDescendants; // @synthesize cornerClippingDescendants=_cornerClippingDescendants;
@property(readonly, nonatomic) __weak UIView *firstCornerClippingDescendant; // @synthesize firstCornerClippingDescendant=_firstCornerClippingDescendant;
@property(readonly, nonatomic) long long independentCorners; // @synthesize independentCorners=_independentCorners;
@property(readonly, nonatomic) _Bool supportsShadow; // @synthesize supportsShadow=_supportsShadow;
@property(nonatomic) _Bool masksTopCornersOnly; // @synthesize masksTopCornersOnly=_masksTopCornersOnly;
@property(nonatomic) __weak id <UIDropShadowViewDelegate> _delegate; // @synthesize _delegate=__delegate;
@property(nonatomic) struct UIEdgeInsets contentTouchInsets; // @synthesize contentTouchInsets=_contentTouchInsets;
@property(nonatomic, setter=_setInsetsContentViewForGrabber:) _Bool _insetsContentViewForGrabber; // @synthesize _insetsContentViewForGrabber=__insetsContentViewForGrabber;
@property(nonatomic, setter=_setGrabberEdge:) long long _grabberEdge; // @synthesize _grabberEdge=__grabberEdge;
@property(nonatomic, setter=_setGrabberSpacing:) double _grabberSpacing; // @synthesize _grabberSpacing=__grabberSpacing;
@property(nonatomic, setter=_setGrabberAlpha:) double _grabberAlpha; // @synthesize _grabberAlpha=__grabberAlpha;
@property(nonatomic, setter=_setHasGrabber:) _Bool _hasGrabber; // @synthesize _hasGrabber=__hasGrabber;
@property(retain, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) struct UIRectCornerRadii environmentMatchingCornerRadii; // @synthesize environmentMatchingCornerRadii=_environmentMatchingCornerRadii;
- (void)didFinishRotation;
- (void)willBeginRotationWithOriginalBounds:(struct CGRect)arg1 newBounds:(struct CGRect)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setMagicShadowAlpha:(double)arg1;
- (void)_grabberPrimaryAction;
- (_Bool)_isGrabber:(id)arg1;
@property(readonly, nonatomic) _Bool _hasCreatedGrabbers;
- (void)didMoveToWindow;
- (void)updateCornerClippingViews;
@property(readonly, nonatomic) UIView *deepestClippingView;
- (void)_layoutGrabbers;
- (void)layoutSubviews;
@property(readonly, nonatomic) struct CGRect _contentViewFrame;
@property(readonly, nonatomic) _Bool _effectiveInsetsContentViewForGrabber;
- (id)initWithFrame:(struct CGRect)arg1 independentCorners:(long long)arg2 supportsShadow:(_Bool)arg3 stylesSheetsAsCards:(_Bool)arg4;

@end

