//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Intents/INJSONSerializable-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class NSArray, NSDateComponents, NSString;

@interface INMessageLinkMetadata : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>
{
    NSString *_siteName;
    NSString *_summary;
    NSString *_title;
    NSString *_itemType;
    NSString *_originalURL;
    NSArray *_imageURLs;
    NSArray *_iconURLs;
    NSString *_creator;
    long long _linkMediaType;
    NSString *_iTunesStoreIdentifier;
    NSString *_iTunesStoreFrontIdentifier;
    NSString *_songTitle;
    NSString *_songArtist;
    NSString *_songAlbum;
    NSString *_albumName;
    NSString *_albumArtist;
    NSString *_musicVideoName;
    NSString *_musicVideoArtist;
    NSString *_artistName;
    NSString *_artistGenre;
    NSString *_playlistName;
    NSString *_playlistCurator;
    NSString *_radioName;
    NSString *_radioCurator;
    NSString *_softwareName;
    NSString *_softwareGenre;
    NSString *_softwarePlatform;
    NSString *_bookName;
    NSString *_bookAuthor;
    NSString *_audioBookName;
    NSString *_audioBookAuthor;
    NSString *_audioBookNarrator;
    NSString *_podcastName;
    NSString *_podcastArtist;
    NSString *_podcastEpisodeName;
    NSString *_podcastEpisodePodcastName;
    NSString *_podcastEpisodeArtist;
    NSDateComponents *_podcastEpisodeReleaseDate;
    NSString *_tvEpisodeEpisodeName;
    NSString *_tvEpisodeSeasonName;
    NSString *_tvEpisodeGenre;
    NSString *_tvSeasonName;
    NSString *_tvSeasonGenre;
    NSString *_movieName;
    NSString *_movieGenre;
    NSString *_tvShowName;
    NSString *_movieBundleName;
    NSString *_movieBundleGenre;
    NSString *_appleTvTitle;
    NSString *_appleTvSubtitle;
}

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *appleTvSubtitle; // @synthesize appleTvSubtitle=_appleTvSubtitle;
@property(copy, nonatomic) NSString *appleTvTitle; // @synthesize appleTvTitle=_appleTvTitle;
@property(copy, nonatomic) NSString *movieBundleGenre; // @synthesize movieBundleGenre=_movieBundleGenre;
@property(copy, nonatomic) NSString *movieBundleName; // @synthesize movieBundleName=_movieBundleName;
@property(copy, nonatomic) NSString *tvShowName; // @synthesize tvShowName=_tvShowName;
@property(copy, nonatomic) NSString *movieGenre; // @synthesize movieGenre=_movieGenre;
@property(copy, nonatomic) NSString *movieName; // @synthesize movieName=_movieName;
@property(copy, nonatomic) NSString *tvSeasonGenre; // @synthesize tvSeasonGenre=_tvSeasonGenre;
@property(copy, nonatomic) NSString *tvSeasonName; // @synthesize tvSeasonName=_tvSeasonName;
@property(copy, nonatomic) NSString *tvEpisodeGenre; // @synthesize tvEpisodeGenre=_tvEpisodeGenre;
@property(copy, nonatomic) NSString *tvEpisodeSeasonName; // @synthesize tvEpisodeSeasonName=_tvEpisodeSeasonName;
@property(copy, nonatomic) NSString *tvEpisodeEpisodeName; // @synthesize tvEpisodeEpisodeName=_tvEpisodeEpisodeName;
@property(copy, nonatomic) NSDateComponents *podcastEpisodeReleaseDate; // @synthesize podcastEpisodeReleaseDate=_podcastEpisodeReleaseDate;
@property(copy, nonatomic) NSString *podcastEpisodeArtist; // @synthesize podcastEpisodeArtist=_podcastEpisodeArtist;
@property(copy, nonatomic) NSString *podcastEpisodePodcastName; // @synthesize podcastEpisodePodcastName=_podcastEpisodePodcastName;
@property(copy, nonatomic) NSString *podcastEpisodeName; // @synthesize podcastEpisodeName=_podcastEpisodeName;
@property(copy, nonatomic) NSString *podcastArtist; // @synthesize podcastArtist=_podcastArtist;
@property(copy, nonatomic) NSString *podcastName; // @synthesize podcastName=_podcastName;
@property(copy, nonatomic) NSString *audioBookNarrator; // @synthesize audioBookNarrator=_audioBookNarrator;
@property(copy, nonatomic) NSString *audioBookAuthor; // @synthesize audioBookAuthor=_audioBookAuthor;
@property(copy, nonatomic) NSString *audioBookName; // @synthesize audioBookName=_audioBookName;
@property(copy, nonatomic) NSString *bookAuthor; // @synthesize bookAuthor=_bookAuthor;
@property(copy, nonatomic) NSString *bookName; // @synthesize bookName=_bookName;
@property(copy, nonatomic) NSString *softwarePlatform; // @synthesize softwarePlatform=_softwarePlatform;
@property(copy, nonatomic) NSString *softwareGenre; // @synthesize softwareGenre=_softwareGenre;
@property(copy, nonatomic) NSString *softwareName; // @synthesize softwareName=_softwareName;
@property(copy, nonatomic) NSString *radioCurator; // @synthesize radioCurator=_radioCurator;
@property(copy, nonatomic) NSString *radioName; // @synthesize radioName=_radioName;
@property(copy, nonatomic) NSString *playlistCurator; // @synthesize playlistCurator=_playlistCurator;
@property(copy, nonatomic) NSString *playlistName; // @synthesize playlistName=_playlistName;
@property(copy, nonatomic) NSString *artistGenre; // @synthesize artistGenre=_artistGenre;
@property(copy, nonatomic) NSString *artistName; // @synthesize artistName=_artistName;
@property(copy, nonatomic) NSString *musicVideoArtist; // @synthesize musicVideoArtist=_musicVideoArtist;
@property(copy, nonatomic) NSString *musicVideoName; // @synthesize musicVideoName=_musicVideoName;
@property(copy, nonatomic) NSString *albumArtist; // @synthesize albumArtist=_albumArtist;
@property(copy, nonatomic) NSString *albumName; // @synthesize albumName=_albumName;
@property(copy, nonatomic) NSString *songAlbum; // @synthesize songAlbum=_songAlbum;
@property(copy, nonatomic) NSString *songArtist; // @synthesize songArtist=_songArtist;
@property(copy, nonatomic) NSString *songTitle; // @synthesize songTitle=_songTitle;
@property(copy, nonatomic) NSString *iTunesStoreFrontIdentifier; // @synthesize iTunesStoreFrontIdentifier=_iTunesStoreFrontIdentifier;
@property(copy, nonatomic) NSString *iTunesStoreIdentifier; // @synthesize iTunesStoreIdentifier=_iTunesStoreIdentifier;
@property(nonatomic) long long linkMediaType; // @synthesize linkMediaType=_linkMediaType;
@property(copy, nonatomic) NSString *creator; // @synthesize creator=_creator;
@property(copy, nonatomic) NSArray *iconURLs; // @synthesize iconURLs=_iconURLs;
@property(copy, nonatomic) NSArray *imageURLs; // @synthesize imageURLs=_imageURLs;
@property(copy, nonatomic) NSString *originalURL; // @synthesize originalURL=_originalURL;
@property(copy, nonatomic) NSString *itemType; // @synthesize itemType=_itemType;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *summary; // @synthesize summary=_summary;
@property(copy, nonatomic) NSString *siteName; // @synthesize siteName=_siteName;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)arg1;
@property(readonly, copy) NSString *description;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithSiteName:(id)arg1 summary:(id)arg2 title:(id)arg3 itemType:(id)arg4 originalURL:(id)arg5 imageURLs:(id)arg6 iconURLs:(id)arg7 creator:(id)arg8 linkMediaType:(long long)arg9 iTunesStoreIdentifier:(id)arg10 iTunesStoreFrontIdentifier:(id)arg11 songTitle:(id)arg12 songArtist:(id)arg13 songAlbum:(id)arg14 albumName:(id)arg15 albumArtist:(id)arg16 musicVideoName:(id)arg17 musicVideoArtist:(id)arg18 artistName:(id)arg19 artistGenre:(id)arg20 playlistName:(id)arg21 playlistCurator:(id)arg22 radioName:(id)arg23 radioCurator:(id)arg24 softwareName:(id)arg25 softwareGenre:(id)arg26 softwarePlatform:(id)arg27 bookName:(id)arg28 bookAuthor:(id)arg29 audioBookName:(id)arg30 audioBookAuthor:(id)arg31 audioBookNarrator:(id)arg32 podcastName:(id)arg33 podcastArtist:(id)arg34 podcastEpisodeName:(id)arg35 podcastEpisodePodcastName:(id)arg36 podcastEpisodeArtist:(id)arg37 podcastEpisodeReleaseDate:(id)arg38 tvEpisodeEpisodeName:(id)arg39 tvEpisodeSeasonName:(id)arg40 tvEpisodeGenre:(id)arg41 tvSeasonName:(id)arg42 tvSeasonGenre:(id)arg43 movieName:(id)arg44 movieGenre:(id)arg45;
- (id)initWithSiteName:(id)arg1 summary:(id)arg2 title:(id)arg3 itemType:(id)arg4 originalURL:(id)arg5 imageURLs:(id)arg6 iconURLs:(id)arg7 creator:(id)arg8 linkMediaType:(long long)arg9 iTunesStoreIdentifier:(id)arg10 iTunesStoreFrontIdentifier:(id)arg11 songTitle:(id)arg12 songArtist:(id)arg13 songAlbum:(id)arg14 albumName:(id)arg15 albumArtist:(id)arg16 musicVideoName:(id)arg17 musicVideoArtist:(id)arg18 artistName:(id)arg19 artistGenre:(id)arg20 playlistName:(id)arg21 playlistCurator:(id)arg22 radioName:(id)arg23 radioCurator:(id)arg24 softwareName:(id)arg25 softwareGenre:(id)arg26 softwarePlatform:(id)arg27 bookName:(id)arg28 bookAuthor:(id)arg29 audioBookName:(id)arg30 audioBookAuthor:(id)arg31 audioBookNarrator:(id)arg32 podcastName:(id)arg33 podcastArtist:(id)arg34 podcastEpisodeName:(id)arg35 podcastEpisodePodcastName:(id)arg36 podcastEpisodeArtist:(id)arg37 podcastEpisodeReleaseDate:(id)arg38 tvEpisodeEpisodeName:(id)arg39 tvEpisodeSeasonName:(id)arg40 tvEpisodeGenre:(id)arg41 tvSeasonName:(id)arg42 tvSeasonGenre:(id)arg43 movieName:(id)arg44 movieGenre:(id)arg45 tvShowName:(id)arg46 movieBundleName:(id)arg47 movieBundleGenre:(id)arg48 appleTvTitle:(id)arg49 appleTvSubtitle:(id)arg50;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
