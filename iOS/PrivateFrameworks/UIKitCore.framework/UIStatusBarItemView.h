//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSString, UIStatusBarForegroundStyleAttributes, UIStatusBarItem, UIStatusBarLayoutManager, _UILegibilityImageSet, _UILegibilityView;

__attribute__((visibility("hidden")))
@interface UIStatusBarItemView : UIView
{
    double _currentOverlap;
    struct CGContext *_imageContext;
    double _imageContextScale;
    _UILegibilityView *_legibilityView;
    _UILegibilityImageSet *_lastGeneratedTextImage;
    double _lastGeneratedTextImageLetterSpacing;
    NSString *_lastGeneratedTextImageText;
    _Bool _visible;
    _Bool _allowsUpdates;
    _Bool _shouldTintContentImage;
    UIStatusBarItem *_item;
    UIStatusBarLayoutManager *_layoutManager;
    UIStatusBarForegroundStyleAttributes *_foregroundStyle;
}

+ (id)createViewForItem:(id)arg1 withData:(id)arg2 actions:(int)arg3 foregroundStyle:(id)arg4;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool shouldTintContentImage; // @synthesize shouldTintContentImage=_shouldTintContentImage;
@property(nonatomic) _Bool allowsUpdates; // @synthesize allowsUpdates=_allowsUpdates;
@property(nonatomic, getter=isVisible) _Bool visible; // @synthesize visible=_visible;
@property(readonly, nonatomic) UIStatusBarForegroundStyleAttributes *foregroundStyle; // @synthesize foregroundStyle=_foregroundStyle;
@property(nonatomic) __weak UIStatusBarLayoutManager *layoutManager; // @synthesize layoutManager=_layoutManager;
@property(readonly, nonatomic) UIStatusBarItem *item; // @synthesize item=_item;
- (id)accessibilityHUDRepresentation;
- (_Bool)_shouldReverseLayoutDirection;
- (id)description;
- (void)willMoveToWindow:(id)arg1;
- (void)endDisablingRasterization;
- (void)beginDisablingRasterization;
- (id)imageWithShadowNamed:(id)arg1;
- (void)clearCachedTextImage;
- (id)cachedImageWithText:(id)arg1 truncatedWithEllipsesAtMaxWidth:(double)arg2 letterSpacing:(double)arg3;
- (id)imageWithText:(id)arg1 shouldCache:(_Bool)arg2;
- (id)imageWithText:(id)arg1;
- (void)endImageContext;
- (id)imageFromImageContextClippedToWidth:(double)arg1;
- (void)beginImageContextWithMinimumWidth:(double)arg1;
- (void)updateForNewStyle:(id)arg1;
- (void)setPersistentAnimationsEnabled:(_Bool)arg1;
- (void)performPendedActions;
- (id)contentsIOSurface;
- (id)contentsImage;
- (_Bool)animatesDataChange;
- (_Bool)updateForNewData:(id)arg1 actions:(int)arg2;
- (double)maximumOverlap;
- (double)addContentOverlap:(double)arg1;
- (double)resetContentOverlap;
- (double)extraRightPadding;
- (double)extraLeftPadding;
- (double)shadowPadding;
- (double)standardPadding;
- (long long)textAlignment;
- (id)textFont;
- (long long)textStyle;
- (void)setContentMode:(long long)arg1;
- (double)updateContentsAndWidth;
- (void)_tintContentLayerIfNeeded;
- (double)neededSizeForImageSet:(id)arg1;
- (double)adjustFrameToNewSize:(double)arg1;
- (void)setLayerContentsImage:(id)arg1;
- (double)legibilityStrength;
- (long long)legibilityStyle;
- (double)setStatusBarData:(id)arg1 actions:(int)arg2;
- (double)currentRightOverlap;
- (double)currentLeftOverlap;
- (double)currentOverlap;
- (void)setCurrentOverlap:(double)arg1;
- (void)setVisible:(_Bool)arg1 frame:(struct CGRect)arg2 duration:(double)arg3;
- (void)setVisible:(_Bool)arg1 settingAlpha:(_Bool)arg2;
- (id)foregroundView;
- (void)dealloc;
- (_Bool)allowsUserInteraction;
- (id)initWithItem:(id)arg1 data:(id)arg2 actions:(int)arg3 style:(id)arg4;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;

@end

