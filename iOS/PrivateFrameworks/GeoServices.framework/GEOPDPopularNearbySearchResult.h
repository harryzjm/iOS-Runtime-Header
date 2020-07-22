//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOMapRegion, NSString, PBUnknownFields;

@interface GEOPDPopularNearbySearchResult : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEOMapRegion *_displayMapRegion;
    NSString *_sectionHeader;
    _Bool _isChainResultSet;
    CDStruct_5984ff81 _has;
}

@property(nonatomic) _Bool isChainResultSet; // @synthesize isChainResultSet=_isChainResultSet;
@property(retain, nonatomic) NSString *sectionHeader; // @synthesize sectionHeader=_sectionHeader;
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
@property(nonatomic) _Bool hasIsChainResultSet;
@property(readonly, nonatomic) _Bool hasSectionHeader;
@property(readonly, nonatomic) _Bool hasDisplayMapRegion;

@end
