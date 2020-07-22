//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPModelFileAsset, MPModelPlaybackPosition, MPModelPodcast, MPModelPodcastAuthor, NSDate, NSDateComponents, NSString, NSURL;

@interface MPModelPodcastEpisode
{
    _Bool _explicitEpisode;
    float _userRating;
    NSString *_title;
    NSDateComponents *_releaseDateComponents;
    double _duration;
    NSString *_descriptionText;
    NSString *_commentText;
    NSDate *_datePlayed;
    NSURL *_feedURL;
    MPModelPodcastAuthor *_author;
    MPModelFileAsset *_localFileAsset;
    MPModelPodcast *_podcast;
    MPModelPlaybackPosition *_playbackPosition;
    CDUnknownBlockType _artworkCatalogBlock;
}

+ (id)__MPModelPropertyPodcastEpisodeArtwork__PROPERTY;
+ (id)__artworkCatalogBlock__KEY;
+ (id)__MPModelRelationshipPodcastEpisodePlaybackPosition__PROPERTY;
+ (id)__playbackPosition__KEY;
+ (id)__MPModelRelationshipPodcastEpisodeAuthor__PROPERTY;
+ (id)__author__KEY;
+ (id)__MPModelRelationshipPodcastEpisodePodcast__PROPERTY;
+ (id)__podcast__KEY;
+ (id)__MPModelRelationshipPodcastEpisodeLocalFileAsset__PROPERTY;
+ (id)__localFileAsset__KEY;
+ (id)__MPModelPropertyPodcastEpisodeFeedURL__PROPERTY;
+ (id)__feedURL__KEY;
+ (id)__MPModelPropertyPodcastEpisodeDatePlayed__PROPERTY;
+ (id)__datePlayed__KEY;
+ (id)__MPModelPropertyPodcastEpisodeCommentText__PROPERTY;
+ (id)__commentText__KEY;
+ (id)__MPModelPropertyPodcastEpisodeDescriptionText__PROPERTY;
+ (id)__descriptionText__KEY;
+ (id)__MPModelPropertyPodcastEpisodeExplicit__PROPERTY;
+ (id)__explicitEpisode__KEY;
+ (id)__MPModelPropertyPodcastEpisodeUserRating__PROPERTY;
+ (id)__userRating__KEY;
+ (id)__MPModelPropertyPodcastEpisodeDuration__PROPERTY;
+ (id)__duration__KEY;
+ (id)__MPModelPropertyPodcastEpisodeReleaseDateComponents__PROPERTY;
+ (id)__releaseDateComponents__KEY;
+ (id)__MPModelPropertyPodcastEpisodeTitle__PROPERTY;
+ (id)__title__KEY;
+ (id)kindWithVariants:(unsigned long long)arg1 options:(unsigned long long)arg2;
+ (id)kindWithVariants:(unsigned long long)arg1;
@property(copy, nonatomic) CDUnknownBlockType artworkCatalogBlock; // @synthesize artworkCatalogBlock=_artworkCatalogBlock;
@property(retain, nonatomic) MPModelPlaybackPosition *playbackPosition; // @synthesize playbackPosition=_playbackPosition;
@property(retain, nonatomic) MPModelPodcast *podcast; // @synthesize podcast=_podcast;
@property(retain, nonatomic) MPModelFileAsset *localFileAsset; // @synthesize localFileAsset=_localFileAsset;
@property(retain, nonatomic) MPModelPodcastAuthor *author; // @synthesize author=_author;
@property(copy, nonatomic) NSURL *feedURL; // @synthesize feedURL=_feedURL;
@property(copy, nonatomic) NSDate *datePlayed; // @synthesize datePlayed=_datePlayed;
@property(copy, nonatomic) NSString *commentText; // @synthesize commentText=_commentText;
@property(copy, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(nonatomic, getter=isExplicitEpisode) _Bool explicitEpisode; // @synthesize explicitEpisode=_explicitEpisode;
@property(nonatomic) float userRating; // @synthesize userRating=_userRating;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSDateComponents *releaseDateComponents; // @synthesize releaseDateComponents=_releaseDateComponents;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)artworkCatalog;
- (id)descriptionWithType:(long long)arg1;

@end

