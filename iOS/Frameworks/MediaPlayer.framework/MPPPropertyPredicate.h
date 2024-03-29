//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class MPPMediaPredicateValue, NSString;

__attribute__((visibility("hidden")))
@interface MPPPropertyPredicate : PBCodable
{
    int _comparisonType;
    NSString *_property;
    MPPMediaPredicateValue *_value;
    struct {
        unsigned int comparisonType:1;
    } _has;
}

- (void).cxx_destruct;
@property(nonatomic) int comparisonType; // @synthesize comparisonType=_comparisonType;
@property(retain, nonatomic) MPPMediaPredicateValue *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *property; // @synthesize property=_property;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasComparisonType;
@property(readonly, nonatomic) _Bool hasValue;
@property(readonly, nonatomic) _Bool hasProperty;
- (void)dealloc;

@end

