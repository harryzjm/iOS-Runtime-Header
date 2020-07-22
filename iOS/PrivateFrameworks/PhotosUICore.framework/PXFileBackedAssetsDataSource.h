//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, _PXFileBackedAssetCollection;

@interface PXFileBackedAssetsDataSource
{
    _PXFileBackedAssetCollection *_assetCollection;
    NSDictionary *_assetCollectionBySection;
    NSDictionary *_fileURLsBySection;
}

@property(readonly, nonatomic) NSDictionary *fileURLsBySection; // @synthesize fileURLsBySection=_fileURLsBySection;
- (void).cxx_destruct;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath)arg1;
- (long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id)initWithFileURLsBySection:(id)arg1;

@end
