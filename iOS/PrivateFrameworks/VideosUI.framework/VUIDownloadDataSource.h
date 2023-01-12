//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableDictionary, NSString, SSDownloadManager, VUIMediaEntitiesFetchController, VUIMediaLibrary;
@protocol VUIDownloadDataSourceDelegate;

__attribute__((visibility("hidden")))
@interface VUIDownloadDataSource
{
    _Bool _hasFetchedAllDownloadEntities;
    _Bool _hasFetchedAllDownloadedEntities;
    _Bool _performingRentalExpirationFetch;
    id <VUIDownloadDataSourceDelegate> _downloadDelegate;
    NSArray *_downloadEntities;
    VUIMediaLibrary *_mediaLibrary;
    VUIMediaEntitiesFetchController *_downloadedEntitiesFetchController;
    VUIMediaEntitiesFetchController *_activeDownloadingEntitiesFetchController;
    SSDownloadManager *_sDownloadManager;
    NSArray *_localMediaItems;
    NSArray *_activelyDownloadingAdamIds;
    NSArray *_activelyDownloadingMediaItems;
    NSMutableDictionary *_episodesDownloadingForShow;
    NSMutableDictionary *_groupingByShowIdentifier;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *groupingByShowIdentifier; // @synthesize groupingByShowIdentifier=_groupingByShowIdentifier;
@property(retain, nonatomic) NSMutableDictionary *episodesDownloadingForShow; // @synthesize episodesDownloadingForShow=_episodesDownloadingForShow;
@property(retain, nonatomic) NSArray *activelyDownloadingMediaItems; // @synthesize activelyDownloadingMediaItems=_activelyDownloadingMediaItems;
@property(retain, nonatomic) NSArray *activelyDownloadingAdamIds; // @synthesize activelyDownloadingAdamIds=_activelyDownloadingAdamIds;
@property(retain, nonatomic) NSArray *localMediaItems; // @synthesize localMediaItems=_localMediaItems;
@property(nonatomic) _Bool performingRentalExpirationFetch; // @synthesize performingRentalExpirationFetch=_performingRentalExpirationFetch;
@property(nonatomic) _Bool hasFetchedAllDownloadedEntities; // @synthesize hasFetchedAllDownloadedEntities=_hasFetchedAllDownloadedEntities;
@property(nonatomic) _Bool hasFetchedAllDownloadEntities; // @synthesize hasFetchedAllDownloadEntities=_hasFetchedAllDownloadEntities;
@property(retain, nonatomic) SSDownloadManager *sDownloadManager; // @synthesize sDownloadManager=_sDownloadManager;
@property(retain, nonatomic) VUIMediaEntitiesFetchController *activeDownloadingEntitiesFetchController; // @synthesize activeDownloadingEntitiesFetchController=_activeDownloadingEntitiesFetchController;
@property(retain, nonatomic) VUIMediaEntitiesFetchController *downloadedEntitiesFetchController; // @synthesize downloadedEntitiesFetchController=_downloadedEntitiesFetchController;
@property(readonly, nonatomic) VUIMediaLibrary *mediaLibrary; // @synthesize mediaLibrary=_mediaLibrary;
@property(retain, nonatomic) NSArray *downloadEntities; // @synthesize downloadEntities=_downloadEntities;
@property(nonatomic) __weak id <VUIDownloadDataSourceDelegate> downloadDelegate; // @synthesize downloadDelegate=_downloadDelegate;
- (_Bool)_downloadsDidChange:(id)arg1;
- (id)_coalesceActiveDownloadEntitiesAndDownloadedEntities;
- (_Bool)_doesEpisodeSet:(id)arg1 containMediaEntity:(id)arg2;
- (void)_notifyDelegatesDownloadsFetchCompletedWithChanges:(_Bool)arg1;
- (id)_sortDownloadEntitiesByTitle:(id)arg1;
- (void)_updateDownloadEntity:(id *)arg1 withLatestMediaEntity:(id)arg2;
- (id)_createDownloadEntitiesFromLatestDownloads:(id)arg1;
- (id)_createGroupingByShowIdentifierWithLatestMediaEntityGroups:(id)arg1;
- (id)_upsertDownloadEntities:(id)arg1 withEpisodesDownloadingForShow:(id)arg2;
- (void)_upsertEpisodesDownloadingForShowWithMediaEntity:(id)arg1;
- (id)_getDownloadEntityInDownloadEntities:(id)arg1 containingMediaEntity:(id)arg2;
- (void)_handleDownloadingStateDidChange;
- (void)_getActivelyDownloadingAdamIDsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_rentalsDidExpire;
- (void)_removeNotifcationObservers;
- (void)_addNotificationObservers;
- (void)_loadActiveDownloads;
- (void)_loadDownloadedEntities;
- (void)downloadManagerDownloadsDidChange:(id)arg1;
- (void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2;
- (void)controller:(id)arg1 fetchRequests:(id)arg2 didFailWithError:(id)arg3;
- (void)controller:(id)arg1 fetchRequests:(id)arg2 didCompleteWithResult:(id)arg3;
- (void)loadDownloadData;
- (void)dealloc;
- (void)startFetch;
- (id)initWithMediaLibrary:(id)arg1 fetchRequest:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

