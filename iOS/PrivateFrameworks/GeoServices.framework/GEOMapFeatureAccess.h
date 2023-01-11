//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOTileLoader;
@protocol OS_dispatch_queue;

@interface GEOMapFeatureAccess : NSObject
{
    NSObject<OS_dispatch_queue> *_callbackQueue;
    _Bool _allowNetworkTileLoad;
    _Bool _flipNegativeTravelDirectionRoads;
    _Bool _visitDoubleTravelDirectionRoadsTwice;
    GEOTileLoader *_tileLoader;
}

+ (unsigned long long)zoomLevelForStyle:(int)arg1 scale:(int)arg2;
@property(nonatomic) _Bool visitDoubleTravelDirectionRoadsTwice; // @synthesize visitDoubleTravelDirectionRoadsTwice=_visitDoubleTravelDirectionRoadsTwice;
@property(nonatomic) _Bool flipNegativeTravelDirectionRoads; // @synthesize flipNegativeTravelDirectionRoads=_flipNegativeTravelDirectionRoads;
@property(nonatomic) _Bool allowNetworkTileLoad; // @synthesize allowNetworkTileLoad=_allowNetworkTileLoad;
- (void).cxx_destruct;
- (void)_preloadTilesNear:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2 tileSetStyle:(int)arg3 tileSize:(int)arg4 tileScale:(int)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (id)roadTileKeysNear:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2;
- (void)preloadBuildingTilesNear:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)preloadTransitTilesNear:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)preloadRoadTilesNear:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)findBuildingsNear:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2 handler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)findTransitGeometryForPoint:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_findChildrenOfTransitPoint:(id)arg1 handler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_findParentOfTransitPoint:(id)arg1 handler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)findTransitAccessPointsForStation:(id)arg1 handler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)findTransitHallsForStation:(id)arg1 handler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)findTransitStopsForHall:(id)arg1 handler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)findTransitStationForHall:(id)arg1 handler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)findTransitHallForStop:(id)arg1 handler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)findTransitLinksNear:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2 handler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)_findTransitPointsOfType:(unsigned long long)arg1 nearCoordinate:(CDStruct_c3b9c2ee)arg2 radius:(double)arg3 handler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)findTransitPointWithID:(unsigned long long)arg1 near:(CDStruct_c3b9c2ee)arg2 pointHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)findTransitStationsNear:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2 handler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)findTransitHallsNear:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2 handler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)findTransitStopsNear:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2 handler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)findRoadsToJunction:(id)arg1 handler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)findRoadsFromJunction:(id)arg1 handler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)findRoadsToNextIntersectionOf:(id)arg1 handler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)findRoadsFromNextIntersectionOf:(id)arg1 handler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)findRoadsToPreviousIntersectionOf:(id)arg1 handler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)findRoadsFromPreviousIntersectionOf:(id)arg1 handler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)findRoadsNear:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2 handler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (CDUnknownBlockType)_openTileLoaderWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithQueue:(id)arg1 memoryCacheCountLimit:(unsigned long long)arg2 memoryCacheCostLimit:(unsigned long long)arg3;
- (id)initWithQueue:(id)arg1;
- (id)init;

@end

