//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <ProactiveML/NSCopying-Protocol.h>

@interface AWDProactiveModelFittingSparseFloatVector : PBCodable <NSCopying>
{
    CDStruct_62a50c50 _indices;
    CDStruct_fae3dc92 _values;
    unsigned long long _length;
    struct {
        unsigned int length:1;
    } _has;
}

+ (id)sparseFloatVectorFromSparseVector:(id)arg1;
+ (id)sparseFloatVectorFromModelWeights:(id)arg1;
@property(nonatomic) unsigned long long length; // @synthesize length=_length;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasLength;
- (void)setValues:(float *)arg1 count:(unsigned long long)arg2;
- (float)valuesAtIndex:(unsigned long long)arg1;
- (void)addValues:(float)arg1;
- (void)clearValues;
@property(readonly, nonatomic) float *values;
@property(readonly, nonatomic) unsigned long long valuesCount;
- (void)setIndices:(unsigned long long *)arg1 count:(unsigned long long)arg2;
- (unsigned long long)indicesAtIndex:(unsigned long long)arg1;
- (void)addIndices:(unsigned long long)arg1;
- (void)clearIndices;
@property(readonly, nonatomic) unsigned long long *indices;
@property(readonly, nonatomic) unsigned long long indicesCount;
- (void)dealloc;
- (float)valueAtIndex:(unsigned long long)arg1;

@end

