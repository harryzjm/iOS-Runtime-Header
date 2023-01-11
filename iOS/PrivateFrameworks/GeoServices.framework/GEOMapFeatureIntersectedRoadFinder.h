//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GEOTileLoader;

__attribute__((visibility("hidden")))
@interface GEOMapFeatureIntersectedRoadFinder
{
    GEOTileLoader *_tileLoader;
}

- (void).cxx_destruct;
- (void)_tilesAdjacentToTile:(struct _GEOTileKey)arg1 atPoint:(CDStruct_6e3f967a)arg2 withHandler:(CDUnknownBlockType)arg3;
- (id)_findRoadsAtJunction:(id)arg1 desiredRoadDirectionality:(unsigned long long)arg2 roadToIgnore:(id)arg3 handler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)findRoadsAtJunction:(id)arg1 desiredRoadDirectionality:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)findRoadsAtNextIntersectionOf:(id)arg1 desiredRoadDirectionality:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)findRoadsAtPreviousIntersectionOf:(id)arg1 desiredRoadDirectionality:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)initWithTileLoader:(id)arg1;

@end
