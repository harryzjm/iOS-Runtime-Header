//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray;

@interface GEOLPRPlateMatchCondition : PBCodable <NSCopying>
{
    NSMutableArray *_patterns;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)patternsType;
- (void).cxx_destruct;
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
- (id)patternsAtIndex:(unsigned long long)arg1;
- (unsigned long long)patternsCount;
- (void)addPatterns:(id)arg1;
- (void)clearPatterns;
@property(retain, nonatomic) NSMutableArray *patterns;

@end
