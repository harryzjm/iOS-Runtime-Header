//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPStoreModelAlbumBuilder, MPStoreModelArtistBuilder, MPStoreModelMovieBuilder, MPStoreModelPlaylistBuilder, MPStoreModelSongBuilder, MPStoreModelTVEpisodeBuilder, MPStoreModelTVSeasonBuilder, MPStoreModelTVShowBuilder;

@interface MPStoreModelGenericObjectBuilder
{
    MPStoreModelAlbumBuilder *_albumBuilder;
    MPStoreModelArtistBuilder *_artistBuilder;
    MPStoreModelMovieBuilder *_movieBuilder;
    MPStoreModelPlaylistBuilder *_playlistBuilder;
    MPStoreModelSongBuilder *_songBuilder;
    MPStoreModelTVEpisodeBuilder *_tvEpisodeBuilder;
    MPStoreModelTVSeasonBuilder *_tvSeasonBuilder;
    MPStoreModelTVShowBuilder *_tvShowBuilder;
    _Bool _shouldUsePlaylistEntry;
}

@property(nonatomic) _Bool shouldUsePlaylistEntry; // @synthesize shouldUsePlaylistEntry=_shouldUsePlaylistEntry;
- (void).cxx_destruct;
- (id)modelObjectWithStoreItemMetadata:(id)arg1;

@end
