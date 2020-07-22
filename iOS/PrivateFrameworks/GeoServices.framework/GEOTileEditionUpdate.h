//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOTileEditionUpdate : NSObject
{
    NSMutableArray *_entries;
    _Bool _flushEverything;
    _Bool _invalidateEverything;
}

@property(nonatomic) _Bool invalidateEverything; // @synthesize invalidateEverything=_invalidateEverything;
@property(nonatomic) _Bool flushEverything; // @synthesize flushEverything=_flushEverything;
- (void).cxx_destruct;
- (void)tileset:(unsigned int *)arg1 edition:(unsigned int *)arg2 provider:(unsigned int *)arg3 invalidateOnly:(_Bool *)arg4 atIndex:(unsigned long long)arg5;
- (unsigned long long)tilesetCount;
- (void)addTileset:(unsigned int)arg1 edition:(unsigned int)arg2 provider:(unsigned int)arg3 invalidateOnly:(_Bool)arg4;
- (id)init;

@end
