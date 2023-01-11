//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, NSString, _INPBDateTime;

@protocol _INPBMessageLinkMetadata <NSObject>
@property(readonly, nonatomic) _Bool hasTvSeasonName;
@property(copy, nonatomic) NSString *tvSeasonName;
@property(readonly, nonatomic) _Bool hasTvSeasonGenre;
@property(copy, nonatomic) NSString *tvSeasonGenre;
@property(readonly, nonatomic) _Bool hasTvEpisodeSeasonName;
@property(copy, nonatomic) NSString *tvEpisodeSeasonName;
@property(readonly, nonatomic) _Bool hasTvEpisodeGenre;
@property(copy, nonatomic) NSString *tvEpisodeGenre;
@property(readonly, nonatomic) _Bool hasTvEpisodeEpisodeName;
@property(copy, nonatomic) NSString *tvEpisodeEpisodeName;
@property(readonly, nonatomic) _Bool hasTitle;
@property(copy, nonatomic) NSString *title;
@property(readonly, nonatomic) _Bool hasSummary;
@property(copy, nonatomic) NSString *summary;
@property(readonly, nonatomic) _Bool hasSongTitle;
@property(copy, nonatomic) NSString *songTitle;
@property(readonly, nonatomic) _Bool hasSongArtist;
@property(copy, nonatomic) NSString *songArtist;
@property(readonly, nonatomic) _Bool hasSongAlbum;
@property(copy, nonatomic) NSString *songAlbum;
@property(readonly, nonatomic) _Bool hasSoftwarePlatform;
@property(copy, nonatomic) NSString *softwarePlatform;
@property(readonly, nonatomic) _Bool hasSoftwareName;
@property(copy, nonatomic) NSString *softwareName;
@property(readonly, nonatomic) _Bool hasSoftwareGenre;
@property(copy, nonatomic) NSString *softwareGenre;
@property(readonly, nonatomic) _Bool hasSiteName;
@property(copy, nonatomic) NSString *siteName;
@property(readonly, nonatomic) _Bool hasRadioName;
@property(copy, nonatomic) NSString *radioName;
@property(readonly, nonatomic) _Bool hasRadioCurator;
@property(copy, nonatomic) NSString *radioCurator;
@property(readonly, nonatomic) _Bool hasPodcastName;
@property(copy, nonatomic) NSString *podcastName;
@property(readonly, nonatomic) _Bool hasPodcastEpisodeReleaseDate;
@property(retain, nonatomic) _INPBDateTime *podcastEpisodeReleaseDate;
@property(readonly, nonatomic) _Bool hasPodcastEpisodePodcastName;
@property(copy, nonatomic) NSString *podcastEpisodePodcastName;
@property(readonly, nonatomic) _Bool hasPodcastEpisodeName;
@property(copy, nonatomic) NSString *podcastEpisodeName;
@property(readonly, nonatomic) _Bool hasPodcastEpisodeArtist;
@property(copy, nonatomic) NSString *podcastEpisodeArtist;
@property(readonly, nonatomic) _Bool hasPodcastArtist;
@property(copy, nonatomic) NSString *podcastArtist;
@property(readonly, nonatomic) _Bool hasPlaylistName;
@property(copy, nonatomic) NSString *playlistName;
@property(readonly, nonatomic) _Bool hasPlaylistCurator;
@property(copy, nonatomic) NSString *playlistCurator;
@property(readonly, nonatomic) _Bool hasOriginalURL;
@property(copy, nonatomic) NSString *originalURL;
@property(readonly, nonatomic) _Bool hasMusicVideoName;
@property(copy, nonatomic) NSString *musicVideoName;
@property(readonly, nonatomic) _Bool hasMusicVideoArtist;
@property(copy, nonatomic) NSString *musicVideoArtist;
@property(readonly, nonatomic) _Bool hasMovieName;
@property(copy, nonatomic) NSString *movieName;
@property(readonly, nonatomic) _Bool hasMovieGenre;
@property(copy, nonatomic) NSString *movieGenre;
@property(nonatomic) _Bool hasLinkMediaType;
@property(nonatomic) int linkMediaType;
@property(readonly, nonatomic) _Bool hasItemType;
@property(copy, nonatomic) NSString *itemType;
@property(readonly, nonatomic) unsigned long long imageURLsCount;
@property(copy, nonatomic) NSArray *imageURLs;
@property(readonly, nonatomic) unsigned long long iconURLsCount;
@property(copy, nonatomic) NSArray *iconURLs;
@property(readonly, nonatomic) _Bool hasITunesStoreIdentifier;
@property(copy, nonatomic) NSString *iTunesStoreIdentifier;
@property(readonly, nonatomic) _Bool hasITunesStoreFrontIdentifier;
@property(copy, nonatomic) NSString *iTunesStoreFrontIdentifier;
@property(readonly, nonatomic) _Bool hasCreator;
@property(copy, nonatomic) NSString *creator;
@property(readonly, nonatomic) _Bool hasBookName;
@property(copy, nonatomic) NSString *bookName;
@property(readonly, nonatomic) _Bool hasBookAuthor;
@property(copy, nonatomic) NSString *bookAuthor;
@property(readonly, nonatomic) _Bool hasAudioBookNarrator;
@property(copy, nonatomic) NSString *audioBookNarrator;
@property(readonly, nonatomic) _Bool hasAudioBookName;
@property(copy, nonatomic) NSString *audioBookName;
@property(readonly, nonatomic) _Bool hasAudioBookAuthor;
@property(copy, nonatomic) NSString *audioBookAuthor;
@property(readonly, nonatomic) _Bool hasArtistName;
@property(copy, nonatomic) NSString *artistName;
@property(readonly, nonatomic) _Bool hasArtistGenre;
@property(copy, nonatomic) NSString *artistGenre;
@property(readonly, nonatomic) _Bool hasAlbumName;
@property(copy, nonatomic) NSString *albumName;
@property(readonly, nonatomic) _Bool hasAlbumArtist;
@property(copy, nonatomic) NSString *albumArtist;
- (int)StringAsLinkMediaType:(NSString *)arg1;
- (NSString *)linkMediaTypeAsString:(int)arg1;
- (NSString *)imageURLAtIndex:(unsigned long long)arg1;
- (void)addImageURL:(NSString *)arg1;
- (void)clearImageURLs;
- (NSString *)iconURLAtIndex:(unsigned long long)arg1;
- (void)addIconURL:(NSString *)arg1;
- (void)clearIconURLs;
@end
