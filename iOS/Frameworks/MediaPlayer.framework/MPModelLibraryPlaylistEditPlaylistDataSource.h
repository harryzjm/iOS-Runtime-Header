//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPMediaLibrary, MPModelPlaylist, MPPropertySet, MPSectionedCollection;

__attribute__((visibility("hidden")))
@interface MPModelLibraryPlaylistEditPlaylistDataSource
{
    MPMediaLibrary *_library;
    MPModelPlaylist *_playlist;
    MPSectionedCollection *_initialTrackList;
    MPPropertySet *_playlistPropertySet;
    _Bool _hasPerformedInitialLoad;
}

- (void).cxx_destruct;
- (id)_defaultPlaylistEntryPropertySet;
- (void)loadEntriesWithCompletion:(CDUnknownBlockType)arg1;
- (id)description;
- (id)initWithLibrary:(id)arg1 playlist:(id)arg2 initialTrackList:(id)arg3 playlistEntryProperties:(id)arg4;

@end

