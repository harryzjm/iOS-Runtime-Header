//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MusicKit_SoftLinking_CatalogID, NSDate, NSDictionary, NSNumber, NSString;
@protocol MusicKit_SoftLinking_MPArtworkCatalog;

__attribute__((visibility("hidden")))
@interface MusicKit_SoftLinking_MPMusicPlayerItem : NSObject
{
    _Bool _isExplicit;
    _Bool _isMusicVideo;
    NSString *_identifier;
    NSString *_title;
    NSString *_subtitle;
    id <MusicKit_SoftLinking_MPArtworkCatalog> _artworkCatalog;
    MusicKit_SoftLinking_CatalogID *_underlyingItemCatalogID;
    NSString *_underlyingItemLibraryID;
    NSString *_albumTitle;
    NSString *_artistName;
    NSString *_genreIdentifier;
    NSString *_genreName;
    NSNumber *_duration;
    NSNumber *_trackNumber;
    NSNumber *_discNumber;
    NSDate *_releaseDate;
    NSNumber *_has4K;
    NSNumber *_hasHDR;
    NSDictionary *_playParametersDictionary;
}

+ (id)playerItemForMediaItem:(id)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *playParametersDictionary; // @synthesize playParametersDictionary=_playParametersDictionary;
@property(readonly, copy, nonatomic) NSNumber *hasHDR; // @synthesize hasHDR=_hasHDR;
@property(readonly, copy, nonatomic) NSNumber *has4K; // @synthesize has4K=_has4K;
@property(readonly, nonatomic) _Bool isMusicVideo; // @synthesize isMusicVideo=_isMusicVideo;
@property(readonly, nonatomic) _Bool isExplicit; // @synthesize isExplicit=_isExplicit;
@property(readonly, copy, nonatomic) NSDate *releaseDate; // @synthesize releaseDate=_releaseDate;
@property(readonly, copy, nonatomic) NSNumber *discNumber; // @synthesize discNumber=_discNumber;
@property(readonly, copy, nonatomic) NSNumber *trackNumber; // @synthesize trackNumber=_trackNumber;
@property(readonly, copy, nonatomic) NSNumber *duration; // @synthesize duration=_duration;
@property(readonly, copy, nonatomic) NSString *genreName; // @synthesize genreName=_genreName;
@property(readonly, copy, nonatomic) NSString *genreIdentifier; // @synthesize genreIdentifier=_genreIdentifier;
@property(readonly, copy, nonatomic) NSString *artistName; // @synthesize artistName=_artistName;
@property(readonly, copy, nonatomic) NSString *albumTitle; // @synthesize albumTitle=_albumTitle;
@property(readonly, nonatomic) NSString *underlyingItemLibraryID; // @synthesize underlyingItemLibraryID=_underlyingItemLibraryID;
@property(readonly, nonatomic) MusicKit_SoftLinking_CatalogID *underlyingItemCatalogID; // @synthesize underlyingItemCatalogID=_underlyingItemCatalogID;
@property(readonly, nonatomic) id <MusicKit_SoftLinking_MPArtworkCatalog> artworkCatalog; // @synthesize artworkCatalog=_artworkCatalog;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)description;
- (void)_initializeAdditionalAttributesWithMediaItem:(id)arg1;
- (void)_initializeArtworkCatalogWithMediaItem:(id)arg1;
- (void)_initializeBasicPropertiesWithMediaItem:(id)arg1;
- (id)_initWithMediaItem:(id)arg1;

@end

