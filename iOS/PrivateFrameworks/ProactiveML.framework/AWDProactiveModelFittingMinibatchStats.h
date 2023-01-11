//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <ProactiveML/NSCopying-Protocol.h>

@class NSMutableArray;

@interface AWDProactiveModelFittingMinibatchStats : PBCodable <NSCopying>
{
    unsigned long long _batchSize;
    NSMutableArray *_perLabelSupports;
    float _support;
    struct {
        unsigned int batchSize:1;
        unsigned int support:1;
    } _has;
}

+ (Class)perLabelSupportType;
+ (id)statsWithSize:(unsigned long long)arg1 support:(float)arg2;
+ (id)statsWithPerLabelCounts:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *perLabelSupports; // @synthesize perLabelSupports=_perLabelSupports;
@property(nonatomic) unsigned long long batchSize; // @synthesize batchSize=_batchSize;
@property(nonatomic) float support; // @synthesize support=_support;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)perLabelSupportAtIndex:(unsigned long long)arg1;
- (unsigned long long)perLabelSupportsCount;
- (void)addPerLabelSupport:(id)arg1;
- (void)clearPerLabelSupports;
@property(nonatomic) _Bool hasBatchSize;
@property(nonatomic) _Bool hasSupport;
- (id)toDictionary;
- (id)combineWithStats:(id)arg1;
- (float)supportForLabel:(unsigned long long)arg1;

@end
