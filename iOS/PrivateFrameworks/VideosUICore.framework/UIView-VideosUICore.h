//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CALayer, NSArray, NSString, UIColor, UITraitCollection;

@interface UIView (VideosUICore)
+ (id)_timingFuctionWithOptions:(unsigned long long)arg1;
+ (void)vui_performWithoutAnimation:(CDUnknownBlockType)arg1;
+ (void)vui_transitionWithView:(id)arg1 duration:(double)arg2 options:(unsigned long long)arg3 animations:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)vui_animateWithDuration:(double)arg1 animations:(CDUnknownBlockType)arg2;
+ (void)vui_animateWithDuration:(double)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)vui_animateWithDuration:(double)arg1 delay:(double)arg2 options:(unsigned long long)arg3 animations:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)vui_performByPreventingAdditiveAnimations:(CDUnknownBlockType)arg1;
@property(nonatomic, getter=vuiIsUserInteractionEnabled) _Bool vuiUserInteractionEnabled;
- (void)vui_applyToolbarSemanticContext;
- (_Bool)vui_isInAWindow;
- (void)vui_traitCollectionDidChange:(id)arg1;
- (void)vui_setSelected:(_Bool)arg1 animated:(_Bool)arg2 withAnimationCoordinator:(id)arg3;
- (void)vui_setHighlighted:(_Bool)arg1;
- (_Bool)vui_highlighted;
- (void)vui_didMoveToWindow;
- (void)vui_willMoveToWindow:(id)arg1;
- (void)vui_prepareForReuse;
- (struct CGSize)vui_layoutSubviews:(struct CGSize)arg1 computationOnly:(_Bool)arg2;
- (struct UIEdgeInsets)vui_alignmentInsetsForExpectedWidth:(double)arg1;
- (void)vui_performAsCurrentTraitCollection:(CDUnknownBlockType)arg1;
- (void)vui_setAccessibilityText:(id)arg1;
- (id)vui_accessibilityText;
- (void)vui_isAccessibilityElement:(_Bool)arg1;
- (struct CGSize)vui_sizeThatFits:(struct CGSize)arg1;
- (void)vui_setNeedsDisplay;
- (void)vui_layoutIfNeeded;
- (void)vui_setNeedsLayout;
- (void)vui_removeFromSuperView;
- (_Bool)vui_insertSubview:(id)arg1 belowSubview:(id)arg2 oldView:(id)arg3;
- (_Bool)vui_insertSubview:(id)arg1 aboveSubview:(id)arg2 oldView:(id)arg3;
- (_Bool)vui_addSubview:(id)arg1 oldView:(id)arg2;
- (void)vui_sendSubviewToBack:(id)arg1;
- (void)vui_bringSubviewToFront:(id)arg1;
@property(readonly, nonatomic) NSArray *vuiSubviews;
- (_Bool)vui_isDescendantOfView:(id)arg1;
@property(nonatomic) struct CGPoint vuiCenter;
@property(nonatomic) unsigned long long vuiContentMode;
@property(readonly, nonatomic) UITraitCollection *vuiTraitCollection;
- (void)vui_setOverrideUserInterfaceStyle:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long vuiOverrideUserInterfaceStyle;
@property(readonly, nonatomic) unsigned long long vuiUserInterfaceStyle;
@property(retain, nonatomic) UIColor *vuiTintColor;
@property(retain, nonatomic) NSString *vuiAccessibilityIdentifier;
@property(readonly, nonatomic) CALayer *vuiLayer;
@property(nonatomic) double vuiAlpha;
@property(nonatomic) _Bool vuiClipsToBounds;
@property(retain, nonatomic) UIColor *vuiBackgroundColor;
@property(nonatomic) unsigned long long vuiAutoresizingMask;
@property(readonly, nonatomic) _Bool vuiIsRTL;
@property(readonly, nonatomic) _Bool vuiDebugUI;
@end

