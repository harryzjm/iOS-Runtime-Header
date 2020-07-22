//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOComposedRoute, GEOPBTransitStop, NSArray;

@interface GEOComposedRouteLeg : NSObject
{
    GEOComposedRoute *_composedRoute;
    long long _type;
    struct _NSRange _pointRange;
    struct _NSRange _stepRange;
}

@property(nonatomic) __weak GEOComposedRoute *composedRoute; // @synthesize composedRoute=_composedRoute;
@property(readonly, nonatomic) struct _NSRange pointRange; // @synthesize pointRange=_pointRange;
@property(readonly, nonatomic) struct _NSRange stepRange; // @synthesize stepRange=_stepRange;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)description;
- (_Bool)_MapsCarPlay_isEqual:(id)arg1;
@property(readonly, nonatomic) NSArray *exitTransitAccessPoints;
@property(readonly, nonatomic) NSArray *enterTransitAccessPoints;
@property(readonly, nonatomic) GEOPBTransitStop *endingTransitStop;
@property(readonly, nonatomic) GEOPBTransitStop *startingTransitStop;
- (double)remainingTimeAlongLegFromStepIndex:(unsigned long long)arg1 currentStepRemainingDistance:(double)arg2;
- (double)remainingDistanceAlongLegFromStepIndex:(unsigned long long)arg1 currentStepRemainingDistance:(double)arg2;
@property(readonly, nonatomic) unsigned long long numberOfTransitStops;
@property(readonly, nonatomic) double expectedTime;
- (_Bool)contains:(id)arg1;
@property(readonly, nonatomic) NSArray *steps;
@property(readonly, nonatomic) unsigned long long stepCount;
@property(readonly, nonatomic) unsigned long long endStepIndex;
@property(readonly, nonatomic) unsigned long long startStepIndex;
@property(readonly, nonatomic) unsigned int pointCount;
@property(readonly, nonatomic) unsigned int endPointIndex;
@property(readonly, nonatomic) unsigned int startPointIndex;
@property(readonly, nonatomic) struct _NSRange transitStepRange;
@property(readonly, nonatomic) int transportType;
- (id)initWithComposedRoute:(id)arg1 routeLegType:(long long)arg2 stepRange:(struct _NSRange)arg3 pointRange:(struct _NSRange)arg4;

@end
