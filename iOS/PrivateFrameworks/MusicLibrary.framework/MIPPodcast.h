//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MusicLibrary/NSCopying-Protocol.h>

@class MIPArtist, MIPSeries, NSString;

@interface MIPPodcast : PBCodable <NSCopying>
{
    MIPArtist *_artist;
    NSString *_externalGuid;
    NSString *_feedUrl;
    MIPSeries *_series;
}

@property(retain, nonatomic) NSString *feedUrl; // @synthesize feedUrl=_feedUrl;
@property(retain, nonatomic) NSString *externalGuid; // @synthesize externalGuid=_externalGuid;
@property(retain, nonatomic) MIPSeries *series; // @synthesize series=_series;
@property(retain, nonatomic) MIPArtist *artist; // @synthesize artist=_artist;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasFeedUrl;
@property(readonly, nonatomic) _Bool hasExternalGuid;
@property(readonly, nonatomic) _Bool hasSeries;
@property(readonly, nonatomic) _Bool hasArtist;

@end

