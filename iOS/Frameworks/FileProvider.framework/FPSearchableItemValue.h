//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface FPSearchableItemValue : PBCodable
{
    double _doubleValue;
    long long _integerValue;
    double _timeIntervalSinceReferenceDateValue;
    NSMutableArray *_arrayOfStringsValues;
    NSData *_nameComponents;
    NSString *_stringValue;
    struct {
        unsigned int doubleValue:1;
        unsigned int integerValue:1;
        unsigned int timeIntervalSinceReferenceDateValue:1;
    } _has;
}

+ (Class)arrayOfStringsValueType;
+ (id)objectFromString:(id)arg1;
+ (id)stringArrayFromObject:(id)arg1;
+ (id)stringFromObject:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *arrayOfStringsValues; // @synthesize arrayOfStringsValues=_arrayOfStringsValues;
@property(retain, nonatomic) NSData *nameComponents; // @synthesize nameComponents=_nameComponents;
@property(nonatomic) double timeIntervalSinceReferenceDateValue; // @synthesize timeIntervalSinceReferenceDateValue=_timeIntervalSinceReferenceDateValue;
@property(nonatomic) long long integerValue; // @synthesize integerValue=_integerValue;
@property(nonatomic) double doubleValue; // @synthesize doubleValue=_doubleValue;
@property(retain, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)arrayOfStringsValueAtIndex:(unsigned long long)arg1;
- (unsigned long long)arrayOfStringsValuesCount;
- (void)addArrayOfStringsValue:(id)arg1;
- (void)clearArrayOfStringsValues;
@property(readonly, nonatomic) _Bool hasNameComponents;
@property(nonatomic) _Bool hasTimeIntervalSinceReferenceDateValue;
@property(nonatomic) _Bool hasIntegerValue;
@property(nonatomic) _Bool hasDoubleValue;
@property(readonly, nonatomic) _Bool hasStringValue;

@end

