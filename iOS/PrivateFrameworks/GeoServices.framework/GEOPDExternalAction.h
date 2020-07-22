//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBUnknownFields;

@interface GEOPDExternalAction : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    int _componentType;
    NSMutableArray *_externalActionDetails;
    struct {
        unsigned int componentType:1;
    } _has;
}

+ (Class)externalActionDetailType;
@property(retain, nonatomic) NSMutableArray *externalActionDetails; // @synthesize externalActionDetails=_externalActionDetails;
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
- (id)externalActionDetailAtIndex:(unsigned long long)arg1;
- (unsigned long long)externalActionDetailsCount;
- (void)addExternalActionDetail:(id)arg1;
- (void)clearExternalActionDetails;
- (int)StringAsComponentType:(id)arg1;
- (id)componentTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasComponentType;
@property(nonatomic) int componentType; // @synthesize componentType=_componentType;

@end

