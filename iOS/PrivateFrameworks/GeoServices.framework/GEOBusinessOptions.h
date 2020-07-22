//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBUnknownFields;

@interface GEOBusinessOptions : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_attributeKeys;
    int _maxBusinessResults;
    NSMutableArray *_photoOptions;
    _Bool _includeBusinessHours;
    _Bool _includeCenter;
    struct {
        unsigned int maxBusinessResults:1;
        unsigned int includeBusinessHours:1;
        unsigned int includeCenter:1;
    } _has;
}

+ (Class)attributeKeyType;
+ (Class)photoOptionsType;
@property(nonatomic) _Bool includeCenter; // @synthesize includeCenter=_includeCenter;
@property(nonatomic) _Bool includeBusinessHours; // @synthesize includeBusinessHours=_includeBusinessHours;
@property(retain, nonatomic) NSMutableArray *attributeKeys; // @synthesize attributeKeys=_attributeKeys;
@property(retain, nonatomic) NSMutableArray *photoOptions; // @synthesize photoOptions=_photoOptions;
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
@property(nonatomic) _Bool hasIncludeCenter;
@property(nonatomic) _Bool hasMaxBusinessResults;
@property(nonatomic) int maxBusinessResults; // @synthesize maxBusinessResults=_maxBusinessResults;
@property(nonatomic) _Bool hasIncludeBusinessHours;
- (id)attributeKeyAtIndex:(unsigned long long)arg1;
- (unsigned long long)attributeKeysCount;
- (void)addAttributeKey:(id)arg1;
- (void)clearAttributeKeys;
- (id)photoOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)photoOptionsCount;
- (void)addPhotoOptions:(id)arg1;
- (void)clearPhotoOptions;

@end

