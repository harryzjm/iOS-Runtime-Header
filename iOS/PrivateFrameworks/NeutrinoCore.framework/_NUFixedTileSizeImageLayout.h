//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface _NUFixedTileSizeImageLayout
{
    CDStruct_d58201db _tileSize;
    CDStruct_d58201db _borderSize;
    CDStruct_d58201db _tileCounts;
}

- (_Bool)isEqualToLayout:(id)arg1;
- (CDStruct_912cb5d2)tileCounts;
- (CDStruct_912cb5d2)borderSize;
- (CDStruct_912cb5d2)tileSize;
- (id)tileInfoAtIndex:(long long)arg1;
- (CDStruct_996ac03c)contentRectForTileAtIndex:(long long)arg1;
- (CDStruct_996ac03c)frameRectForTileAtIndex:(long long)arg1;
- (long long)tileCount;
- (id)initWithImageSize:(CDStruct_912cb5d2)arg1 tileSize:(CDStruct_912cb5d2)arg2 borderSize:(CDStruct_912cb5d2)arg3;

@end

