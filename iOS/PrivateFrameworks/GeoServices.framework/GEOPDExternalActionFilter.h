//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

@interface GEOPDExternalActionFilter : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    CDStruct_95bda58d _componentTypes;
}

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
- (int)StringAsComponentTypes:(id)arg1;
- (id)componentTypesAsString:(int)arg1;
- (void)setComponentTypes:(int *)arg1 count:(unsigned long long)arg2;
- (int)componentTypeAtIndex:(unsigned long long)arg1;
- (void)addComponentType:(int)arg1;
- (void)clearComponentTypes;
@property(readonly, nonatomic) int *componentTypes;
@property(readonly, nonatomic) unsigned long long componentTypesCount;
- (void)dealloc;

@end
