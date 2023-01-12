//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PHASEEngine;

@interface PHASERoomSimulationView : NSObject
{
    struct RuntimeDebugParameters _runtimeDebugParameters;
    PHASEEngine *_engine;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) __weak PHASEEngine *engine; // @synthesize engine=_engine;
- (void)setRayTraceIntersectionHandleCountLimit:(unsigned long long)arg1;
- (void)setLateReverbAggregationCoef:(float)arg1;
- (void)setEarlyScatteringAggregationCoef:(float)arg1;
- (void)setEarlyReflectionsAggregationCoef:(float)arg1;
- (void)setEarlyScatteringEnabled:(unsigned long long)arg1;
- (void)setRayTraceComputeTimeLimit:(float)arg1;
- (void)setImageSourceOrder:(unsigned long long)arg1;
- (void)setTailcorrectionEnabled:(unsigned long long)arg1;
- (void)endTrackingListenerLateReverbMetadata:(id)arg1;
- (void)beginTrackingListenerLateReverbMetadata:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)endTrackingListenerEarlyResponseMetadata:(id)arg1;
- (void)beginTrackingListenerEarlyResponseMetadata:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)endTrackingImageSourceLocations:(id)arg1;
- (void)beginTrackingImageSourceLocations:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)endTrackingEnergyHistogram:(id)arg1;
- (void)beginTrackingEnergyHistogram:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)endTrackingRayTraceIntersections:(id)arg1;
- (void)beginTrackingRayTraceIntersections:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)initWithEngine:(id)arg1;

@end
