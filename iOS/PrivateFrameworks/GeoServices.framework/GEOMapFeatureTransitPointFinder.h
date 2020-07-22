//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface GEOMapFeatureTransitPointFinder
{
}

- (id)_transitPointForFeature:(struct GEOTransitNodeFeature *)arg1;
- (id)_geometryTileFinder;
- (id)_tileFinder;
- (id)findGeometryForTransitPoint:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)findTransitAccessPointsForStation:(id)arg1 handler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)findTransitPointsWithParent:(id)arg1 handler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)findParentOfTransitPoint:(id)arg1 handler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)findTransitPointWithID:(unsigned long long)arg1 near:(CDStruct_c3b9c2ee)arg2 handler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)findTransitPointsOfType:(unsigned long long)arg1 near:(CDStruct_c3b9c2ee)arg2 radius:(double)arg3 handler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;

@end

