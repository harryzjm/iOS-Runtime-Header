//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CSSearchableIndex, NSString;

@interface ML3UpdateSpotlightIndexOperation
{
    CSSearchableIndex *_index;
    NSString *_bundleIdentifier;
    unsigned long long _bundle;
    unsigned long long _batchCount;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long batchCount; // @synthesize batchCount=_batchCount;
@property(nonatomic) unsigned long long bundle; // @synthesize bundle=_bundle;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain, nonatomic) CSSearchableIndex *index; // @synthesize index=_index;
- (_Bool)_verifyLibraryConnectionAndAttributesProperties:(id *)arg1;
- (id)_queryForPlaylistsContainingMusicShowsMissedByQuery:(id)arg1 inContainerPIDs:(id)arg2;
- (id)_createSearchableItemsForPlaylistsWithQuery:(id)arg1 error:(id *)arg2;
- (id)_createSearchableItemsForTracksWithQuery:(id)arg1 error:(id *)arg2;
- (id)_createSearchableItemsWithPersistentIDs:(id)arg1 entityType:(long long)arg2 error:(id *)arg3;
- (_Bool)_enumerateSearchableItemsWithPersistentIDs:(id)arg1 entityType:(long long)arg2 error:(id *)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (_Bool)_batchIndexWithTrackPersistentIDsToUpdate:(id)arg1 playlistsPersistentIDsToUpdateSet:(id)arg2 entityStringsToDelete:(id)arg3 currentRevision:(id)arg4 targetRevision:(id)arg5 error:(id *)arg6;
- (_Bool)_indexTracksWithPersistentIDs:(id)arg1 playlistsWithPersistentIDs:(id)arg2 error:(id *)arg3;
- (_Bool)_deleteIndexedItemsWithEntityStringIDs:(id)arg1 error:(id *)arg2;
- (_Bool)_deleteAllIndexedItemsWithError:(id *)arg1;
- (_Bool)_indexItemsFromLibrarySinceRevision:(long long)arg1 targetRevision:(long long)arg2 error:(id *)arg3;
- (_Bool)_updateIndexedItemsWithIdentifiers:(id)arg1 error:(id *)arg2;
- (_Bool)_execute:(id *)arg1;
- (unsigned long long)type;

@end
