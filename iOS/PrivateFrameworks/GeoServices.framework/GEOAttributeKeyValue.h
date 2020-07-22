//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBUnknownFields;

@interface GEOAttributeKeyValue : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSString *_attributeKey;
    NSString *_attributeValue;
}

@property(retain, nonatomic) NSString *attributeValue; // @synthesize attributeValue=_attributeValue;
@property(retain, nonatomic) NSString *attributeKey; // @synthesize attributeKey=_attributeKey;
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

@end
