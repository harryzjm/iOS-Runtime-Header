//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface _UIVelocityIntegrator : NSObject
{
    _Bool _hasMemoizedVelocity;
    double _minimumRequiredMovement;
    double _hysteresisTimeInterval;
    NSMutableArray *_samples;
    double _resetHysteresisOnSampleThetaDiff;
    CDUnknownBlockType _didResetHysteresisOnThetaDiffHandler;
    struct CGVector _offset;
    struct CGVector _totalTranslation;
    struct CGVector _memoizedVelocity;
}

@property(copy, nonatomic) CDUnknownBlockType didResetHysteresisOnThetaDiffHandler; // @synthesize didResetHysteresisOnThetaDiffHandler=_didResetHysteresisOnThetaDiffHandler;
@property(nonatomic) double resetHysteresisOnSampleThetaDiff; // @synthesize resetHysteresisOnSampleThetaDiff=_resetHysteresisOnSampleThetaDiff;
@property(nonatomic) struct CGVector memoizedVelocity; // @synthesize memoizedVelocity=_memoizedVelocity;
@property(nonatomic) _Bool hasMemoizedVelocity; // @synthesize hasMemoizedVelocity=_hasMemoizedVelocity;
@property(nonatomic) struct CGVector totalTranslation; // @synthesize totalTranslation=_totalTranslation;
@property(retain, nonatomic) NSMutableArray *samples; // @synthesize samples=_samples;
@property(nonatomic) struct CGVector offset; // @synthesize offset=_offset;
@property(nonatomic) double hysteresisTimeInterval; // @synthesize hysteresisTimeInterval=_hysteresisTimeInterval;
@property(nonatomic) double minimumRequiredMovement; // @synthesize minimumRequiredMovement=_minimumRequiredMovement;
- (void).cxx_destruct;
- (struct CGVector)_computedVelocity;
- (long long)_sampleCount;
@property(readonly, nonatomic) struct CGVector velocity;
- (void)reset;
- (_Bool)hasVelocity;
- (void)addSample:(struct CGPoint)arg1;
- (id)init;

@end

