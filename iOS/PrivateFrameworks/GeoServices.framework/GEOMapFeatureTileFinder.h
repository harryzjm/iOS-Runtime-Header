//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GEOMapFeatureTileFinder : NSObject
{
    unsigned long long _zoomLevel;
    int _tileSize;
    int _tileScale;
    int _tileSetStyle;
    NSString *_tileLoaderClientIdentifier;
}

- (void).cxx_destruct;
- (id)_tileLoaderClientIdentifier;
- (id)_findTilesInList:(id)arg1 allowNetwork:(_Bool)arg2 queue:(id)arg3 handler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)cancel;
- (id)findTilesAround:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2 allowNetwork:(_Bool)arg3 queue:(id)arg4 handler:(CDUnknownBlockType)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (id)findTileWithKey:(struct _GEOTileKey)arg1 allowNetwork:(_Bool)arg2 queue:(id)arg3 handler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)initWithZoomLevel:(unsigned long long)arg1 tileSize:(int)arg2 tileScale:(int)arg3 tileSetStyle:(int)arg4;

@end
