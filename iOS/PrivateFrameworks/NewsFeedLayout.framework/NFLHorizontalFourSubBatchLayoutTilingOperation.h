//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface NFLHorizontalFourSubBatchLayoutTilingOperation
{
}

+ (void)drawDebugNodeViewInFrame:(struct CGRect)arg1 context:(struct CGContext *)arg2 layoutSeed:(CDStruct_bfc4548b)arg3;
+ (unsigned long long)tileInfosUsedCount;
+ (_Bool)mayTileInfosTileSubBatchLayout:(id)arg1 withLayoutSeed:(CDStruct_bfc4548b)arg2;
- (id)tiledSubBatchLayoutWithRankedLayoutsByTileInfo:(id)arg1;
- (id)rankedLayoutRequests;
- (_Bool)isReliable;

@end

