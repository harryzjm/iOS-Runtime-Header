//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HUQuickControlPanningContext, UIGestureRecognizer;
@protocol HUQuickControlSliderGestureTransformerDelegate;

@interface HUQuickControlSliderGestureTransformer : NSObject
{
    _Bool _ignoreTouches;
    _Bool _hasRecognizedSignificantSliderValueChange;
    id <HUQuickControlSliderGestureTransformerDelegate> _delegate;
    UIGestureRecognizer *_gestureRecognizer;
    HUQuickControlPanningContext *_context;
    double _referenceSliderValue;
    double _currentSliderValue;
    double _accumulatedDragDistance;
    struct CGPoint _referenceTouchLocation;
    struct CGPoint _lastTouchLocation;
}

@property(nonatomic) double accumulatedDragDistance; // @synthesize accumulatedDragDistance=_accumulatedDragDistance;
@property(nonatomic) struct CGPoint lastTouchLocation; // @synthesize lastTouchLocation=_lastTouchLocation;
@property(nonatomic) struct CGPoint referenceTouchLocation; // @synthesize referenceTouchLocation=_referenceTouchLocation;
@property(nonatomic) double currentSliderValue; // @synthesize currentSliderValue=_currentSliderValue;
@property(nonatomic) double referenceSliderValue; // @synthesize referenceSliderValue=_referenceSliderValue;
@property(nonatomic) _Bool hasRecognizedSignificantSliderValueChange; // @synthesize hasRecognizedSignificantSliderValueChange=_hasRecognizedSignificantSliderValueChange;
@property(nonatomic) _Bool ignoreTouches; // @synthesize ignoreTouches=_ignoreTouches;
@property(readonly, nonatomic) HUQuickControlPanningContext *context; // @synthesize context=_context;
@property(retain, nonatomic) UIGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
@property(nonatomic) __weak id <HUQuickControlSliderGestureTransformerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (double)_rawSliderValueForLocation:(struct CGPoint)arg1;
- (void)_handleSliderValuePan:(struct CGPoint)arg1;
- (void)_handleGesturePan:(id)arg1;
- (_Bool)_shouldIgnoreAllGestures;
- (void)dealloc;
- (id)initWithGestureRecognizer:(id)arg1 context:(id)arg2;

@end

