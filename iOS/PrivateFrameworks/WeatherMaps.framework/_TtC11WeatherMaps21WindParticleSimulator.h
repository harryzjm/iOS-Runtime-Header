//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE;

@interface _TtC11WeatherMaps21WindParticleSimulator : _TtCs12_SwiftObject
{
    MISSING_TYPE *particles;
    MISSING_TYPE *particleBucket;
    MISSING_TYPE *particleAmount;
    MISSING_TYPE *particleLifespan;
    MISSING_TYPE *particleLifespanLowerVariance;
    MISSING_TYPE *particleLifespanUpperVariance;
    MISSING_TYPE *particleSpeed;
    MISSING_TYPE *delegate;
    MISSING_TYPE *tiledField;
    MISSING_TYPE *fullField;
    MISSING_TYPE *displayLink;
    MISSING_TYPE *isRunning;
    MISSING_TYPE *targetFPS;
    MISSING_TYPE *timeIntervalSinceLastFrameUpdate;
    MISSING_TYPE *timeEvolveReviveLastRun;
    MISSING_TYPE *timeEvolveBucketLastRun;
    MISSING_TYPE *visibleTiles;
    MISSING_TYPE *nextSimulationCycleParameters;
    MISSING_TYPE *simulationParametersLock;
    MISSING_TYPE *isRunningCalculations;
    MISSING_TYPE *trackedAnimatedTileKeys;
    MISSING_TYPE *trackedAnimatedTileKeysLock;
    MISSING_TYPE *signposter;
}

- (void)tick:(id)arg1;

@end

