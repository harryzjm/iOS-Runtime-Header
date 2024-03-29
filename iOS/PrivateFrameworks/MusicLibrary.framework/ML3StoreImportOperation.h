//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "ML3ImportOperation.h"

@class ML3StoreItemAlbumArtistData, ML3StoreItemPlaylistData, ML3StoreItemTrackData;

__attribute__((visibility("hidden")))
@interface ML3StoreImportOperation : ML3ImportOperation
{
    ML3StoreItemTrackData *_trackData;
    ML3StoreItemPlaylistData *_playlistData;
    ML3StoreItemAlbumArtistData *_albumArtistData;
}

- (void).cxx_destruct;
- (_Bool)_importAlbumArtistsUsingImportSession:(void *)arg1;
- (_Bool)_importPlaylistsUsingImportSession:(void *)arg1;
- (_Bool)_importTracksUsingImportSession:(void *)arg1;
- (_Bool)_performImportWithTransaction:(id)arg1;
- (void)main;
- (unsigned long long)importSource;

@end

