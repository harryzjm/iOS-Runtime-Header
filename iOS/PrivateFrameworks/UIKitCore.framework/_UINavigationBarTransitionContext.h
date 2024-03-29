//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, UINavigationBar, UIView, _UIBarBackground, _UINavigationBarContentView, _UINavigationBarContentViewLayout, _UINavigationBarItemStack, _UINavigationBarLargeTitleView, _UINavigationBarLargeTitleViewLayout, _UINavigationBarLayout, _UINavigationBarModernPromptView;

__attribute__((visibility("hidden")))
@interface _UINavigationBarTransitionContext : NSObject
{
    UINavigationBar *_navigationBar;
    _UINavigationBarItemStack *_stack;
    _UINavigationBarModernPromptView *_promptView;
    _UINavigationBarContentView *_contentView;
    _UIBarBackground *_backgroundView;
    _UINavigationBarLargeTitleView *_largeTitleView;
    _UINavigationBarLayout *_fromLayout;
    _UINavigationBarLayout *_toLayout;
    _UINavigationBarContentViewLayout *_fromContentLayout;
    _UINavigationBarContentViewLayout *_toContentLayout;
    _UINavigationBarLargeTitleViewLayout *_fromLargeTitleLayout;
    _UINavigationBarLargeTitleViewLayout *_toLargeTitleLayout;
    double _backgroundAlpha;
    double _twoPartAnimationBaseDuration;
    double _twoPartAnimationOverlapDuration;
    int _largeTitleTransitionType;
    long long _apiVersion;
    struct {
        unsigned int isRTL:1;
        unsigned int compact:1;
        unsigned int allowLargeTitles:1;
        unsigned int twoPart:1;
        unsigned int beginWithLargeTitle:1;
        unsigned int endWithLargeTitle:1;
        unsigned int observedScrollViewOffsetIsApplicable:1;
        unsigned int sharesContentViewLayouts:1;
        unsigned int beginWithTransparencyAllowed:1;
        unsigned int endWithTransparencyAllowed:1;
        unsigned int usesBarBackground:1;
    } _navigationBarTransitionContextFlags;
    NSMutableSet *_clippingViews;
    struct CGPoint _startingContentOffsetForObservedScrollView;
}

+ (id)contextForTransition:(int)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) _UINavigationBarLayout *toLayout; // @synthesize toLayout=_toLayout;
@property(retain, nonatomic) _UINavigationBarLayout *fromLayout; // @synthesize fromLayout=_fromLayout;
@property(nonatomic) struct CGPoint startingContentOffsetForObservedScrollView; // @synthesize startingContentOffsetForObservedScrollView=_startingContentOffsetForObservedScrollView;
@property(retain, nonatomic) _UINavigationBarLargeTitleView *largeTitleView; // @synthesize largeTitleView=_largeTitleView;
@property(readonly, nonatomic) _UIBarBackground *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) _UINavigationBarContentView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) _UINavigationBarModernPromptView *promptView; // @synthesize promptView=_promptView;
@property(nonatomic) double backgroundAlpha; // @synthesize backgroundAlpha=_backgroundAlpha;
@property(nonatomic) long long apiVersion; // @synthesize apiVersion=_apiVersion;
@property(retain, nonatomic) _UINavigationBarItemStack *stack; // @synthesize stack=_stack;
@property(nonatomic) UINavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
- (void)_updateIncomingLayoutWidthToMatchOutgoingLayout;
- (void)_animateAsTwoPartsWithoutOverlap:(CDUnknownBlockType)arg1 partTwo:(CDUnknownBlockType)arg2;
- (void)_animateAsTwoPartsWithOverlapIfNecessaryPartOne:(CDUnknownBlockType)arg1 partTwo:(CDUnknownBlockType)arg2;
- (void)_animateAsTwoPartsWithOverlap:(double)arg1 partOne:(CDUnknownBlockType)arg2 partTwo:(CDUnknownBlockType)arg3;
- (void)_removeAllClippingViews;
- (void)_addClippingView:(id)arg1;
@property(readonly, nonatomic) double contentViewMaxY;
@property(readonly, nonatomic) double contentViewFittingHeight;
@property(readonly, nonatomic) UIView *viewUsingEaseInCurve;
@property(readonly, nonatomic) UIView *viewUsingEaseOutCurve;
@property(readonly, nonatomic) UIView *viewFadingInFromCustomAlpha;
- (void)cancel;
- (void)complete;
- (void)_resetContentAndLargeTitleViewCompleted:(_Bool)arg1;
- (void)setAllLargeTitleLayoutsVisible;
- (void)animate;
- (void)_animateBackgroundView;
- (_Bool)shouldPerformTwoPartCrossfadeTransition;
- (void)_animateFromBottomPaletteAtEdge:(unsigned long long)arg1;
- (void)_prepareToBottomPaletteAtEdge:(unsigned long long)arg1;
- (void)prepare;
- (void)recordUpdates:(CDUnknownBlockType)arg1;
- (id)description;
- (void)setBackgroundView:(id)arg1 isBarBackground:(_Bool)arg2;
@property(nonatomic) _Bool endWithTransparencyAllowed;
@property(nonatomic) _Bool beginWithTransparencyAllowed;
@property(nonatomic) _Bool sharesContentViewLayouts;
@property(nonatomic) _Bool observedScrollViewOffsetIsApplicable;
@property(nonatomic) _Bool endWithLargeTitle;
@property(nonatomic) _Bool beginWithLargeTitle;
@property(nonatomic) _Bool twoPart;
@property(nonatomic) _Bool allowLargeTitles;
@property(nonatomic) _Bool compact;
@property(nonatomic, setter=setRTL:) _Bool isRTL;

// Remaining properties
@property(readonly, nonatomic) int transition; // @dynamic transition;

@end

