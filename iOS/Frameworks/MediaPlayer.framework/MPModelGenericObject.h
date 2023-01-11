//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPModelAlbum, MPModelArtist, MPModelMediaClip, MPModelMovie, MPModelPlaylist, MPModelPlaylistEntry, MPModelPodcast, MPModelPodcastEpisode, MPModelRadioStation, MPModelSong, MPModelTVEpisode, MPModelTVSeason, MPModelTVShow;

@interface MPModelGenericObject
{
}

+ (id)__radioStation_KEY;
+ (id)__podcastEpisode_KEY;
+ (id)__podcast_KEY;
+ (id)__mediaClip_KEY;
+ (id)__movie_KEY;
+ (id)__show_KEY;
+ (id)__season_KEY;
+ (id)__tvEpisode_KEY;
+ (id)__playlistEntry_KEY;
+ (id)__playlist_KEY;
+ (id)__artist_KEY;
+ (id)__album_KEY;
+ (id)__song_KEY;
+ (id)genericObjectWithModelObject:(id)arg1;
+ (id)kindWithRelationshipKinds:(id)arg1;
+ (id)requiredStoreLibraryPersonalizationProperties;
- (long long)type;
- (id)flattenedGenericObject;
- (id)anyObject;
- (id)identifiers;
- (id)humanDescription;
- (id)mediaItemPropertyValues;
- (id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)arg1;
- (id)relativeModelObjectForStoreLibraryPersonalization;
- (id)personalizationScopedPropertiesForProperties:(id)arg1;
- (_Bool)storeItemMetadataRequestNeedsPersonalization;
- (id)storeItemMetadataRequestItemIdentifier;

// Remaining properties
@property(retain, nonatomic) MPModelAlbum *album; // @dynamic album;
@property(retain, nonatomic) MPModelArtist *artist; // @dynamic artist;
@property(retain, nonatomic) MPModelMediaClip *mediaClip; // @dynamic mediaClip;
@property(retain, nonatomic) MPModelMovie *movie; // @dynamic movie;
@property(retain, nonatomic) MPModelPlaylist *playlist; // @dynamic playlist;
@property(retain, nonatomic) MPModelPlaylistEntry *playlistEntry; // @dynamic playlistEntry;
@property(retain, nonatomic) MPModelPodcast *podcast; // @dynamic podcast;
@property(retain, nonatomic) MPModelPodcastEpisode *podcastEpisode; // @dynamic podcastEpisode;
@property(retain, nonatomic) MPModelRadioStation *radioStation; // @dynamic radioStation;
@property(retain, nonatomic) MPModelTVSeason *season; // @dynamic season;
@property(retain, nonatomic) MPModelTVShow *show; // @dynamic show;
@property(retain, nonatomic) MPModelSong *song; // @dynamic song;
@property(retain, nonatomic) MPModelTVEpisode *tvEpisode; // @dynamic tvEpisode;

@end

