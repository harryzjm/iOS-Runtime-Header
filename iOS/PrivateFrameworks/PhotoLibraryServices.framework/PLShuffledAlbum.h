//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLAlbumProtocol-Protocol.h>
#import <PhotoLibraryServices/PLIndexMappingCache-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSMutableOrderedSet, NSNumber, NSOrderedSet, NSString, NSURL, PLManagedAsset, UIImage;
@protocol NSObject><NSCopying, PLAlbumProtocol;

@interface PLShuffledAlbum : NSObject <PLIndexMappingCache, PLAlbumProtocol>
{
    struct __CFArray *_toBackingMap;
    struct __CFArray *_fromBackingMap;
    struct NSObject *_backingAlbum;
    PLManagedAsset *_startingAsset;
    NSMutableOrderedSet *_assets;
}

+ (struct NSObject *)unshuffledAlbum:(struct NSObject *)arg1;
+ (struct NSObject *)shuffledAlbum:(struct NSObject *)arg1 startingAsset:(id)arg2;
@property(retain, nonatomic) NSMutableOrderedSet *_assets; // @synthesize _assets;
- (void)batchFetchAssets:(id)arg1;
@property(readonly, copy, nonatomic) CDUnknownBlockType sortingComparator;
@property(readonly, retain, nonatomic) NSURL *groupURL;
@property(retain, nonatomic) NSString *importSessionID;
@property(retain, nonatomic) NSDictionary *slideshowSettings;
@property(readonly, nonatomic) _Bool shouldDeleteWhenEmpty;
- (_Bool)canPerformEditOperation:(unsigned long long)arg1;
@property(readonly, copy, nonatomic) NSArray *localizedLocationNames;
@property(readonly, nonatomic) _Bool canShowAvalancheStacks;
@property(readonly, nonatomic) _Bool canShowComments;
@property(readonly, nonatomic) _Bool canContributeToCloudSharedAlbum;
@property(readonly, nonatomic) _Bool isUserLibraryAlbum;
@property(readonly, nonatomic) _Bool isRecentlyAddedAlbum;
@property(readonly, nonatomic) _Bool isMultipleContributorCloudSharedAlbum;
@property(readonly, nonatomic) _Bool isFamilyCloudSharedAlbum;
@property(readonly, nonatomic) _Bool isOwnedCloudSharedAlbum;
@property(readonly, nonatomic) _Bool isInTrash;
@property(readonly, nonatomic) _Bool isFolder;
@property(readonly, nonatomic) _Bool isStandInAlbum;
@property(readonly, nonatomic) _Bool isPendingPhotoStreamAlbum;
@property(readonly, nonatomic) _Bool isCloudSharedAlbum;
@property(readonly, nonatomic) _Bool isPhotoStreamAlbum;
@property(readonly, nonatomic) _Bool isPanoramasAlbum;
@property(readonly, nonatomic) _Bool isCameraAlbum;
@property(readonly, nonatomic) _Bool isLibrary;
@property(readonly, retain, nonatomic) UIImage *posterImage;
@property(retain, nonatomic) PLManagedAsset *tertiaryKeyAsset;
@property(retain, nonatomic) PLManagedAsset *secondaryKeyAsset;
@property(retain, nonatomic) PLManagedAsset *keyAsset;
@property(readonly, copy, nonatomic) NSString *name;
- (void)reducePendingItemsCountBy:(unsigned long long)arg1;
@property(nonatomic) int pendingItemsType;
@property(nonatomic) int pendingItemsCount;
@property(nonatomic) _Bool hasUnseenContentBoolValue;
@property(readonly, nonatomic) unsigned long long videosCount;
@property(readonly, nonatomic) unsigned long long photosCount;
@property(readonly, nonatomic) _Bool isEmpty;
- (unsigned long long)count;
@property(readonly, nonatomic) unsigned long long assetsCount;
@property(readonly, nonatomic) unsigned long long approximateCount;
@property(readonly, retain, nonatomic) NSMutableOrderedSet *mutableAssets;
@property(readonly, retain, nonatomic) NSOrderedSet *assets;
@property(readonly, copy, nonatomic) NSString *localizedTitle;
@property(readonly, retain, nonatomic) NSString *title;
@property(readonly, nonatomic) int kindValue;
@property(readonly, retain, nonatomic) NSNumber *kind;
@property(readonly, retain, nonatomic) NSString *uuid;
- (void)dealloc;
- (id)init;
@property(readonly, retain, nonatomic) PLManagedAsset *startingAsset;
@property(readonly, retain, nonatomic) NSObject<PLAlbumProtocol> *backingAlbum;
- (id)initWithBackingAlbum:(struct NSObject *)arg1 startingAsset:(id)arg2;
@property(readonly, copy) NSString *description;
- (Class)derivedChangeNotificationClass;
- (_Bool)mappedDataSourceChanged:(id)arg1 remoteNotificationData:(id)arg2;
@property(readonly, copy, nonatomic) id <NSObject><NSCopying> cachedIndexMapState;
- (void)createShuffledIndexesMaps;
- (void)createShuffledIndexesMapsIfNeeded;
- (struct __CFArray *)fromBackingMap;
- (void)replaceObjectInShuffledAssetsAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)removeObjectFromShuffledAssetsAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inShuffledAssetsAtIndex:(unsigned long long)arg2;
- (id)objectInShuffledAssetsAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexInShuffledAssetsOfObject:(id)arg1;
- (unsigned long long)countOfShuffledAssets;

// Remaining properties
@property(nonatomic) unsigned long long batchSize;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, retain, nonatomic) NSDate *endDate;
@property(readonly) unsigned long long hash;
@property(readonly, retain, nonatomic) NSDate *startDate;
@property(readonly) Class superclass;

@end

