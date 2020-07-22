//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, PHAsset;

@interface PXAssetVariationsDataSource
{
    PHAsset *_asset;
    NSArray *_variations;
}

+ (id)emptyDataSource;
@property(readonly, copy, nonatomic) NSArray *variations; // @synthesize variations=_variations;
@property(readonly, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
- (void).cxx_destruct;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath)arg1;
- (long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id)initWithVariations:(id)arg1 asset:(id)arg2;
- (id)init;

@end
