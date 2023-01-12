//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol PXDisplayAsset, PXDisplayAssetFetchResult;

@interface PXStoryRecipeAssetEdits : NSObject
{
    id <PXDisplayAsset> _keyAsset;
    id <PXDisplayAssetFetchResult> _userCuratedAssets;
    CDStruct_5d4c7ed3 _overallDurationInfo;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CDStruct_5d4c7ed3 overallDurationInfo; // @synthesize overallDurationInfo=_overallDurationInfo;
@property(readonly, nonatomic) id <PXDisplayAssetFetchResult> userCuratedAssets; // @synthesize userCuratedAssets=_userCuratedAssets;
@property(readonly, nonatomic) id <PXDisplayAsset> keyAsset; // @synthesize keyAsset=_keyAsset;
- (id)copyWithOverallDurationInfo:(CDStruct_5d4c7ed3)arg1 userCuratedAssets:(id)arg2;
- (id)copyWithKeyAsset:(id)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithKeyAsset:(id)arg1 overallDurationInfo:(CDStruct_5d4c7ed3)arg2 userCuratedAssets:(id)arg3;
- (id)init;

@end
