//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBUnknownFields;

@interface GEOStyleAttributes : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_attributes;
    unsigned long long _customIconId;
    struct {
        unsigned int has_customIconId:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)attributeType;
+ (id)attributesForTransitSystem:(id)arg1;
+ (id)attributesForTransitLine:(id)arg1;
- (void).cxx_destruct;
- (void)clearUnknownFields:(_Bool)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)initWithJSON:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasCustomIconId;
@property(nonatomic) unsigned long long customIconId;
- (id)attributeAtIndex:(unsigned long long)arg1;
- (unsigned long long)attributesCount;
- (void)addAttribute:(id)arg1;
- (void)clearAttributes;
@property(retain, nonatomic) NSMutableArray *attributes;
- (id)initWithGEOFeatureStyleAttributes:(id)arg1;

@end
