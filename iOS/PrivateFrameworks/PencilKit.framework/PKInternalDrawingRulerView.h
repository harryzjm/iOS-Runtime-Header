//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PencilKit/UIGestureRecognizerDelegate-Protocol.h>

@class CALayer, CATextLayer, NSString, NSTimer, PKRulerGestureRecognizer, PKRulerLayer, UIImpactFeedbackGenerator;

@interface PKInternalDrawingRulerView <UIGestureRecognizerDelegate>
{
    _Bool _isInteractingWithRuler;
    _Bool _isInlineResizing;
    _Bool _isExpandedInline;
    _Bool _rulerWasShownViaGesture;
    _Bool _rulerIsRotating;
    _Bool _canRulerSnapToAngle;
    _Bool _isRulerDrawingMovingToEndOfRuler;
    _Bool _lastTouchWasMaskedByRuler;
    _Bool _rulerSnappedToAngle;
    PKRulerGestureRecognizer *_rulerGestureRecognizer;
    NSTimer *_imageTransformTimer;
    double _initialDrawingBoundsYOrigin;
    PKRulerLayer *_rulerLayer;
    CALayer *_rulerAngleMarker;
    CALayer *_rulerAngleTick;
    CATextLayer *_rulerAngleText;
    CALayer *_rulerDistanceHUD;
    CATextLayer *_rulerDistanceText;
    double _currentTValueForSnappedDrawing;
    double _minTValueForSnappedDrawing;
    double _maxTValueForSnappedDrawing;
    double _originTValueForSnappedDrawing;
    double _rulerZoomStartCenterTValueOnScreen;
    double _rulerZoomStartScale;
    UIImpactFeedbackGenerator *_snapImpactBehavior;
    UIImpactFeedbackGenerator *_unsnapImpactBehavior;
    CDStruct_cfd08fee _rulerState;
    CDStruct_cfd08fee _previousRulerState;
    struct CGAffineTransform _rulerTransform;
    struct CGAffineTransform _rulerStartTransform;
    struct CGAffineTransform _rulerZoomStartTransform;
}

@property(nonatomic) _Bool rulerSnappedToAngle; // @synthesize rulerSnappedToAngle=_rulerSnappedToAngle;
@property(retain, nonatomic) UIImpactFeedbackGenerator *unsnapImpactBehavior; // @synthesize unsnapImpactBehavior=_unsnapImpactBehavior;
@property(retain, nonatomic) UIImpactFeedbackGenerator *snapImpactBehavior; // @synthesize snapImpactBehavior=_snapImpactBehavior;
@property(nonatomic) _Bool lastTouchWasMaskedByRuler; // @synthesize lastTouchWasMaskedByRuler=_lastTouchWasMaskedByRuler;
@property(nonatomic) struct CGAffineTransform rulerZoomStartTransform; // @synthesize rulerZoomStartTransform=_rulerZoomStartTransform;
@property(nonatomic) double rulerZoomStartScale; // @synthesize rulerZoomStartScale=_rulerZoomStartScale;
@property(nonatomic) double rulerZoomStartCenterTValueOnScreen; // @synthesize rulerZoomStartCenterTValueOnScreen=_rulerZoomStartCenterTValueOnScreen;
@property(nonatomic) double originTValueForSnappedDrawing; // @synthesize originTValueForSnappedDrawing=_originTValueForSnappedDrawing;
@property(nonatomic) double maxTValueForSnappedDrawing; // @synthesize maxTValueForSnappedDrawing=_maxTValueForSnappedDrawing;
@property(nonatomic) double minTValueForSnappedDrawing; // @synthesize minTValueForSnappedDrawing=_minTValueForSnappedDrawing;
@property(nonatomic) double currentTValueForSnappedDrawing; // @synthesize currentTValueForSnappedDrawing=_currentTValueForSnappedDrawing;
@property(nonatomic) _Bool isRulerDrawingMovingToEndOfRuler; // @synthesize isRulerDrawingMovingToEndOfRuler=_isRulerDrawingMovingToEndOfRuler;
@property(nonatomic) _Bool canRulerSnapToAngle; // @synthesize canRulerSnapToAngle=_canRulerSnapToAngle;
@property(nonatomic) _Bool rulerIsRotating; // @synthesize rulerIsRotating=_rulerIsRotating;
@property(nonatomic) _Bool rulerWasShownViaGesture; // @synthesize rulerWasShownViaGesture=_rulerWasShownViaGesture;
@property(nonatomic) CDStruct_cfd08fee previousRulerState; // @synthesize previousRulerState=_previousRulerState;
@property(nonatomic) CDStruct_cfd08fee rulerState; // @synthesize rulerState=_rulerState;
@property(nonatomic) struct CGAffineTransform rulerStartTransform; // @synthesize rulerStartTransform=_rulerStartTransform;
@property(retain, nonatomic) CATextLayer *rulerDistanceText; // @synthesize rulerDistanceText=_rulerDistanceText;
@property(retain, nonatomic) CALayer *rulerDistanceHUD; // @synthesize rulerDistanceHUD=_rulerDistanceHUD;
@property(retain, nonatomic) CATextLayer *rulerAngleText; // @synthesize rulerAngleText=_rulerAngleText;
@property(retain, nonatomic) CALayer *rulerAngleTick; // @synthesize rulerAngleTick=_rulerAngleTick;
@property(retain, nonatomic) CALayer *rulerAngleMarker; // @synthesize rulerAngleMarker=_rulerAngleMarker;
@property(nonatomic) struct CGAffineTransform rulerTransform; // @synthesize rulerTransform=_rulerTransform;
@property(retain, nonatomic) PKRulerLayer *rulerLayer; // @synthesize rulerLayer=_rulerLayer;
@property(nonatomic) _Bool isExpandedInline; // @synthesize isExpandedInline=_isExpandedInline;
@property(nonatomic) _Bool isInlineResizing; // @synthesize isInlineResizing=_isInlineResizing;
@property(nonatomic) double initialDrawingBoundsYOrigin; // @synthesize initialDrawingBoundsYOrigin=_initialDrawingBoundsYOrigin;
@property(retain, nonatomic) NSTimer *imageTransformTimer; // @synthesize imageTransformTimer=_imageTransformTimer;
@property(retain, nonatomic) PKRulerGestureRecognizer *rulerGestureRecognizer; // @synthesize rulerGestureRecognizer=_rulerGestureRecognizer;
@property(nonatomic) _Bool isInteractingWithRuler; // @synthesize isInteractingWithRuler=_isInteractingWithRuler;
- (void).cxx_destruct;
- (void)incrementRulerAngleBy:(double)arg1;
- (void)makeRulerHorizontal;
- (void)makeRulerVertical;
- (id)_accessibilityHitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)accessibilityElements;
- (void)drawingCancelled;
- (void)drawingEnded:(id)arg1;
- (void)drawingMoved:(id)arg1 withEvent:(id)arg2;
- (void)drawingBegan:(id)arg1;
- (void)cancelNonDrawingGestures;
- (void)startRulerDrawing;
- (void)setImageTransformFrom:(struct CGAffineTransform)arg1 toTransform:(struct CGAffineTransform)arg2 animated:(_Bool)arg3 duration:(double)arg4;
- (void)updateImageTransform:(id)arg1;
- (void)removeRulerMarkers;
- (void)updateRulerMarkerForLocation:(struct CGPoint)arg1 firstTouch:(_Bool)arg2;
- (void)updateDistanceMarkerWithSpacing:(double)arg1;
- (struct CGPoint)getRulerCenterLineOriginAndTangent:(struct CGPoint *)arg1;
- (double)getRulerCenterTValueOnScreenForTransfrom:(struct CGAffineTransform)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)viewPointInRuler:(struct CGPoint)arg1;
- (void)endRulerDrawing;
- (void)resetRulerTouches;
- (void)rulerMoveGesture:(id)arg1;
- (void)updateRuler:(id)arg1;
- (void)resetRulerTransform;
- (struct CGAffineTransform)angleSnapRulerTransform:(struct CGAffineTransform)arg1 aroundOrigin:(struct CGPoint)arg2;
- (void)updateAngleWithAngleMarkerPosition:(struct CGPoint)arg1;
- (_Bool)shouldUseLargestRulerTextFontSize;
- (void)updateAngle:(id)arg1;
- (void)hideRulerAnimated:(_Bool)arg1;
- (void)hideRuler;
- (void)resetRuler;
- (struct CGAffineTransform)defaultRulerTransfrom;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)showRuler;
- (void)addScaleAndOpacityAnimationOnLayer:(id)arg1 delegate:(id)arg2 fromScale:(double)arg3 toScale:(double)arg4 fromAlpha:(double)arg5 toAlpha:(double)arg6;
- (id)addScaleAnimationOnLayer:(id)arg1 delegate:(id)arg2 fromScale:(double)arg3 toScale:(double)arg4;
- (id)addOpacityAnimationOnLayer:(id)arg1 delegate:(id)arg2 toOpacity:(double)arg3;
- (void)updateRulerTickMarkImage;
- (double)rulerAlignInset;
- (double)rulerTickMarkInset;
- (double)rulerWidth;
- (id)rulerDialLevelImage;
- (id)rulerDialImage;
- (id)rulerBackgroundImage;
- (_Bool)compactRuler;
- (struct CGAffineTransform)pixelSnapRulerTransform:(struct CGAffineTransform)arg1;
- (struct CGAffineTransform)ensureRulerFullyOnscreen:(struct CGAffineTransform)arg1;
- (struct CGAffineTransform)canvasTransform;
- (void)hideUI;
- (void)setupGestures;
- (void)setZooming:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
