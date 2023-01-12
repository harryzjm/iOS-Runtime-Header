//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoSystemSettings/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface NSSUsageRespMsg : PBCodable <NSCopying>
{
    unsigned long long _audioCoursesUsage;
    unsigned long long _audioPodcastsUsage;
    unsigned long long _audiobooksUsage;
    unsigned long long _availableStorageInBytes;
    unsigned long long _cameralRollUsage;
    unsigned long long _capacityInBytes;
    unsigned long long _homeVideosUsage;
    unsigned long long _movieRentalsUsage;
    unsigned long long _moviesUsage;
    unsigned long long _musicVideosUsage;
    unsigned long long _photoLibraryUsage;
    unsigned long long _photoStreamUsage;
    unsigned long long _songsUsage;
    unsigned long long _tvShowsUsage;
    unsigned long long _usedStorageInBytes;
    unsigned long long _videoCoursesUsage;
    unsigned long long _videoPodcastsUsage;
    NSMutableArray *_appBundleUsages;
    NSMutableArray *_appUsages;
    NSMutableArray *_bundleUsages;
    NSMutableArray *_categories;
    NSString *_musicBundleIdentifier;
    NSString *_photosBundleIdentifier;
    NSString *_podcastsBundleIdentifier;
    float _standbyTimeInSeconds;
    float _usageTimeInSeconds;
    _Bool _partiallyCharged;
    _Bool _trusted;
    struct {
        unsigned int audioCoursesUsage:1;
        unsigned int audioPodcastsUsage:1;
        unsigned int audiobooksUsage:1;
        unsigned int cameralRollUsage:1;
        unsigned int capacityInBytes:1;
        unsigned int homeVideosUsage:1;
        unsigned int movieRentalsUsage:1;
        unsigned int moviesUsage:1;
        unsigned int musicVideosUsage:1;
        unsigned int photoLibraryUsage:1;
        unsigned int photoStreamUsage:1;
        unsigned int songsUsage:1;
        unsigned int tvShowsUsage:1;
        unsigned int videoCoursesUsage:1;
        unsigned int videoPodcastsUsage:1;
    } _has;
}

+ (Class)categoriesType;
+ (Class)appBundleUsageType;
+ (Class)bundleUsageType;
+ (Class)appUsagesType;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long capacityInBytes; // @synthesize capacityInBytes=_capacityInBytes;
@property(retain, nonatomic) NSMutableArray *categories; // @synthesize categories=_categories;
@property(retain, nonatomic) NSMutableArray *appBundleUsages; // @synthesize appBundleUsages=_appBundleUsages;
@property(retain, nonatomic) NSString *podcastsBundleIdentifier; // @synthesize podcastsBundleIdentifier=_podcastsBundleIdentifier;
@property(retain, nonatomic) NSString *photosBundleIdentifier; // @synthesize photosBundleIdentifier=_photosBundleIdentifier;
@property(retain, nonatomic) NSString *musicBundleIdentifier; // @synthesize musicBundleIdentifier=_musicBundleIdentifier;
@property(retain, nonatomic) NSMutableArray *bundleUsages; // @synthesize bundleUsages=_bundleUsages;
@property(nonatomic) unsigned long long photoStreamUsage; // @synthesize photoStreamUsage=_photoStreamUsage;
@property(nonatomic) unsigned long long photoLibraryUsage; // @synthesize photoLibraryUsage=_photoLibraryUsage;
@property(nonatomic) unsigned long long cameralRollUsage; // @synthesize cameralRollUsage=_cameralRollUsage;
@property(nonatomic) unsigned long long homeVideosUsage; // @synthesize homeVideosUsage=_homeVideosUsage;
@property(nonatomic) unsigned long long audiobooksUsage; // @synthesize audiobooksUsage=_audiobooksUsage;
@property(nonatomic) unsigned long long songsUsage; // @synthesize songsUsage=_songsUsage;
@property(nonatomic) unsigned long long videoPodcastsUsage; // @synthesize videoPodcastsUsage=_videoPodcastsUsage;
@property(nonatomic) unsigned long long audioPodcastsUsage; // @synthesize audioPodcastsUsage=_audioPodcastsUsage;
@property(nonatomic) unsigned long long musicVideosUsage; // @synthesize musicVideosUsage=_musicVideosUsage;
@property(nonatomic) unsigned long long videoCoursesUsage; // @synthesize videoCoursesUsage=_videoCoursesUsage;
@property(nonatomic) unsigned long long audioCoursesUsage; // @synthesize audioCoursesUsage=_audioCoursesUsage;
@property(nonatomic) unsigned long long tvShowsUsage; // @synthesize tvShowsUsage=_tvShowsUsage;
@property(nonatomic) unsigned long long movieRentalsUsage; // @synthesize movieRentalsUsage=_movieRentalsUsage;
@property(nonatomic) unsigned long long moviesUsage; // @synthesize moviesUsage=_moviesUsage;
@property(retain, nonatomic) NSMutableArray *appUsages; // @synthesize appUsages=_appUsages;
@property(nonatomic) _Bool partiallyCharged; // @synthesize partiallyCharged=_partiallyCharged;
@property(nonatomic) _Bool trusted; // @synthesize trusted=_trusted;
@property(nonatomic) float standbyTimeInSeconds; // @synthesize standbyTimeInSeconds=_standbyTimeInSeconds;
@property(nonatomic) float usageTimeInSeconds; // @synthesize usageTimeInSeconds=_usageTimeInSeconds;
@property(nonatomic) unsigned long long availableStorageInBytes; // @synthesize availableStorageInBytes=_availableStorageInBytes;
@property(nonatomic) unsigned long long usedStorageInBytes; // @synthesize usedStorageInBytes=_usedStorageInBytes;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasCapacityInBytes;
- (id)categoriesAtIndex:(unsigned long long)arg1;
- (unsigned long long)categoriesCount;
- (void)addCategories:(id)arg1;
- (void)clearCategories;
- (id)appBundleUsageAtIndex:(unsigned long long)arg1;
- (unsigned long long)appBundleUsagesCount;
- (void)addAppBundleUsage:(id)arg1;
- (void)clearAppBundleUsages;
@property(readonly, nonatomic) _Bool hasPodcastsBundleIdentifier;
@property(readonly, nonatomic) _Bool hasPhotosBundleIdentifier;
@property(readonly, nonatomic) _Bool hasMusicBundleIdentifier;
- (id)bundleUsageAtIndex:(unsigned long long)arg1;
- (unsigned long long)bundleUsagesCount;
- (void)addBundleUsage:(id)arg1;
- (void)clearBundleUsages;
@property(nonatomic) _Bool hasPhotoStreamUsage;
@property(nonatomic) _Bool hasPhotoLibraryUsage;
@property(nonatomic) _Bool hasCameralRollUsage;
@property(nonatomic) _Bool hasHomeVideosUsage;
@property(nonatomic) _Bool hasAudiobooksUsage;
@property(nonatomic) _Bool hasSongsUsage;
@property(nonatomic) _Bool hasVideoPodcastsUsage;
@property(nonatomic) _Bool hasAudioPodcastsUsage;
@property(nonatomic) _Bool hasMusicVideosUsage;
@property(nonatomic) _Bool hasVideoCoursesUsage;
@property(nonatomic) _Bool hasAudioCoursesUsage;
@property(nonatomic) _Bool hasTvShowsUsage;
@property(nonatomic) _Bool hasMovieRentalsUsage;
@property(nonatomic) _Bool hasMoviesUsage;
- (id)appUsagesAtIndex:(unsigned long long)arg1;
- (unsigned long long)appUsagesCount;
- (void)addAppUsages:(id)arg1;
- (void)clearAppUsages;

@end
