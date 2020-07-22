//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOMapRegion, GEOTransitDecoderData, GEOTransitSuggestedRoute, NSMutableArray, NSMutableData;

__attribute__((visibility("hidden")))
@interface GEOTransitRouteBuilder : NSObject
{
    NSMutableArray *_stepInfos;
    _Bool _usesZilch;
    unsigned long long _tripCount;
    NSMutableArray *_steps;
    NSMutableArray *_legs;
    NSMutableData *_pointsData;
    NSMutableArray *_pointSections;
    GEOMapRegion *_boundingMapRegion;
    GEOTransitSuggestedRoute *_suggestedRoute;
    GEOTransitDecoderData *_decoderData;
}

- (void).cxx_destruct;
- (_Bool)_shouldBreakPointSectionAtStep:(id)arg1 previousStep:(id)arg2;
- (id)_sectionForRoute:(id)arg1 pointRange:(struct _NSRange)arg2 stepIndex:(unsigned long long)arg3 bounds:(CDStruct_90e2a262)arg4 currentTransitLineColor:(id)arg5 startDistance:(double)arg6;
- (double)_buildPointSectionsForRoute:(id)arg1 pointRange:(struct _NSRange)arg2 stepIndex:(unsigned long long)arg3 currentTransitLineColor:(id)arg4 startDistance:(double)arg5;
- (void)_buildPointSectionsForRoute:(id)arg1;
- (id)_walkingStepForStepInfoIndex:(unsigned long long)arg1 route:(id)arg2 validPointRange:(struct _NSRange)arg3;
- (struct _NSRange)_validPointRangeForStepInfoIndex:(unsigned long long)arg1;
- (unsigned long long)_stepCountForLegWithStartingStepIndex:(unsigned long long)arg1;
- (id)_legForSteps:(struct _NSRange)arg1 route:(id)arg2;
- (id)_stepForStepInfo:(unsigned long long)arg1 route:(id)arg2;
- (struct _NSRange)_appendPointData:(id)arg1 withContinuity:(_Bool)arg2;
- (void)_buildTransitStepInfo:(id)arg1;
- (void)_buildArrivalStepInfo:(id)arg1;
- (void)_buildExpandedWalkingStepInfos:(id)arg1;
- (void)_reset;
- (_Bool)_index:(unsigned long long)arg1 matchesArray:(unsigned int *)arg2 ofLength:(unsigned long long)arg3;
- (void)_buildRouteFromSections:(id)arg1;
- (void)_buildRouteFromSteps:(id)arg1;
- (void)buildRoute:(id)arg1;
- (void)dealloc;
- (id)initWithSuggestedRoute:(id)arg1 data:(id)arg2;

@end

