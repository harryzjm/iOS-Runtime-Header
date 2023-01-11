//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUI/PUInterruptibleViewControllerTransition-Protocol.h>
#import <PhotosUI/PUTilingViewControllerTransition-Protocol.h>

@class NSString, PUAnimationGroup, PUMaximumChangeRateValueFilter, PUTilingView, PUViewControllerTransition;
@protocol PUTilingViewControllerTransition><PUInterruptibleViewControllerTransition, PUTilingViewControllerTransitionEndPoint;

__attribute__((visibility("hidden")))
@interface PUTilingViewTransitionHelper : NSObject <PUTilingViewControllerTransition, PUInterruptibleViewControllerTransition>
{
    _Bool _transitionPaused;
    _Bool _hasStarted;
    double _presentationDuration;
    double _dismissalDuration;
    PUViewControllerTransition<PUTilingViewControllerTransition><PUInterruptibleViewControllerTransition> *_transition;
    long long __currentOperation;
    double __startTime;
    double __progressSpeed;
    double __transitionProgressOffset;
    double __backgroundProgressOffset;
    PUMaximumChangeRateValueFilter *__transitionProgressValueFilter;
    PUMaximumChangeRateValueFilter *__chromeProgressValueFilter;
    PUAnimationGroup *__tilingViewAnimationGroup;
    PUTilingView *__tilingView;
    id <PUTilingViewControllerTransitionEndPoint> __fromEndPoint;
    id <PUTilingViewControllerTransitionEndPoint> __toEndPoint;
    id <PUTilingViewControllerTransitionEndPoint> __endPointOwningTilingView;
    unsigned long long __interactionOptions;
}

+ (void)unregisterTransitionEndPoint:(id)arg1 forViewController:(id)arg2;
+ (void)registerTransitionEndPoint:(id)arg1 forViewController:(id)arg2;
+ (id)transitionEndPointWithViewController:(id)arg1;
@property(nonatomic, setter=_setInteractionOptions:) unsigned long long _interactionOptions; // @synthesize _interactionOptions=__interactionOptions;
@property(nonatomic, setter=_setEndPointOwningTilingView:) __weak id <PUTilingViewControllerTransitionEndPoint> _endPointOwningTilingView; // @synthesize _endPointOwningTilingView=__endPointOwningTilingView;
@property(nonatomic, setter=_setToEndPoint:) __weak id <PUTilingViewControllerTransitionEndPoint> _toEndPoint; // @synthesize _toEndPoint=__toEndPoint;
@property(nonatomic, setter=_setFromEndPoint:) __weak id <PUTilingViewControllerTransitionEndPoint> _fromEndPoint; // @synthesize _fromEndPoint=__fromEndPoint;
@property(nonatomic, setter=_setTilingView:) __weak PUTilingView *_tilingView; // @synthesize _tilingView=__tilingView;
@property(retain, nonatomic, setter=_setTilingViewAnimationGroup:) PUAnimationGroup *_tilingViewAnimationGroup; // @synthesize _tilingViewAnimationGroup=__tilingViewAnimationGroup;
@property(retain, nonatomic, setter=_setChromeProgressValueFilter:) PUMaximumChangeRateValueFilter *_chromeProgressValueFilter; // @synthesize _chromeProgressValueFilter=__chromeProgressValueFilter;
@property(retain, nonatomic, setter=_setTransitionProgressValueFilter:) PUMaximumChangeRateValueFilter *_transitionProgressValueFilter; // @synthesize _transitionProgressValueFilter=__transitionProgressValueFilter;
@property(nonatomic, setter=_setBackgroundProgressOffset:) double _backgroundProgressOffset; // @synthesize _backgroundProgressOffset=__backgroundProgressOffset;
@property(nonatomic, setter=_setTransitionProgressOffset:) double _transitionProgressOffset; // @synthesize _transitionProgressOffset=__transitionProgressOffset;
@property(nonatomic, setter=_setProgressSpeed:) double _progressSpeed; // @synthesize _progressSpeed=__progressSpeed;
@property(nonatomic, setter=_setStartTime:) double _startTime; // @synthesize _startTime=__startTime;
@property(nonatomic, setter=_setCurrentOperation:) long long _currentOperation; // @synthesize _currentOperation=__currentOperation;
@property(nonatomic, setter=_setHasStarted:) _Bool hasStarted; // @synthesize hasStarted=_hasStarted;
@property(nonatomic, getter=isTransitionPaused, setter=_setTransitionPaused:) _Bool transitionPaused; // @synthesize transitionPaused=_transitionPaused;
@property(nonatomic) __weak PUViewControllerTransition<PUTilingViewControllerTransition><PUInterruptibleViewControllerTransition> *transition; // @synthesize transition=_transition;
@property(readonly, nonatomic) double dismissalDuration; // @synthesize dismissalDuration=_dismissalDuration;
@property(readonly, nonatomic) double presentationDuration; // @synthesize presentationDuration=_presentationDuration;
- (void).cxx_destruct;
- (void)_transferView:(id)arg1 toSuperview:(id)arg2;
- (long long)_barStyleForEndPoint:(id)arg1;
- (_Bool)_endPointUsesTransientTilingView:(id)arg1;
- (_Bool)_validateTransitionFromEndPoint:(id)arg1 toEndPoint:(id)arg2;
- (void)animateTransitionWithOperation:(long long)arg1 startedInteractively:(_Bool)arg2;
- (void)_getTransitionProgress:(double *)arg1 backgroundProgress:(double *)arg2 chromeProgress:(double *)arg3;
- (void)resumeTransition:(_Bool)arg1;
- (void)updatePausedTransitionWithProgress:(double)arg1 interactionProgress:(double)arg2;
- (void)pauseTransitionWithOptions:(unsigned long long)arg1;
- (void)pauseTransition;
- (id)initWithPresentationDuration:(double)arg1 dismissalDuration:(double)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

