//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CADisplayLink, NSArray, UIKeyboardSliceSet;
@protocol UIKeyboardKeyplaneTransitionDelegate, UIKeyboardSplitTransitionDataSource;

__attribute__((visibility("hidden")))
@interface UIKeyboardSplitTransitionView
{
    double _currentProgress;
    double _liftOffProgress;
    double _finishProgress;
    double _finishDuration;
    double _finalTransitionStartTime;
    CADisplayLink *_displayLink;
    CDUnknownBlockType _completionBlock;
    struct CGRect _startFrame;
    struct CGRect _endFrame;
    id <UIKeyboardKeyplaneTransitionDelegate> _transitionDelegate;
    id <UIKeyboardSplitTransitionDataSource> _transitionDataSource;
    _Bool _centerFilled;
    _Bool _isRebuilding;
    _Bool _isSplitTranslation;
    UIKeyboardSliceSet *_sliceSet;
}

@property(nonatomic) id <UIKeyboardSplitTransitionDataSource> splitTransitionDataSource; // @synthesize splitTransitionDataSource=_transitionDataSource;
@property(nonatomic) id <UIKeyboardKeyplaneTransitionDelegate> splitTransitionDelegate; // @synthesize splitTransitionDelegate=_transitionDelegate;
@property(copy) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (_Bool)showDictationKey;
- (_Bool)showIntlKey;
- (struct CGImage *)keyImageWithToken:(id)arg1;
- (struct CGImage *)splitKeyboardImage;
- (struct CGImage *)defaultKeyboardImage;
- (_Bool)canDisplayTransition;
- (void)updateWithProgress:(double)arg1;
- (void)finishWithProgress:(double)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)transitionToFinalState:(id)arg1;
- (void)finalizeTransition;
- (_Bool)transitionIsVisible;
- (void)rebuildControlKeys:(unsigned long long)arg1;
- (void)rebuildFromKeyplane:(id)arg1 toKeyplane:(id)arg2 startToken:(id)arg3 endToken:(id)arg4 keyboardType:(long long)arg5 orientation:(long long)arg6;
- (void)transformForProgress:(double)arg1;
- (_Bool)shouldAllowRubberiness;
- (void)rebuildTransitionForSplitStyleChange:(id)arg1;
- (struct CGRect)rectEnclosingKeyplane:(id)arg1;
- (struct CGSize)sizeForShadowLayer:(int)arg1;
- (id)colorsForBackgroundLayer:(int)arg1;
- (void)initializeLayers;
- (id)bottomDropShadow;
- (id)outerCenterDropShadow;
- (id)centerDropShadow;
- (id)topDropShadow;
@property(readonly) NSArray *backgroundLayers;
@property(readonly) NSArray *shadowLayers;
- (void)setFrame:(struct CGRect)arg1;
- (void)didMoveToWindow;
- (void)dealloc;

@end

