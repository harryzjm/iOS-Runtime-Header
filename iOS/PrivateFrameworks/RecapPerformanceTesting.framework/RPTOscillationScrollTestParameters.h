//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RecapPerformanceTesting/RPTBlockBasedScrollTestParameters-Protocol.h>
#import <RecapPerformanceTesting/RPTScrollTestParameters-Protocol.h>

@class NSString, RCPSyntheticEventStream;

__attribute__((visibility("hidden")))
@interface RPTOscillationScrollTestParameters : NSObject <RPTBlockBasedScrollTestParameters, RPTScrollTestParameters>
{
    _Bool _shouldFlick;
    _Bool _preventDismissalGestures;
    _Bool _finishWithHalfIteration;
    NSString *_testName;
    CDUnknownBlockType _completionHandler;
    unsigned long long _iterations;
    double _amplitudeVariationPerIteration;
    double _initialAmplitude;
    long long _initialDirection;
    double _iterationDuration;
    long long _realInitialDirection;
    struct CGRect _scrollingBounds;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long realInitialDirection; // @synthesize realInitialDirection=_realInitialDirection;
@property(nonatomic) double iterationDuration; // @synthesize iterationDuration=_iterationDuration;
@property(nonatomic) long long initialDirection; // @synthesize initialDirection=_initialDirection;
@property(nonatomic) double initialAmplitude; // @synthesize initialAmplitude=_initialAmplitude;
@property(nonatomic) double amplitudeVariationPerIteration; // @synthesize amplitudeVariationPerIteration=_amplitudeVariationPerIteration;
@property(nonatomic) _Bool finishWithHalfIteration; // @synthesize finishWithHalfIteration=_finishWithHalfIteration;
@property(nonatomic) _Bool preventDismissalGestures; // @synthesize preventDismissalGestures=_preventDismissalGestures;
@property(nonatomic) _Bool shouldFlick; // @synthesize shouldFlick=_shouldFlick;
@property(nonatomic) struct CGRect scrollingBounds; // @synthesize scrollingBounds=_scrollingBounds;
@property(nonatomic) unsigned long long iterations; // @synthesize iterations=_iterations;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) NSString *testName; // @synthesize testName=_testName;
- (struct CGPoint)finalFingerPosition;
- (struct CGPoint)initialFingerPosition;
- (void)scrollWithComposer:(id)arg1 fromPoint:(struct CGPoint)arg2 toPoint:(struct CGPoint)arg3 duration:(double)arg4;
@property(readonly, nonatomic) RCPSyntheticEventStream *eventStream;
- (CDUnknownBlockType)composerBlock;
- (id)initWithTestName:(id)arg1 iterations:(unsigned long long)arg2 scrollingBounds:(struct CGRect)arg3 useFlicks:(_Bool)arg4 preventDismissalGestures:(_Bool)arg5 initialAmplitude:(double)arg6 amplitudeVariationPerIteration:(double)arg7 initialDirection:(long long)arg8 iterationDuration:(double)arg9 finishWithHalfIteration:(_Bool)arg10 completionHandler:(CDUnknownBlockType)arg11;
- (id)initWithTestName:(id)arg1 iterations:(unsigned long long)arg2 scrollingBounds:(struct CGRect)arg3 useFlicks:(_Bool)arg4 preventDismissalGestures:(_Bool)arg5 initialAmplitude:(double)arg6 amplitudeVariationPerIteration:(double)arg7 initialDirection:(long long)arg8 iterationDuration:(double)arg9 finishWithHalfIteration:(_Bool)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
