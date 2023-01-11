//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDateInterval;

@interface GEOSpatialEventLookupParameters : NSObject
{
    CDStruct_2c43369c _coordinate;
    double _radius;
    NSArray *_categories;
    NSDateInterval *_dateInterval;
    int _maxResultCount;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) int maxResultCount; // @synthesize maxResultCount=_maxResultCount;
@property(readonly, nonatomic) NSDateInterval *dateInterval; // @synthesize dateInterval=_dateInterval;
@property(readonly, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property(readonly, nonatomic) double radius; // @synthesize radius=_radius;
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate; // @synthesize coordinate=_coordinate;
- (id)initWithCoordinate:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2 categories:(id)arg3 dateInterval:(id)arg4 maxResultCount:(int)arg5;
- (id)initWithCoordinate:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2 categories:(id)arg3 dateInterval:(id)arg4;
- (id)init;

@end
