//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOTransitNearbySchedule-Protocol.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _GEOTransitNearbySchedule : NSObject <GEOTransitNearbySchedule>
{
    NSArray *_categories;
}

+ (id)nearbyScheduleCategoriesFromSchedule:(id)arg1 departureSequenceContainers:(id)arg2 scheduledDepartureSequences:(id)arg3 incidents:(id)arg4;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *categories; // @synthesize categories=_categories;
- (id)initWithNearbySchedule:(id)arg1 departureSequenceContainers:(id)arg2 scheduledDepartureSequences:(id)arg3 incidents:(id)arg4 stopInfo:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
