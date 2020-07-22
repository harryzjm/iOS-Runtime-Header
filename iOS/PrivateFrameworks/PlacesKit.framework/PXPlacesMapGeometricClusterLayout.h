//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PXPlacesMapGeometricClusterLayout
{
    double _clusteringDistance;
}

@property(nonatomic) double clusteringDistance; // @synthesize clusteringDistance=_clusteringDistance;
- (_Bool)_shapeAtCoordinate:(struct CLLocationCoordinate2D)arg1 overlapsShapeAtCoordinate:(struct CLLocationCoordinate2D)arg2 forViewPort:(id)arg3;
- (id)_findClusterOverlappingGeotaggable:(id)arg1 fromClusters:(id)arg2 forViewPort:(id)arg3;
- (id)_clusterGeotaggables:(id)arg1 forViewPort:(id)arg2;
- (id)layoutForViewPort:(id)arg1 andDataSourceChange:(id)arg2;
- (id)init;

@end
