//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GEOMapAccess, GEOMapTileFinder, GEOVectorTile, NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOMapEdgeConnectionFinder
{
    GEOMapAccess *_map;
    GEOMapTileFinder *_tileFinder;
    NSMutableArray *_builders;
    GEOVectorTile *_tile;
    CDStruct_3b01f0aa *_junction;
    CDStruct_2c43369c _coordinate;
}

- (void).cxx_destruct;
- (void)_findConnections:(CDUnknownBlockType)arg1 incoming:(_Bool)arg2;
- (void)findConnectionsIn:(CDUnknownBlockType)arg1;
- (void)findConnectionsOut:(CDUnknownBlockType)arg1;
- (void)cancel;
- (id)initWithMap:(id)arg1 tile:(id)arg2 junction:(CDStruct_3b01f0aa *)arg3 coordinate:(CDStruct_c3b9c2ee)arg4;

@end

