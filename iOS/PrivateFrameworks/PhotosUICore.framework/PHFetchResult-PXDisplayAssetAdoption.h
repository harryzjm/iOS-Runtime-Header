//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Photos/PHFetchResult.h>

#import <PhotosUICore/PXDisplayAssetFetchResult-Protocol.h>
#import <PhotosUICore/PXPeopleFetchResult-Protocol.h>

@class NSString;
@protocol PXDisplayAsset;

@interface PHFetchResult (PXDisplayAssetAdoption) <PXDisplayAssetFetchResult, PXPeopleFetchResult>
- (id)thumbnailAssetAtIndex:(unsigned long long)arg1;
- (id)px_fetchAssetSortDatesWithDateRangeEliminationBlock:(CDUnknownBlockType)arg1;
- (long long)px_indexOfSortedAssetNearestToAsset:(id)arg1;
@property(readonly, nonatomic) unsigned long long px_sortOrder;
- (Class)px_sortByDatePropertySetClass;

// Remaining properties
@property(readonly, nonatomic) long long count;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) id <PXDisplayAsset> firstObject;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) id <PXDisplayAsset> lastObject;
@property(readonly) Class superclass;
@end
