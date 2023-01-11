//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOABConfigValue, NSString, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOABConfigKeyValuePair : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSString *_abConfigKey;
    GEOABConfigValue *_abConfigValue;
    int _abConfigValueType;
    struct {
        unsigned int abConfigValueType:1;
    } _has;
}

@property(retain, nonatomic) GEOABConfigValue *abConfigValue; // @synthesize abConfigValue=_abConfigValue;
@property(retain, nonatomic) NSString *abConfigKey; // @synthesize abConfigKey=_abConfigKey;
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
@property(readonly, nonatomic) _Bool hasAbConfigValue;
- (int)StringAsAbConfigValueType:(id)arg1;
- (id)abConfigValueTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasAbConfigValueType;
@property(nonatomic) int abConfigValueType; // @synthesize abConfigValueType=_abConfigValueType;
@property(readonly, nonatomic) _Bool hasAbConfigKey;

@end

