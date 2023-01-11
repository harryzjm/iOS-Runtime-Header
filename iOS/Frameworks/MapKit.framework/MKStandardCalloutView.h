//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKSmallCalloutView, UIMotionEffectGroup, _MKCalloutContentView, _MKCalloutLayer;

@interface MKStandardCalloutView
{
    struct {
        struct CGPoint origin;
        struct CGPoint offset;
        long long position;
        struct CGPoint desiredPoint;
        struct CGRect desiredBounds;
    } _anchor;
    struct CGRect _frame;
    struct {
        unsigned int animated:1;
        unsigned int didMoveCalled:1;
        unsigned int hasPendingAnimatedLayout:1;
        unsigned int needsCalloutUpdate:1;
        unsigned int isObserving:1;
        unsigned int reserved:26;
    } _flags;
    _MKCalloutLayer *_contentStrokeLayer;
    _MKCalloutContentView *_contentView;
    MKSmallCalloutView *_calloutView;
    _MKCalloutLayer *_maskLayer;
    UIMotionEffectGroup *_motionEffect;
}

+ (double)defaultHeight;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_stopObservingAnnotationView:(id)arg1;
- (void)_startObservingAnnotationView:(id)arg1;
- (void)_setNeedsCalloutUpdate;
- (void)_updateCalloutAnimated:(_Bool)arg1;
- (void)_updateCallout;
- (void)_removeAccessoryTargetForView:(id)arg1;
- (void)_addAccessoryTargetForView:(id)arg1;
- (void)_calloutAccessoryControlTapped:(id)arg1;
- (void)dismissAnimated:(_Bool)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)showAnimated:(_Bool)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)motionEffectDidUpdate:(id)arg1;
- (void)completeBounceAnimation;
- (void)_markDidMoveCalled;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)_showFromAnchorPoint:(struct CGPoint)arg1 boundaryRect:(struct CGRect)arg2 animate:(_Bool)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (_Bool)isLeftAnchored;
- (long long)anchorPosition;
- (void)_runBounceAnimationWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_layoutSubviews:(_Bool)arg1;
- (void)didMoveToWindow;
- (void)forceAnchorPosition:(long long)arg1;
- (void)_frameDidChange;
- (void)setFrame:(struct CGRect)arg1;
- (void)_setOriginForScale:(double)arg1;
- (struct CGPoint)_originForScale:(double)arg1;
- (void)_calculateActualAnchorPoint:(struct CGPoint *)arg1 frame:(struct CGRect *)arg2 forDesiredAnchorPoint:(struct CGPoint)arg3 boundaryRect:(struct CGRect)arg4;
- (struct CGPoint)anchorPoint;
- (struct CGPoint)offset;
- (void)setOffset:(struct CGPoint)arg1;
- (id)subtitle;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)initWithAnnotationView:(id)arg1;
- (void)setSubtitle:(id)arg1 animated:(_Bool)arg2;
- (void)setDetailView:(id)arg1 animated:(_Bool)arg2;
- (void)setRightView:(id)arg1 animated:(_Bool)arg2;
- (void)setLeftView:(id)arg1 backgroundColor:(id)arg2 animated:(_Bool)arg3;
- (void)dealloc;

@end

