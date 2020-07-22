//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPModelAlbum, MPModelArtist, MPModelCurator, MPModelMediaClip, MPModelMovie, MPModelPlaylist, MPModelRadioStation, MPModelSocialPerson, MPModelSong, MPModelTVEpisode, MPModelTVSeason, MPModelTVShow, MPModelTVShowCreator, NSString;

@interface MPModelStoreBrowseContentItem
{
    unsigned long long _itemType;
    NSString *_artistUploadedContentType;
    MPModelAlbum *_album;
    MPModelArtist *_artist;
    MPModelCurator *_curator;
    MPModelMediaClip *_mediaClip;
    MPModelMovie *_movie;
    MPModelPlaylist *_playlist;
    MPModelRadioStation *_radioStation;
    MPModelSocialPerson *_socialPerson;
    MPModelTVEpisode *_episode;
    MPModelTVSeason *_season;
    MPModelTVShow *_show;
    MPModelTVShowCreator *_showCreator;
    MPModelSong *_song;
    long long _detailedItemType;
}

+ (id)requiredStoreLibraryPersonalizationProperties;
+ (id)__MPModelStoreBrowseContentItemRelationshipTVShowCreator__PROPERTY;
+ (id)__showCreator__KEY;
+ (id)__MPModelStoreBrowseContentItemRelationshipTVShow__PROPERTY;
+ (id)__show__KEY;
+ (id)__MPModelStoreBrowseContentItemRelationshipTVSeason__PROPERTY;
+ (id)__season__KEY;
+ (id)__MPModelStoreBrowseContentItemRelationshipTVEpisode__PROPERTY;
+ (id)__episode__KEY;
+ (id)__MPModelStoreBrowseContentItemRelationshipSong__PROPERTY;
+ (id)__song__KEY;
+ (id)__MPModelStoreBrowseContentItemRelationshipSocialPerson__PROPERTY;
+ (id)__socialPerson__KEY;
+ (id)__MPModelStoreBrowseContentItemRelationshipRadioStation__PROPERTY;
+ (id)__radioStation__KEY;
+ (id)__MPModelStoreBrowseContentItemRelationshipPlaylist__PROPERTY;
+ (id)__playlist__KEY;
+ (id)__MPModelStoreBrowseContentItemRelationshipMovie__PROPERTY;
+ (id)__movie__KEY;
+ (id)__MPModelStoreBrowseContentItemRelationshipMediaClip__PROPERTY;
+ (id)__mediaClip__KEY;
+ (id)__MPModelStoreBrowseContentItemRelationshipCurator__PROPERTY;
+ (id)__curator__KEY;
+ (id)__MPModelStoreBrowseContentItemRelationshipArtist__PROPERTY;
+ (id)__artist__KEY;
+ (id)__MPModelStoreBrowseContentItemRelationshipAlbum__PROPERTY;
+ (id)__album__KEY;
+ (id)__MPModelStoreBrowseContentItemPropertyArtistUploadedContentType__PROPERTY;
+ (id)__artistUploadedContentType__KEY;
+ (id)__MPModelStoreBrowseContentItemPropertyDetailedItemType__PROPERTY;
+ (id)__detailedItemType__KEY;
+ (id)__MPModelStoreBrowseContentItemPropertyItemType__PROPERTY;
+ (id)__itemType__KEY;
@property(nonatomic) long long detailedItemType; // @synthesize detailedItemType=_detailedItemType;
@property(retain, nonatomic) MPModelSong *song; // @synthesize song=_song;
@property(retain, nonatomic) MPModelTVShowCreator *showCreator; // @synthesize showCreator=_showCreator;
@property(retain, nonatomic) MPModelTVShow *show; // @synthesize show=_show;
@property(retain, nonatomic) MPModelTVSeason *season; // @synthesize season=_season;
@property(retain, nonatomic) MPModelTVEpisode *episode; // @synthesize episode=_episode;
@property(retain, nonatomic) MPModelSocialPerson *socialPerson; // @synthesize socialPerson=_socialPerson;
@property(retain, nonatomic) MPModelRadioStation *radioStation; // @synthesize radioStation=_radioStation;
@property(retain, nonatomic) MPModelPlaylist *playlist; // @synthesize playlist=_playlist;
@property(retain, nonatomic) MPModelMovie *movie; // @synthesize movie=_movie;
@property(retain, nonatomic) MPModelMediaClip *mediaClip; // @synthesize mediaClip=_mediaClip;
@property(retain, nonatomic) MPModelCurator *curator; // @synthesize curator=_curator;
@property(retain, nonatomic) MPModelArtist *artist; // @synthesize artist=_artist;
@property(retain, nonatomic) MPModelAlbum *album; // @synthesize album=_album;
@property(copy, nonatomic) NSString *artistUploadedContentType; // @synthesize artistUploadedContentType=_artistUploadedContentType;
@property(nonatomic) unsigned long long itemType; // @synthesize itemType=_itemType;
- (void).cxx_destruct;
- (id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)arg1;
- (id)relativeModelObjectForStoreLibraryPersonalization;
- (id)personalizationScopedPropertiesForProperties:(id)arg1;
- (id)innerObject;
- (id)descriptionWithType:(long long)arg1;

@end
