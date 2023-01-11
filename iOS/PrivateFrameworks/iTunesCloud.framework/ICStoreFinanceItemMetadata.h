//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iTunesCloud/NSCopying-Protocol.h>

@class NSDate, NSDictionary, NSNumber, NSString;

@interface ICStoreFinanceItemMetadata : NSObject <NSCopying>
{
    NSDictionary *_metadataDictionary;
    NSNumber *_playlistID;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSNumber *playlistID; // @synthesize playlistID=_playlistID;
@property(readonly, copy, nonatomic) NSDictionary *metadataDictionary; // @synthesize metadataDictionary=_metadataDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSNumber *vendorID;
@property(readonly, copy, nonatomic) NSNumber *storefrontID;
@property(readonly, copy, nonatomic) NSDate *releaseDate;
@property(readonly, copy, nonatomic) NSNumber *rank;
@property(readonly, copy, nonatomic) NSString *copyright;
@property(readonly, copy, nonatomic) NSNumber *isCompilation;
@property(readonly, copy, nonatomic) NSString *xid;
@property(readonly, copy, nonatomic) NSNumber *versionRestrictions;
@property(readonly, copy, nonatomic) NSNumber *sampleRate;
@property(readonly, copy, nonatomic) NSString *kind;
@property(readonly, copy, nonatomic) NSNumber *isMasteredForITunes;
@property(readonly, copy, nonatomic) NSNumber *isGapless;
@property(readonly, copy, nonatomic) NSString *fileExtension;
@property(readonly, copy, nonatomic) NSNumber *drmVersionNumber;
@property(readonly, copy, nonatomic) NSDate *dateAdded;
@property(readonly, copy, nonatomic) NSString *comments;
@property(readonly, copy, nonatomic) NSNumber *bitrate;
@property(readonly, copy, nonatomic) NSNumber *year;
@property(readonly, copy, nonatomic) NSNumber *isExplicit;
@property(readonly, copy, nonatomic) NSNumber *duration;
@property(readonly, copy, nonatomic) NSNumber *trackNumber;
@property(readonly, copy, nonatomic) NSNumber *trackCount;
@property(readonly, copy, nonatomic) NSNumber *discNumber;
@property(readonly, copy, nonatomic) NSNumber *discCount;
- (id)albumID;
@property(readonly, copy, nonatomic) NSNumber *genreID;
@property(readonly, copy, nonatomic) NSString *genre;
@property(readonly, copy, nonatomic) NSString *composerSortName;
@property(readonly, copy, nonatomic) NSString *composerName;
@property(readonly, copy, nonatomic) NSString *playlistArtistName;
@property(readonly, copy, nonatomic) NSString *albumSortName;
@property(readonly, copy, nonatomic) NSString *playlistName;
@property(readonly, copy, nonatomic) NSNumber *artistID;
@property(readonly, copy, nonatomic) NSString *artistSortName;
@property(readonly, copy, nonatomic) NSString *artistName;
@property(readonly, copy, nonatomic) NSString *itemSortName;
@property(readonly, copy, nonatomic) NSString *itemName;
@property(readonly, copy, nonatomic) NSNumber *itemCloudID;
@property(readonly, copy, nonatomic) NSNumber *itemAdamID;
- (id)initWithMetadataDictionary:(id)arg1;

@end
