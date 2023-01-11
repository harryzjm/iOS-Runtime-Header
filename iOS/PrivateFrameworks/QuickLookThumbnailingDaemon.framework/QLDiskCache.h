//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableDictionary, NSString, QLCacheIndexDatabase, QLCacheMMAPBlobDatabase;
@protocol QLDiskCacheDelegate;

@interface QLDiskCache : NSObject
{
    NSString *_path;
    QLCacheIndexDatabase *_indexDatabase;
    QLCacheMMAPBlobDatabase *_blobDatabase;
    NSString *_metaDataFilePath;
    NSString *_dirtyFilePath;
    NSString *_exclusivePath;
    NSString *_resetFilePath;
    NSString *_resetReasonPath;
    _Bool _dirtyForDelegate;
    NSLock *_databaseLock;
    _Bool _opened;
    NSMutableDictionary *_metaData;
    _Bool _metaDataDirty;
    long long _writingCount;
    int _exclusiveFD;
    _Bool _hasDirtyLock;
    id <QLDiskCacheDelegate> _delegate;
}

+ (void)setupCacheAtLocationIfNecessary:(id)arg1;
+ (id)defaultLocation;
+ (void)setCacheLocationForTesting:(id)arg1;
- (void).cxx_destruct;
@property(retain) NSString *metaDataFilePath; // @synthesize metaDataFilePath=_metaDataFilePath;
@property(retain) NSMutableDictionary *metaData; // @synthesize metaData=_metaData;
@property _Bool metaDataDirty; // @synthesize metaDataDirty=_metaDataDirty;
@property(readonly) long long writingCount; // @synthesize writingCount=_writingCount;
@property(readonly, nonatomic) _Bool hasDirtyLock; // @synthesize hasDirtyLock=_hasDirtyLock;
@property __weak id <QLDiskCacheDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) NSString *path; // @synthesize path=_path;
@property(readonly) _Bool isOpened; // @synthesize isOpened=_opened;
- (id)itemsAfterFilteringOutItemsWithMissingThumbnails:(id)arg1;
- (void)noteRemoteThumbnailPresentForItems:(id)arg1;
- (void)noteRemoteThumbnailMissingForItems:(id)arg1;
- (_Bool)setLastHitDateOfAllCachedThumbnailsToDate:(id)arg1;
- (_Bool)removeCachedThumbnailsFromUninstalledFileProvidersWithRemainingFileProviderIdentifiers:(id)arg1;
- (id)lastResetWithDate:(id *)arg1;
- (id)lastCrapWithDate:(id *)arg1;
@property(readonly) unsigned long long thumbnailCount;
@property(readonly) unsigned long long fileEntryCount;
@property(readonly) unsigned long long maxThumbnailLifeTime;
- (_Bool)discardReservedBuffer:(id)arg1;
- (_Bool)validateReservedBuffer:(id)arg1;
- (id)reserveBufferForData:(id)arg1;
- (id)reserveBufferWithLength:(unsigned long long)arg1;
- (unsigned long long)sizeSumOfThumbnailsOlderThanDate:(id)arg1;
- (void)setMetaData:(id)arg1 forKey:(id)arg2;
- (id)metaDataForKey:(id)arg1;
- (id)blobDatabase;
- (id)indexDatabase;
- (id)checkConsistency;
- (void)reset;
- (void)close;
- (_Bool)open;
- (id)_checkConsistency;
- (void)_resetWithReason:(id)arg1;
- (void)_close;
- (void)_closeWhatIsOpen;
- (_Bool)_open;
@property(readonly) unsigned long long maxSize;
@property(readonly) unsigned long long size;
@property(readonly) unsigned long long reserveBufferSize;
@property(readonly) unsigned long long reserveBufferCount;
@property(readonly) float fragmentation;
- (void)updateHitCount:(id)arg1 forFileIdentifier:(id)arg2;
- (void)removeFilesWithFileInfo:(id)arg1;
- (void)checkpoint;
- (unsigned long long)cleanupDeletedFiles;
- (unsigned long long)cleanup;
- (unsigned long long)freeDiskSpaceForNewThumbnails;
- (unsigned long long)removeThumbnailsOlderThanDate:(id)arg1;
- (unsigned long long)_deleteBlobArrayFromDatabase:(id)arg1;
- (void)discardThumbnailDataBatchForReset:(id)arg1;
- (void)writeThumbnailDataBatch:(id)arg1;
- (_Bool)doWriting:(CDUnknownBlockType)arg1;
- (_Bool)doReading:(CDUnknownBlockType)arg1;
- (void)do:(CDUnknownBlockType)arg1;
- (void)_cleanupForceResetAtNextLaunch;
- (void)forceResetAtNextLaunch;
- (void)_removeDirtyLock;
- (void)_createDirtyLockInformDelegate:(_Bool)arg1;
- (void)_cleanupDirtyLock;
- (void)_discardThumbnailDataForReset:(id)arg1;
- (_Bool)_setThumbnailData:(id)arg1;
- (id)enumeratorForAllThumbnailsWithFileIdentifier:(id)arg1;
- (id)enumeratorForAllFilesUbiquitousFiles:(_Bool)arg1 withExtraInfo:(_Bool)arg2;
- (id)enumeratorForThumbnailRequests:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithPathLocation:(id)arg1 cacheSize:(long long)arg2 cacheThread:(id)arg3;

@end
