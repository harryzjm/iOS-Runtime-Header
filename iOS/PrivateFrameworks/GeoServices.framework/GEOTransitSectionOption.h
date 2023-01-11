//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

@interface GEOTransitSectionOption : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    CDStruct_9f2792e4 _sections;
    unsigned int _defaultSectionIndex;
    struct {
        unsigned int has_defaultSectionIndex:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
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
@property(nonatomic) _Bool hasDefaultSectionIndex;
@property(nonatomic) unsigned int defaultSectionIndex;
- (void)setSections:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (unsigned int)sectionAtIndex:(unsigned long long)arg1;
- (void)addSection:(unsigned int)arg1;
- (void)clearSections;
@property(readonly, nonatomic) unsigned int *sections;
@property(readonly, nonatomic) unsigned long long sectionsCount;
- (void)dealloc;

@end
