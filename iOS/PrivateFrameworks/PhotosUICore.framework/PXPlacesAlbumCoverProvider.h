//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PHAssetCollection, PXPlacesSnapshotFactory, UIImage;
@protocol OS_dispatch_queue, PXPlacesSnapshotFactoryDelegate;

@interface PXPlacesAlbumCoverProvider : NSObject
{
    NSString *_cachedFilePath;
    UIImage *_cachedSnapshotImage;
    NSString *_cachedSnapshotImageIdentifier;
    UIImage *_placeholderImage;
    long long _cachedCount;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
    NSObject<OS_dispatch_queue> *_requestsQueue;
    PXPlacesSnapshotFactory *_factory;
    id <PXPlacesSnapshotFactoryDelegate> _factoryDelegate;
    PHAssetCollection *_placesCollection;
}

@property(retain, nonatomic) PHAssetCollection *placesCollection; // @synthesize placesCollection=_placesCollection;
@property(retain, nonatomic) id <PXPlacesSnapshotFactoryDelegate> factoryDelegate; // @synthesize factoryDelegate=_factoryDelegate;
@property(retain, nonatomic) PXPlacesSnapshotFactory *factory; // @synthesize factory=_factory;
- (void).cxx_destruct;
- (id)backgroundImageNameForType:(unsigned long long)arg1 usingTraitCollection:(id)arg2;
- (id)createAlbumPlaceHolderImageUsingTraitCollection:(id)arg1;
- (_Bool)_imageExistsWithLocalIdentifier:(id)arg1;
- (_Bool)_fetchCachedImageAndIdentifier;
- (id)_placeHolderImageForExtendedTraitCollection:(id)arg1;
- (id)_placeHolderImageForPXExtendedTraitCollection:(id)arg1;
- (long long)assetCountWithForcedRefresh:(_Bool)arg1;
- (void)requestPlacesAlbumCover:(id)arg1 cacheDirPath:(id)arg2 andCompletion:(CDUnknownBlockType)arg3;
- (id)initWithDelegate:(id)arg1 andPlacesCollection:(id)arg2;

@end
