//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AccessibilityUIUtilities/CAAnimationDelegate-Protocol.h>

@class AXGestureRecorderStyleProvider, NSMutableArray, NSMutableDictionary, NSString, UIAccessibilityCustomAction, UIColor, UIView;
@protocol AXGestureRecorderViewDelegate;

@interface AXGestureRecorderView <CAAnimationDelegate>
{
    double _freezeDryStartTime;
    double _freezeDryDrawPercentage;
    double _freezeDryStartIndex;
    NSMutableArray *_freezedDynamicPaths;
    NSMutableDictionary *_activeLayers;
    NSMutableDictionary *_instantReplayViews;
    NSMutableArray *_staticLayers;
    NSMutableArray *_transitionLayers;
    _Bool _replayMode;
    id <AXGestureRecorderViewDelegate> _dataSource;
    AXGestureRecorderStyleProvider *_styleProvider;
    UIView *_dynamicFingerPathsContainerView;
    UIColor *_dynamicFingerPathBackgroundGradientPatternColor;
    UIAccessibilityCustomAction *_hideControlsAction;
    UIAccessibilityCustomAction *_showControlsAction;
    NSMutableDictionary *_previouslyActiveLayersByInstantReplayFingerIndex;
    struct CGRect _constrainedBoundsForDrawing;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *previouslyActiveLayersByInstantReplayFingerIndex; // @synthesize previouslyActiveLayersByInstantReplayFingerIndex=_previouslyActiveLayersByInstantReplayFingerIndex;
@property(retain, nonatomic) UIAccessibilityCustomAction *showControlsAction; // @synthesize showControlsAction=_showControlsAction;
@property(retain, nonatomic) UIAccessibilityCustomAction *hideControlsAction; // @synthesize hideControlsAction=_hideControlsAction;
@property(nonatomic) _Bool replayMode; // @synthesize replayMode=_replayMode;
@property(nonatomic) struct CGRect constrainedBoundsForDrawing; // @synthesize constrainedBoundsForDrawing=_constrainedBoundsForDrawing;
@property(retain, nonatomic) UIColor *dynamicFingerPathBackgroundGradientPatternColor; // @synthesize dynamicFingerPathBackgroundGradientPatternColor=_dynamicFingerPathBackgroundGradientPatternColor;
@property(retain, nonatomic) UIView *dynamicFingerPathsContainerView; // @synthesize dynamicFingerPathsContainerView=_dynamicFingerPathsContainerView;
@property(retain, nonatomic) AXGestureRecorderStyleProvider *styleProvider; // @synthesize styleProvider=_styleProvider;
@property(nonatomic) __weak id <AXGestureRecorderViewDelegate> dataSource; // @synthesize dataSource=_dataSource;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)hideStaticView;
- (void)deleteAllFingerPaths;
- (void)freezeAllDynamicFingerPathsWithInstantReplayOffset:(unsigned long long)arg1;
- (void)freezeAllDynamicFingerPaths;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)_performTransitionToStaticFingers:(id)arg1 transitionLayers:(id)arg2 hasExistingStaticFingers:(_Bool)arg3;
- (void)clearInstantReplayFingerPaths;
- (void)finishInstantReplayAtIndex:(unsigned long long)arg1;
- (void)updateInstantReplayAtIndex:(unsigned long long)arg1 withPartialPath:(id)arg2;
- (void)reloadDynamicFingerPathAtIndex:(unsigned long long)arg1;
- (void)insertDynamicFingerPathAtIndex:(unsigned long long)arg1;
- (id)_dynamicFingerPathAtIndex:(unsigned long long)arg1;
- (void)fingerPathDidChange:(unsigned long long)arg1;
- (void)didMoveToWindow;
- (id)accessibilityCustomActions;
- (void)_showControls;
- (void)_hideControls;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (struct CGRect)accessibilityFrame;
- (_Bool)isAccessibilityElement;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
