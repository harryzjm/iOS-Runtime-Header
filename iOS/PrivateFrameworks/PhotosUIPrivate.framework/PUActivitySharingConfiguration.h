//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString, PHFetchResult, PHPerson, PUPhotoSelectionManager, PXPhotosDataSource;
@protocol PXDisplayAsset;

__attribute__((visibility("hidden")))
@interface PUActivitySharingConfiguration : NSObject
{
    _Bool _allowsAirPlayActivity;
    _Bool _allowsRemoveFromFeaturedPhotosActivity;
    _Bool _allowsSuggestLessPersonActivity;
    _Bool _wantsActionSheet;
    _Bool _excludeShareActivity;
    PHFetchResult *_collectionListFetchResult;
    PUPhotoSelectionManager *_selectionManager;
    PXPhotosDataSource *_photosDataSource;
    NSDictionary *_assetsFetchResultsByAssetCollection;
    NSArray *_activities;
    NSArray *_excludedActivityTypes;
    PHPerson *_person;
    NSString *_title;
    NSString *_subtitle;
    id <PXDisplayAsset> _keyAsset;
    long long _sourceOrigin;
    PHFetchResult *_initialAssetsFetchResult;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PHFetchResult *initialAssetsFetchResult; // @synthesize initialAssetsFetchResult=_initialAssetsFetchResult;
@property(nonatomic) long long sourceOrigin; // @synthesize sourceOrigin=_sourceOrigin;
@property(retain, nonatomic) id <PXDisplayAsset> keyAsset; // @synthesize keyAsset=_keyAsset;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool excludeShareActivity; // @synthesize excludeShareActivity=_excludeShareActivity;
@property(nonatomic) _Bool wantsActionSheet; // @synthesize wantsActionSheet=_wantsActionSheet;
@property(retain, nonatomic) PHPerson *person; // @synthesize person=_person;
@property(nonatomic) _Bool allowsSuggestLessPersonActivity; // @synthesize allowsSuggestLessPersonActivity=_allowsSuggestLessPersonActivity;
@property(nonatomic) _Bool allowsRemoveFromFeaturedPhotosActivity; // @synthesize allowsRemoveFromFeaturedPhotosActivity=_allowsRemoveFromFeaturedPhotosActivity;
@property(nonatomic) _Bool allowsAirPlayActivity; // @synthesize allowsAirPlayActivity=_allowsAirPlayActivity;
@property(copy, nonatomic) NSArray *excludedActivityTypes; // @synthesize excludedActivityTypes=_excludedActivityTypes;
@property(copy, nonatomic) NSArray *activities; // @synthesize activities=_activities;
@property(copy, nonatomic) NSDictionary *assetsFetchResultsByAssetCollection; // @synthesize assetsFetchResultsByAssetCollection=_assetsFetchResultsByAssetCollection;
@property(retain, nonatomic) PXPhotosDataSource *photosDataSource; // @synthesize photosDataSource=_photosDataSource;
@property(readonly, nonatomic) PUPhotoSelectionManager *selectionManager; // @synthesize selectionManager=_selectionManager;
@property(readonly, nonatomic) PHFetchResult *collectionListFetchResult; // @synthesize collectionListFetchResult=_collectionListFetchResult;
- (id)initWithCollectionsFetchResult:(id)arg1 selectionManager:(id)arg2;

@end

