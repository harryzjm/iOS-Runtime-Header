//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOMapFeatureTransitHall, GEOMapFeatureTransitStation, GEOMapFeatureTransitStop, NSArray, NSString;

@interface GEOMapFeatureTransitPoint : NSObject
{
    struct GEOTransitNodeFeature *_feature;
    CDStruct_2c43369c _coordinate;
    double _boundingRadius;
    CDStruct_02837cd9 _boundingRect;
    CDStruct_c3b9c2ee *_polygonPoints;
    unsigned long long _polygonPointsCount;
}

@property(readonly, nonatomic) unsigned long long polygonPointsCount; // @synthesize polygonPointsCount=_polygonPointsCount;
@property(readonly, nonatomic) CDStruct_c3b9c2ee *polygonPoints; // @synthesize polygonPoints=_polygonPoints;
@property(readonly, nonatomic) CDStruct_90e2a262 boundingRect; // @synthesize boundingRect=_boundingRect;
@property(readonly, nonatomic) double boundingRadius; // @synthesize boundingRadius=_boundingRadius;
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate; // @synthesize coordinate=_coordinate;
- (id)description;
@property(readonly, nonatomic) NSArray *internalSystemNames;
@property(readonly, nonatomic) NSString *internalName;
@property(readonly, nonatomic) unsigned long long transitID;
@property(readonly, nonatomic) GEOMapFeatureTransitStation *station;
@property(readonly, nonatomic) GEOMapFeatureTransitHall *hall;
@property(readonly, nonatomic) GEOMapFeatureTransitStop *stop;
- (void)dealloc;
- (void)updateWithGeometryFeature:(CDStruct_623f0827 *)arg1;
- (id)initWithFeature:(struct GEOTransitNodeFeature *)arg1;
@property(readonly, nonatomic) struct GEOTransitNodeFeature *feature;
@property(readonly, nonatomic) struct _GEOTileKey tileKey;

@end

