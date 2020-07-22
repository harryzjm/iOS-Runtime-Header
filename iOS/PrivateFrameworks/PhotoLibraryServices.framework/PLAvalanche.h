//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLAssetChangeObserver-Protocol.h>
#import <PhotoLibraryServices/PLAssetContainer-Protocol.h>

@class NSArray, NSDate, NSIndexSet, NSMutableIndexSet, NSOrderedSet, NSString, PLManagedAsset, PLPhotoLibrary;

@interface PLAvalanche : NSObject <PLAssetContainer, PLAssetChangeObserver>
{
    NSString *_uuid;
    NSOrderedSet *_assets;
    PLPhotoLibrary *_photoLibrary;
    NSIndexSet *__originalAutoPickIndexes;
    NSMutableIndexSet *__autoPickIndexes;
    NSIndexSet *__originalUserFavoriteIndexes;
    NSMutableIndexSet *__userFavoriteIndexes;
    unsigned long long __originalStackIndex;
    unsigned long long __stackIndex;
    PLManagedAsset *__aNewPick;
    PLManagedAsset *__anOldPick;
    CDUnknownBlockType __completionHandler;
}

+ (_Bool)shouldHideAvalanchesFromPhotoStream;
+ (_Bool)shouldOnlyShowAvalanchePicks;
+ (struct CGRect)frameOfTopImageInStackForStackFrame:(struct CGRect)arg1;
+ (void)removeFavoriteStatus:(id)arg1;
+ (unsigned long long)_calculateStackAssetForAssetCount:(unsigned long long)arg1 autoPicks:(id)arg2 userFavorites:(id)arg3;
+ (id)_assetAmongAssets:(id)arg1 fromIndexes:(id)arg2 excludingIndexes:(id)arg3;
+ (id)_visibleIndexesAmongAssets:(id)arg1 fromUserFavoriteIndexes:(id)arg2 stackIndex:(unsigned long long)arg3;
+ (void)_updateMembershipForAssets:(id)arg1 autoPicks:(id)arg2 stackAsset:(id)arg3 userFavorites:(id)arg4 deleteNonPicks:(_Bool)arg5 allowDissolve:(_Bool)arg6 inLibrary:(id)arg7;
+ (id)_updatePropertiesForAssets:(id)arg1 autoPicks:(id)arg2 stackAsset:(id)arg3 userFavorites:(id)arg4 deleteNonPicks:(_Bool)arg5 setFirstPick:(_Bool)arg6 allowDissolve:(_Bool)arg7;
+ (void)_handleUpdatesForContextWillSave:(id)arg1;
+ (void)revalidateAvalancheAssets:(id)arg1 inLibrary:(id)arg2 deleteNonPicks:(_Bool)arg3 allowDissolve:(_Bool)arg4;
+ (void)disolveBurstForAssets:(id)arg1;
+ (_Bool)isValidBurstWithAssets:(id)arg1;
+ (unsigned long long)countForAvalancheUUID:(id)arg1 inLibrary:(id)arg2;
+ (id)assetsWithAvalancheUUID:(id)arg1 inManagedObjectContext:(id)arg2;
@property(copy, nonatomic, setter=_setCompletionHandler:) CDUnknownBlockType _completionHandler; // @synthesize _completionHandler=__completionHandler;
@property(retain, nonatomic, setter=_setAnOldPick:) PLManagedAsset *_anOldPick; // @synthesize _anOldPick=__anOldPick;
@property(retain, nonatomic, setter=_setANewPick:) PLManagedAsset *_aNewPick; // @synthesize _aNewPick=__aNewPick;
@property(nonatomic) unsigned long long _stackIndex; // @synthesize _stackIndex=__stackIndex;
@property(nonatomic) unsigned long long _originalStackIndex; // @synthesize _originalStackIndex=__originalStackIndex;
@property(retain, nonatomic) NSMutableIndexSet *_userFavoriteIndexes; // @synthesize _userFavoriteIndexes=__userFavoriteIndexes;
@property(retain, nonatomic) NSIndexSet *_originalUserFavoriteIndexes; // @synthesize _originalUserFavoriteIndexes=__originalUserFavoriteIndexes;
@property(retain, nonatomic) NSMutableIndexSet *_autoPickIndexes; // @synthesize _autoPickIndexes=__autoPickIndexes;
@property(retain, nonatomic) NSIndexSet *_originalAutoPickIndexes; // @synthesize _originalAutoPickIndexes=__originalAutoPickIndexes;
@property(retain, nonatomic) PLPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property(retain, nonatomic) NSOrderedSet *assets; // @synthesize assets=_assets;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(readonly, copy, nonatomic) NSArray *localizedLocationNames;
@property(readonly, nonatomic) _Bool canShowAvalancheStacks;
@property(readonly, nonatomic) _Bool canShowComments;
- (_Bool)canPerformEditOperation:(unsigned long long)arg1;
@property(retain, nonatomic) PLManagedAsset *tertiaryKeyAsset;
@property(retain, nonatomic) PLManagedAsset *secondaryKeyAsset;
@property(retain, nonatomic) PLManagedAsset *keyAsset;
@property(readonly, nonatomic) _Bool isEmpty;
@property(readonly, nonatomic) unsigned long long videosCount;
@property(readonly, nonatomic) unsigned long long photosCount;
@property(readonly, nonatomic) unsigned long long assetsCount;
@property(readonly, nonatomic) unsigned long long approximateCount;
@property(readonly, copy, nonatomic) NSString *localizedTitle;
@property(readonly, retain, nonatomic) NSString *title;
- (id)proposedStackAssetAfterRemovingFavorite:(id)arg1;
- (_Bool)isAutoPick:(id)arg1;
- (_Bool)isUserFavorite:(id)arg1;
- (void)removeUserFavorite:(id)arg1;
- (void)addUserFavorite:(id)arg1;
- (void)_recalculateStackAsset;
- (id)stackAsset;
- (id)userFavorites;
- (id)autoPicks;
- (void)applyTrashedState:(short)arg1;
- (void)assetsDidChange:(id)arg1;
- (void)applyChangesAndDeleteNonPicks:(_Bool)arg1 currentContainer:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithUUID:(id)arg1 photoLibrary:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, retain, nonatomic) NSDate *endDate;
@property(readonly) unsigned long long hash;
@property(readonly, retain, nonatomic) NSDate *startDate;
@property(readonly) Class superclass;

@end

