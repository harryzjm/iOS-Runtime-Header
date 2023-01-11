//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOMapRegion, NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDLocationDirectedSearchResult : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_disambiguationLabels;
    GEOMapRegion *_displayMapRegion;
}

+ (Class)disambiguationLabelType;
@property(retain, nonatomic) NSMutableArray *disambiguationLabels; // @synthesize disambiguationLabels=_disambiguationLabels;
@property(retain, nonatomic) GEOMapRegion *displayMapRegion; // @synthesize displayMapRegion=_displayMapRegion;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)disambiguationLabelAtIndex:(unsigned long long)arg1;
- (unsigned long long)disambiguationLabelsCount;
- (void)addDisambiguationLabel:(id)arg1;
- (void)clearDisambiguationLabels;
@property(readonly, nonatomic) _Bool hasDisplayMapRegion;

@end

