//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface HMPBMetadata : PBCodable
{
    NSMutableArray *_hapCategories;
    NSMutableArray *_hapCharacteristics;
    NSMutableArray *_hapServices;
    int _version;
    struct {
        unsigned int version:1;
    } _has;
}

+ (Class)hapCategoriesType;
+ (Class)hapServicesType;
+ (Class)hapCharacteristicsType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *hapCategories; // @synthesize hapCategories=_hapCategories;
@property(retain, nonatomic) NSMutableArray *hapServices; // @synthesize hapServices=_hapServices;
@property(retain, nonatomic) NSMutableArray *hapCharacteristics; // @synthesize hapCharacteristics=_hapCharacteristics;
@property(nonatomic) int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)hapCategoriesAtIndex:(unsigned long long)arg1;
- (unsigned long long)hapCategoriesCount;
- (void)addHapCategories:(id)arg1;
- (void)clearHapCategories;
- (id)hapServicesAtIndex:(unsigned long long)arg1;
- (unsigned long long)hapServicesCount;
- (void)addHapServices:(id)arg1;
- (void)clearHapServices;
- (id)hapCharacteristicsAtIndex:(unsigned long long)arg1;
- (unsigned long long)hapCharacteristicsCount;
- (void)addHapCharacteristics:(id)arg1;
- (void)clearHapCharacteristics;
@property(nonatomic) _Bool hasVersion;

@end

