//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GEOMapTileFinder;

__attribute__((visibility("hidden")))
@interface GEOMapTransitGeometryFinder
{
    GEOMapTileFinder *_tileFinder;
    unsigned long long _transitID;
}

- (void).cxx_destruct;
- (void)findTransitGeometryWithHandler:(CDUnknownBlockType)arg1;
- (void)cancel;
- (id)initWithMap:(id)arg1 transitID:(unsigned long long)arg2 coordinate:(CDStruct_c3b9c2ee)arg3;

@end
