//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>

@class NSMutableArray, PBUnknownFields;

@interface _INPBLocation : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_values;
}

+ (Class)valueType;
+ (id)options;
@property(retain, nonatomic) NSMutableArray *values; // @synthesize values=_values;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)valueAtIndex:(unsigned long long)arg1;
- (unsigned long long)valuesCount;
- (void)addValue:(id)arg1;
- (void)clearValues;

@end

