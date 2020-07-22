//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLCloudSharedAlbumProtocol-Protocol.h>
#import <PhotoLibraryServices/PLIndexMapperDataSource-Protocol.h>
#import <PhotoLibraryServices/PLIndexMappingCache-Protocol.h>
#import <PhotoLibraryServices/PLUserEditableAlbumProtocol-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSIndexSet, NSMutableIndexSet, NSMutableOrderedSet, NSNumber, NSOrderedSet, NSPredicate, NSString, NSURL, PLIndexMapper, PLManagedAsset, UIImage;
@protocol NSObject><NSCopying, PLAlbumProtocol;

@interface PLFilteredAlbum : NSObject <PLUserEditableAlbumProtocol, PLCloudSharedAlbumProtocol, PLIndexMapperDataSource, PLIndexMappingCache>
{
    PLIndexMapper *_indexMapper;
    NSMutableIndexSet *_filteredIndexes;
    _Bool _backingAlbumSupportsEdits;
    _Bool _backingAlbumSupportsCloudShared;
    NSMutableOrderedSet *_weak_assets;
    _Bool isObservingContextChanges;
    int filter;
    struct NSObject *_backingAlbum;
    NSPredicate *predicate;
    NSArray *_filterParameters;
}

+ (id)filteredIndexesInAlbum:(struct NSObject *)arg1 predicate:(id)arg2;
+ (id)descriptionForAlbumFilter:(int)arg1 parameters:(id)arg2;
+ (id)predicateForAlbumFilter:(int)arg1 parameters:(id)arg2;
+ (struct NSObject *)unfilteredAlbum:(struct NSObject *)arg1;
+ (struct NSObject *)filteredAlbum:(struct NSObject *)arg1 intersectFilter:(int)arg2;
+ (struct NSObject *)filteredAlbum:(struct NSObject *)arg1 predicate:(id)arg2;
+ (struct NSObject *)filteredAlbum:(struct NSObject *)arg1 filter:(int)arg2 parameters:(id)arg3;
+ (struct NSObject *)filteredAlbum:(struct NSObject *)arg1 filter:(int)arg2;
@property(readonly, retain, nonatomic) NSArray *filterParameters; // @synthesize filterParameters=_filterParameters;
@property(nonatomic) _Bool isObservingContextChanges; // @synthesize isObservingContextChanges;
@property(retain, nonatomic) NSPredicate *predicate; // @synthesize predicate;
@property(nonatomic) int filter; // @synthesize filter;
@property(retain, nonatomic) NSObject<PLAlbumProtocol> *backingAlbum; // @synthesize backingAlbum=_backingAlbum;
- (void)insertInternalUserEditableAssets:(id)arg1 atIndexes:(id)arg2 trimmedVideoPathInfo:(id)arg3 commentText:(id)arg4;
- (void)replaceFilteredAssetsAtIndexes:(id)arg1 withFilteredValues:(id)arg2;
- (void)replaceObjectInFilteredAssetsAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)removeFilteredAssetsAtIndexes:(id)arg1;
- (void)insertFilteredAssets:(id)arg1 atIndexes:(id)arg2;
- (void)removeObjectFromFilteredAssetsAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inFilteredAssetsAtIndex:(unsigned long long)arg2;
- (id)_editableBackingAlbum;
- (void)getFilteredAssets:(id *)arg1 range:(struct _NSRange)arg2;
- (id)filteredAssetsAtIndexes:(id)arg1;
- (id)objectInFilteredAssetsAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexInFilteredAssetsOfObject:(id)arg1;
- (unsigned long long)countOfFilteredAssets;
- (Class)derivedChangeNotificationClass;
- (_Bool)mappedDataSourceChanged:(id)arg1 remoteNotificationData:(id)arg2;
- (_Bool)shouldIncludeObjectAtIndex:(unsigned long long)arg1;
- (id)currentStateForChange;
@property(readonly, copy, nonatomic) id <NSObject><NSCopying> cachedIndexMapState;
@property(readonly, copy, nonatomic) NSIndexSet *filteredIndexes;
@property(readonly, retain, nonatomic) PLIndexMapper *indexMapper;
- (id)initWithBackingAlbum:(struct NSObject *)arg1 filter:(int)arg2 parameters:(id)arg3;
- (id)initWithBackingAlbum:(struct NSObject *)arg1 predicate:(id)arg2;
- (void)_commonInitWithBackingAlbum:(struct NSObject *)arg1 predicate:(id)arg2;
- (void)reducePendingItemsCountBy:(unsigned long long)arg1;
@property(nonatomic) int pendingItemsType;
@property(nonatomic) int pendingItemsCount;
- (void)backingContextDidChange:(id)arg1;
- (void)userDeleteSubscriberRecord:(id)arg1;
- (void)getUnseenStartMarkerIndex:(unsigned long long *)arg1 count:(unsigned long long *)arg2 showsProgress:(_Bool *)arg3;
- (void)updateCloudLastContributionDateWithDate:(id)arg1;
- (void)updateCloudLastInterestingChangeDateWithDate:(id)arg1;
- (id)cloudOwnerDisplayNameIncludingEmail:(_Bool)arg1 allowsEmail:(_Bool)arg2;
@property(readonly, retain, nonatomic) NSOrderedSet *cloudAlbumSubscriberRecords;
@property(nonatomic) _Bool cloudNotificationsEnabled;
@property(readonly, retain, nonatomic) NSDate *cloudFirstRecentBatchDate;
@property(readonly, retain, nonatomic) NSString *localizedSharedWithLabel;
- (id)localizedSharedByLabelAllowsEmail:(_Bool)arg1;
@property(readonly) int cloudRelationshipStateLocalValue;
@property(readonly) int cloudRelationshipStateValue;
@property(retain, nonatomic) NSDate *cloudLastContributionDate;
@property(retain, nonatomic) NSDate *cloudCreationDate;
@property(retain, nonatomic) NSDate *cloudLastInterestingChangeDate;
@property(retain, nonatomic) NSNumber *cloudMultipleContributorsEnabledLocal;
@property(retain, nonatomic) NSNumber *cloudMultipleContributorsEnabled;
@property(retain, nonatomic) NSNumber *cloudPublicURLEnabledLocal;
@property(retain, nonatomic) NSNumber *cloudPublicURLEnabled;
@property unsigned long long unseenAssetsCountIntegerValue;
@property(retain, nonatomic) NSNumber *unseenAssetsCount;
@property(retain, nonatomic) NSOrderedSet *invitationRecords;
@property(retain, nonatomic) NSString *cloudPersonID;
@property(retain, nonatomic) NSString *publicURL;
@property(retain, nonatomic) NSDate *cloudSubscriptionDate;
@property(nonatomic) _Bool cloudOwnerIsWhitelisted;
@property(retain, nonatomic) NSString *cloudOwnerHashedPersonID;
@property(retain, nonatomic) NSString *cloudOwnerEmail;
@property(retain, nonatomic) NSString *cloudOwnerFullName;
@property(retain, nonatomic) NSString *cloudOwnerLastName;
@property(retain, nonatomic) NSString *cloudOwnerFirstName;
@property(retain, nonatomic) NSDictionary *cloudMetadata;
@property(retain, nonatomic) NSString *cloudGUID;
- (id)_cloudSharedBackingAlbum;
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
@property(readonly, nonatomic) _Bool isWallpaperAlbum;
@property(readonly, nonatomic) _Bool isPanoramasAlbum;
@property(readonly, nonatomic) _Bool isCameraAlbum;
@property(readonly, nonatomic) _Bool isLibrary;
@property(readonly, retain, nonatomic) UIImage *posterImage;
@property(retain, nonatomic) PLManagedAsset *tertiaryKeyAsset;
@property(retain, nonatomic) PLManagedAsset *secondaryKeyAsset;
@property(retain, nonatomic) PLManagedAsset *keyAsset;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, copy, nonatomic) NSString *localizedTitle;
@property(readonly, nonatomic) unsigned long long videosCount;
@property(readonly, nonatomic) unsigned long long photosCount;
@property(readonly, nonatomic) _Bool isEmpty;
@property(nonatomic) _Bool hasUnseenContentBoolValue;
- (unsigned long long)count;
@property(readonly, nonatomic) unsigned long long assetsCount;
@property(readonly, nonatomic) unsigned long long approximateCount;
@property(readonly, retain, nonatomic) NSMutableOrderedSet *userEditableAssets;
@property(readonly, retain, nonatomic) NSMutableOrderedSet *mutableAssets;
@property(readonly, retain, nonatomic) NSOrderedSet *assets;
@property(readonly, nonatomic) int kindValue;
@property(readonly, retain, nonatomic) NSNumber *kind;
@property(readonly, retain, nonatomic) NSString *title;
@property(readonly, retain, nonatomic) NSString *uuid;
@property(nonatomic) NSMutableOrderedSet *_assets;
@property(readonly, copy) NSString *description;
- (void)dealloc;

// Remaining properties
@property(nonatomic) unsigned long long batchSize;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, retain, nonatomic) NSDate *endDate;
@property(readonly) unsigned long long hash;
@property(readonly, retain, nonatomic) NSDate *startDate;
@property(readonly) Class superclass;

@end

