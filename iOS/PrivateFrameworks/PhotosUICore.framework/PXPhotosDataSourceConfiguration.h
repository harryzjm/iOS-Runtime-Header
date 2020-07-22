//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSPredicate, NSSet, PHAsset, PHFetchResult;

@interface PXPhotosDataSourceConfiguration : NSObject
{
    _Bool _hideHiddenAssets;
    PHFetchResult *_collectionListFetchResult;
    unsigned long long _options;
    NSDictionary *_existingAssetCollectionFetchResults;
    NSDictionary *_existingKeyAssetsFetchResults;
    PHAsset *_referenceAsset;
    NSPredicate *_filterPredicate;
    NSSet *_allowedUUIDs;
    NSArray *_filterPersons;
}

@property(nonatomic) _Bool hideHiddenAssets; // @synthesize hideHiddenAssets=_hideHiddenAssets;
@property(retain, nonatomic) NSArray *filterPersons; // @synthesize filterPersons=_filterPersons;
@property(retain, nonatomic) NSSet *allowedUUIDs; // @synthesize allowedUUIDs=_allowedUUIDs;
@property(retain, nonatomic) NSPredicate *filterPredicate; // @synthesize filterPredicate=_filterPredicate;
@property(retain, nonatomic) PHAsset *referenceAsset; // @synthesize referenceAsset=_referenceAsset;
@property(retain, nonatomic) NSDictionary *existingKeyAssetsFetchResults; // @synthesize existingKeyAssetsFetchResults=_existingKeyAssetsFetchResults;
@property(retain, nonatomic) NSDictionary *existingAssetCollectionFetchResults; // @synthesize existingAssetCollectionFetchResults=_existingAssetCollectionFetchResults;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, nonatomic) PHFetchResult *collectionListFetchResult; // @synthesize collectionListFetchResult=_collectionListFetchResult;
- (void).cxx_destruct;
- (id)initWithCollectionListFetchResult:(id)arg1 options:(unsigned long long)arg2;
- (id)init;

@end

