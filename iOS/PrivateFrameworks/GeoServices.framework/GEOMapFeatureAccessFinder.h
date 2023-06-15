//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _GEOMapFeatureAccessRequest, _GEOMapFeatureAccessRequestParameters;

__attribute__((visibility("hidden")))
@interface GEOMapFeatureAccessFinder : NSObject
{
    _GEOMapFeatureAccessRequest *_existingRequest;
    _GEOMapFeatureAccessRequestParameters *_requestParameters;
}

- (void).cxx_destruct;
@property(retain, nonatomic) _GEOMapFeatureAccessRequestParameters *requestParameters; // @synthesize requestParameters=_requestParameters;
- (void)setExistingRequest:(id)arg1;
- (id)initWithRequestParameters:(id)arg1;
- (id)init;
- (_Bool)_boundingCircle:(const void *)arg1 intersectsPoints:(struct GeoCodecsVectorTilePoint *)arg2 pointCount:(unsigned long long)arg3;
- (_Bool)_boundingCircle:(const void *)arg1 intersectsTransitLink:(id)arg2;
- (_Bool)_boundingCircle:(const void *)arg1 withBuildingTilePoints:(vector_8ad7b88a)arg2;
- (_Bool)_boundingCircle:(const void *)arg1 intersectsFeature:(id)arg2;
- (Sphere_67aef8b0)_boundingCircleWithCenter:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2 inTile:(struct _GEOTileKey)arg3;
- (_Bool)_featureHasValidGeometry:(id)arg1;

@end

