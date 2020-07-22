//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SXMosaicGalleryVerticalLivingRoomLayout
{
    double _largeItemHeight;
    double _smallItemHeight;
}

@property(readonly, nonatomic) double smallItemHeight; // @synthesize smallItemHeight=_smallItemHeight;
@property(readonly, nonatomic) double largeItemHeight; // @synthesize largeItemHeight=_largeItemHeight;
- (struct _NSRange)columnRangeForItem:(id)arg1;
- (id)calculateFrames;
- (double)calculateHeight;
- (id)initWithCluster:(id)arg1 numberOfColumns:(unsigned long long)arg2 columnLayout:(id)arg3;

@end
