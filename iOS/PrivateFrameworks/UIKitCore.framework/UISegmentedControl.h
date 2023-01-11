//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/CAAnimationDelegate-Protocol.h>
#import <UIKitCore/NSCoding-Protocol.h>
#import <UIKitCore/UIPopoverPresentationControllerDelegate-Protocol.h>
#import <UIKitCore/_UIBasicAnimationFactory-Protocol.h>
#import <UIKitCore/_UIHostedFocusSystemDelegate-Protocol.h>

@class NSMutableArray, NSString, UIColor, UIImageView, UILongPressGestureRecognizer, UISegment, UIVibrancyEffect, UIView, _UIHostedFocusSystem;

@interface UISegmentedControl <_UIBasicAnimationFactory, UIPopoverPresentationControllerDelegate, _UIHostedFocusSystemDelegate, CAAnimationDelegate, NSCoding>
{
    UIView *_selectionIndicatorView;
    UIImageView *_selectionImageView;
    NSMutableArray *_segments;
    long long _selectedSegment;
    long long _highlightedSegment;
    long long _selectionIndicatorSegment;
    long long _hoveredSegment;
    UIView *_removedSegment;
    UISegment *_focusedSegment;
    long long _barStyle;
    id _appearanceStorage;
    double _enabledAlpha;
    UIColor *_selectedSegmentTintColor;
    UIColor *_backgroundTintColor;
    UIVibrancyEffect *_selectedSegmentVibrancyEffect;
    double _innerSegmentSpacing;
    struct {
        unsigned int size:2;
        unsigned int delegateAlwaysNotifiesDelegateOfSegmentClicks:1;
        unsigned int momentaryClick:1;
        unsigned int tracking:1;
        unsigned int autosizeToFitSegments:1;
        unsigned int isSizingToFit:1;
        unsigned int autosizeText:1;
        unsigned int transparentBackground:1;
        unsigned int useProportionalWidthSegments:1;
        unsigned int translucentBackground:1;
        unsigned int appearanceNeedsUpdate:1;
        unsigned int selectionIndicatorDragged:1;
        unsigned int useInnerSegmentSpacing:1;
        unsigned int adjustsForContentSizeCategory:1;
        unsigned int useDynamicShadow:1;
        unsigned int animatingOutDynamicShadow:1;
        unsigned int animatingSeleciton:1;
        unsigned int animatingHoverOut:1;
    } _segmentedControlFlags;
    _UIHostedFocusSystem *_internalFocusSystem;
    UILongPressGestureRecognizer *_axLongPressGestureRecognizer;
}

+ (id)_tvDefaultTextColorDisabledUserInterfaceStyleDark;
+ (id)_tvDefaultTextColorNormalUserInterfaceStyleDark;
+ (id)_tvDefaultTextColorDisabledUserInterfaceStyleLight;
+ (id)_tvDefaultTextColorNormalUserInterfaceStyleLight;
+ (id)_tvDefaultTextColorDisabledSelected;
+ (id)_tvDefaultTextColorFocused;
+ (id)_tvDefaultTextColorSelected;
+ (id)_fontForTraitCollection:(id)arg1 size:(int)arg2 selected:(_Bool)arg3;
+ (double)_cornerRadiusForTraitCollection:(id)arg1 size:(int)arg2;
+ (double)_sectionIndicatorInsetForTraitCollection:(id)arg1 size:(int)arg2;
+ (double)_dividerWidthForTraitCollection:(id)arg1 size:(int)arg2;
+ (double)_lineWidthForTraitCollection:(id)arg1 size:(int)arg2;
+ (double)_sectionIndicatorOverflowForTraitCollection:(id)arg1 size:(int)arg2;
+ (id)_modernDividerImageBackground:(_Bool)arg1 traitCollection:(id)arg2 tintColor:(id)arg3 size:(int)arg4;
+ (struct CGColor *)_dividerPrimaryColorBackground:(_Bool)arg1 traitCollection:(id)arg2 tintColor:(id)arg3;
+ (id)_modernBackgroundSelected:(_Bool)arg1 disableShadow:(_Bool)arg2 maximumSize:(struct CGSize)arg3 highlighted:(_Bool)arg4 traitCollection:(id)arg5 tintColor:(id)arg6 size:(int)arg7;
+ (_Bool)_useShadowForSelectedTintColor:(id)arg1 traitCollection:(id)arg2;
+ (struct CGColor *)_backgroundPrimaryColorSelected:(_Bool)arg1 highlighted:(_Bool)arg2 traitCollection:(id)arg3 tintColor:(id)arg4;
+ (_Bool)_selectFocusedSegmentAfterFocusUpdate;
+ (_Bool)_cursorInteractionEnabled;
+ (double)_selectionOffsetAdjustmentForSegment:(id)arg1;
+ (_Bool)_updateDynamicShadowView:(id)arg1 withAnimationDelegate:(id)arg2 useDynamicShadow:(_Bool)arg3 animated:(_Bool)arg4;
+ (id)_selectionOpacityAnimationFromValue:(float)arg1 toValue:(float)arg2;
+ (id)_selectionPopAnimationForKey:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3;
+ (struct CATransform3D)_highlightSelectionTransform;
+ (struct CATransform3D)_hiddenSelectionTransform;
+ (struct CGRect)_selectionFrameForBounds:(struct CGRect)arg1 size:(int)arg2 traitCollection:(id)arg3 accessibilityView:(_Bool)arg4;
+ (double)defaultHeightForStyle:(long long)arg1;
+ (double)defaultHeightForStyle:(long long)arg1 size:(int)arg2;
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (double)defaultHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) UILongPressGestureRecognizer *axLongPressGestureRecognizer; // @synthesize axLongPressGestureRecognizer=_axLongPressGestureRecognizer;
@property(retain, nonatomic) UIView *removedSegment; // @synthesize removedSegment=_removedSegment;
- (void)setSpringLoaded:(_Bool)arg1;
- (_Bool)isSpringLoaded;
- (id)_uiktest_segmentAtIndex:(unsigned long long)arg1;
- (id)_uiktest_labelsWithState:(unsigned long long)arg1;
- (void)_updateDividerImageForSegmentAtIndex:(unsigned long long)arg1;
- (void)_clearSelectedSegment;
- (void)_insertSegment:(int)arg1 withInfo:(id)arg2 animated:(_Bool)arg3;
- (id)_createAndAddSegmentAtIndex:(int)arg1 position:(unsigned int)arg2 withInfo:(id)arg3;
- (id)_createSegmentAtIndex:(int)arg1 position:(unsigned int)arg2 withInfo:(id)arg3;
- (double)_barHeight;
- (void)_setBadgeValue:(id)arg1 forSegmentAtIndex:(unsigned long long)arg2;
- (id)_badgeValueForSegmentAtIndex:(unsigned long long)arg1;
- (struct UIOffset)contentPositionAdjustmentForSegmentType:(long long)arg1 barMetrics:(long long)arg2;
- (void)setContentPositionAdjustment:(struct UIOffset)arg1 forSegmentType:(long long)arg2 barMetrics:(long long)arg3;
- (double)_backgroundVerticalPositionAdjustmentForBarMetrics:(long long)arg1;
- (void)_setBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (id)titleTextAttributesForState:(unsigned long long)arg1;
- (void)setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (id)dividerImageForLeftSegmentState:(unsigned long long)arg1 rightSegmentState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)setDividerImage:(id)arg1 forLeftSegmentState:(unsigned long long)arg2 rightSegmentState:(unsigned long long)arg3 barMetrics:(long long)arg4;
- (void)_setDividerImage:(id)arg1 forLeftSegmentState:(unsigned long long)arg2 rightSegmentState:(unsigned long long)arg3 barMetrics:(long long)arg4;
- (id)backgroundImageForState:(unsigned long long)arg1 barMetrics:(long long)arg2;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (id)_focusMapContainerForFocusSystem:(id)arg1;
- (void)_focusSystem:(id)arg1 didFinishUpdatingFocusInContext:(id)arg2;
- (id)_preferredFocusEnvironmentsForFocusSystem:(id)arg1;
- (_Bool)_focusSystem:(id)arg1 containsChildOfHostEnvironment:(id)arg2;
@property(readonly, nonatomic, getter=_internalFocusSystem) _UIHostedFocusSystem *internalFocusSystem; // @synthesize internalFocusSystem=_internalFocusSystem;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)_cancelDelayedFocusAction;
- (void)_sendDelayedFocusActionIfNecessary;
- (void)_selectFocusedSegment;
- (_Bool)_hasEnabledSegment;
- (void)_diagnoseFocusabilityForReport:(id)arg1;
- (_Bool)canBecomeFocused;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (void)_axLongPressHandler:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (double)_innerSegmentSpacing;
- (void)_setInterSegmentSpacing:(double)arg1;
- (id)_backgroundTintColor;
- (void)_setBackgroundTintColor:(id)arg1;
- (id)_selectedSegmentVibrancyEffect;
- (void)_setSelectedSegmentVibrancyEffect:(id)arg1;
@property(retain, nonatomic) UIColor *selectedSegmentTintColor;
- (_Bool)_alwaysEmitValueChanged;
- (void)_setAlwaysEmitValueChanged:(_Bool)arg1;
- (void)setAlpha:(double)arg1;
- (void)setEnabled:(_Bool)arg1;
- (void)_setEnabled:(_Bool)arg1 forcePropagateToSegments:(_Bool)arg2;
- (_Bool)useBlockyMagnificationInClassic;
- (void)cursorInteraction:(id)arg1 willExitRegion:(id)arg2 withAnimator:(id)arg3;
- (void)cursorInteraction:(id)arg1 willEnterRegion:(id)arg2 withAnimator:(id)arg3;
- (id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2 modifiers:(long long)arg3;
- (id)cursorInteraction:(id)arg1 regionForLocation:(struct CGPoint)arg2 defaultRegion:(id)arg3;
- (_Bool)_shouldConsumeEventWithPresses:(id)arg1;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_tapSegmentAtPoint:(struct CGPoint)arg1 touchDown:(_Bool)arg2;
- (int)_closestSegmentIndexAtPoint:(struct CGPoint)arg1;
- (id)_segmentAtIndex:(int)arg1;
- (_Bool)pointMostlyInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)hoverOnSegment:(long long)arg1;
- (void)hoverOffSegment:(long long)arg1;
- (void)_setHoverOnSegment:(long long)arg1 hovered:(_Bool)arg2;
- (void)_highlightSegment:(long long)arg1;
- (void)_setHighlightedSegmentHighlighted:(_Bool)arg1;
- (_Bool)shouldTrack;
- (void)layoutSubviews;
- (void)_updateSelectionIndicator;
- (void)_updateSelectionToSegment:(id)arg1 highlight:(_Bool)arg2 shouldAnimate:(_Bool)arg3 sameSegment:(_Bool)arg4;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)_insertSelectionViewForSegment:(id)arg1;
- (void)_updateDynamicShadow:(_Bool)arg1 animated:(_Bool)arg2;
- (long long)_segmentIndexToHighlight:(_Bool *)arg1;
- (_Bool)_disableSlidingControl;
- (struct UIEdgeInsets)alignmentRectInsets;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;
- (CDStruct_c3b9c2ee)_baselineOffsetsAtSize:(struct CGSize)arg1;
- (id)viewForLastBaselineLayout;
- (_Bool)_contentHuggingDefault_isUsuallyFixedHeight;
- (struct CGRect)bounds;
- (void)setBounds:(struct CGRect)arg1;
- (struct CGRect)frame;
- (void)setFrame:(struct CGRect)arg1;
- (void)sizeToFit;
- (void)_updateAxLongPressGestureRecognizer;
- (void)_setSelected:(_Bool)arg1 forSegmentAtIndex:(int)arg2 forceInfoDisplay:(_Bool)arg3;
- (void)_setSelected:(_Bool)arg1 highlighted:(_Bool)arg2 forSegmentAtIndex:(int)arg3 forceInfoDisplay:(_Bool)arg4;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (void)_animateContentChangeWithAnimations:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_sendValueChanged;
- (unsigned long long)_controlEventsForActionTriggered;
- (void)_emitValueChanged;
- (void)_setSelectedSegmentIndex:(long long)arg1 notify:(_Bool)arg2 animate:(_Bool)arg3;
- (void)_setSelectedSegmentIndex:(long long)arg1 notify:(_Bool)arg2;
@property(nonatomic) long long selectedSegmentIndex;
@property(readonly, nonatomic) unsigned long long numberOfSegments;
- (_Bool)_shouldSelectSegmentAtIndex:(long long)arg1;
- (_Bool)isEnabledForSegmentAtIndex:(unsigned long long)arg1;
- (void)setEnabled:(_Bool)arg1 forSegmentAtIndex:(unsigned long long)arg2;
- (struct CGSize)contentOffsetForSegmentAtIndex:(unsigned long long)arg1;
- (void)setContentOffset:(struct CGSize)arg1 forSegmentAtIndex:(unsigned long long)arg2;
- (double)widthForSegmentAtIndex:(unsigned long long)arg1;
- (void)setWidth:(double)arg1 forSegmentAtIndex:(unsigned long long)arg2;
- (id)imageForSegmentAtIndex:(unsigned long long)arg1;
- (void)setImage:(id)arg1 forSegmentAtIndex:(unsigned long long)arg2;
- (id)_attributedTitleForSegmentAtIndex:(unsigned long long)arg1;
- (void)_setAttributedTitle:(id)arg1 forSegmentAtIndex:(unsigned long long)arg2;
- (long long)segmentIndexForActionIdentifier:(id)arg1;
- (id)actionForSegmentAtIndex:(unsigned long long)arg1;
- (void)setAction:(id)arg1 forSegmentAtIndex:(unsigned long long)arg2;
- (void)_setAction:(id)arg1 forSegmentAtIndex:(unsigned long long)arg2;
- (id)titleForSegmentAtIndex:(unsigned long long)arg1;
- (void)setTitle:(id)arg1 forSegmentAtIndex:(unsigned long long)arg2;
- (void)removeAllSegments;
- (void)removeSegmentAtIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)_insertSegmentWithAttributedTitle:(id)arg1 atIndex:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)insertSegmentWithAction:(id)arg1 atIndex:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)insertSegmentWithImage:(id)arg1 atIndex:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)insertSegmentWithTitle:(id)arg1 atIndex:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)_setUsesNewAnimations:(_Bool)arg1;
- (_Bool)_usesNewAnimations;
@property(getter=_animatingOutDynamicShadow, setter=_setAnimatingOutDynamicShdaow:) _Bool animatingOutDynamicShadow;
@property(readonly, getter=_useDynamicShadow) _Bool useDynamicShadow;
- (_Bool)adjustsForContentSizeCategory;
- (void)setAdjustsForContentSizeCategory:(_Bool)arg1;
- (_Bool)transparentBackground;
- (void)setTransparentBackground:(_Bool)arg1;
- (long long)barStyle;
- (void)setBarStyle:(long long)arg1;
- (void)_setAutosizeText:(_Bool)arg1;
@property(nonatomic, getter=isMomentary) _Bool momentary;
- (void)setSegmentControlStyle:(long long)arg1;
- (long long)segmentControlStyle;
- (void)setControlSize:(int)arg1;
- (void)_setControlSize:(int)arg1 andInvalidate:(_Bool)arg2;
- (int)controlSize;
@property(nonatomic) long long segmentedControlStyle;
- (void)_setAppearanceIsTiled:(_Bool)arg1 leftCapWidth:(unsigned long long)arg2 rightCapWidth:(unsigned long long)arg3;
- (void)_setSegmentedControlAppearance:(CDStruct_41b0f204 *)arg1;
- (void)_setNeedsAppearanceUpdate;
- (void)_setNeedsBackgroundAndContentViewUpdate;
- (void)_resetForAppearanceChange;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_tintColorArchivingKey;
- (id)initWithFrame:(struct CGRect)arg1 actions:(id)arg2;
- (id)initWithItems:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)__initWithFrameCommonOperations;
- (void)_commonSegmentedControlInit;
- (void)updateForMiniBarState:(_Bool)arg1;
@property(nonatomic) _Bool apportionsSegmentWidthsByContent;
- (id)_viewForLoweringBaselineLayoutAttribute:(int)arg1;
- (id)infoViewForSegment:(long long)arg1;
- (long long)selectedSegment;
- (void)setSelectedSegment:(long long)arg1;
- (_Bool)isEnabledForSegment:(unsigned long long)arg1;
- (void)setEnabled:(_Bool)arg1 forSegment:(unsigned long long)arg2;
- (struct CGSize)contentOffsetForSegment:(unsigned long long)arg1;
- (void)setContentOffset:(struct CGSize)arg1 forSegment:(unsigned long long)arg2;
- (float)widthForSegment:(unsigned long long)arg1;
- (void)setWidth:(float)arg1 forSegment:(unsigned long long)arg2;
- (id)imageForSegment:(unsigned long long)arg1;
- (void)setImage:(id)arg1 forSegment:(unsigned long long)arg2;
- (id)titleForSegment:(unsigned long long)arg1;
- (void)setTitle:(id)arg1 forSegment:(unsigned long long)arg2;
- (void)removeSegment:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)insertSegment:(unsigned long long)arg1 withImage:(id)arg2 animated:(_Bool)arg3;
- (void)insertSegment:(unsigned long long)arg1 withTitle:(id)arg2 animated:(_Bool)arg3;
- (void)addSegmentWithTitle:(id)arg1;
- (void)selectSegment:(int)arg1;
- (void)setImagePadding:(struct CGSize)arg1 forSegment:(unsigned long long)arg2;
- (void)setAlwaysNotifiesDelegateOfSegmentClicks:(_Bool)arg1;
- (void)setDelegate:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 withStyle:(long long)arg2 withItems:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
