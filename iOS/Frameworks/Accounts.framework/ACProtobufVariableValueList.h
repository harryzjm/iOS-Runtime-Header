//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSArray, NSMutableArray, NSSet;

__attribute__((visibility("hidden")))
@interface ACProtobufVariableValueList : PBCodable
{
    NSMutableArray *_values;
}

+ (Class)valueType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *values; // @synthesize values=_values;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)valueAtIndex:(unsigned long long)arg1;
- (unsigned long long)valuesCount;
- (void)addValue:(id)arg1;
- (void)clearValues;
@property(copy, nonatomic) NSSet *set;
@property(copy, nonatomic) NSArray *array;
- (id)_convertArray:(id)arg1;
- (id)initWithSet:(id)arg1;
- (id)initWithArray:(id)arg1;

@end

