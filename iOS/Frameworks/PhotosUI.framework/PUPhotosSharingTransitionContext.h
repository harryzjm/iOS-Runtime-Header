//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSIndexPath;
@protocol PHAssetCollectionDataSource;

__attribute__((visibility("hidden")))
@interface PUPhotosSharingTransitionContext : NSObject
{
    id <PHAssetCollectionDataSource> _assetCollectionsDataSource;
    NSIndexPath *_keyAssetIndexPath;
}

@property(retain, nonatomic) NSIndexPath *keyAssetIndexPath; // @synthesize keyAssetIndexPath=_keyAssetIndexPath;
@property(retain, nonatomic) id <PHAssetCollectionDataSource> assetCollectionsDataSource; // @synthesize assetCollectionsDataSource=_assetCollectionsDataSource;
- (void).cxx_destruct;

@end

