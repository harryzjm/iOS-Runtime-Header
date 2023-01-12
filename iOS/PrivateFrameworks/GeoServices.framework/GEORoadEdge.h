//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOMultiSectionFeature;

@interface GEORoadEdge : NSObject <NSCopying>
{
    struct GeoCodecsRoadEdge _edge;
    GEOMultiSectionFeature *_feature;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) struct GeoCodecsConnectivityJunction *junctionB;
@property(readonly, nonatomic) struct GeoCodecsConnectivityJunction *junctionA;
@property(readonly, nonatomic) unsigned long long junctionIndexB;
@property(readonly, nonatomic) unsigned long long junctionIndexA;
@property(readonly, nonatomic) unsigned long long vertexIndexB;
@property(readonly, nonatomic) unsigned long long vertexIndexA;
@property(readonly, nonatomic) GEOMultiSectionFeature *road;
- (struct GeoCodecsRoadEdge *)get;
- (void)setMultiSectionFeature:(id)arg1;
- (id)init:(struct GeoCodecsRoadEdge *)arg1 withMultiSectionFeatureInterface:(id)arg2;

@end
