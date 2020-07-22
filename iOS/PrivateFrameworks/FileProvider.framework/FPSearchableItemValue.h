//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <FileProvider/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface FPSearchableItemValue : PBCodable <NSCopying>
{
    double _doubleValue;
    long long _integerValue;
    double _timeIntervalSinceReferenceDateValue;
    NSString *_stringValue;
    struct {
        unsigned int doubleValue:1;
        unsigned int integerValue:1;
        unsigned int timeIntervalSinceReferenceDateValue:1;
    } _has;
}

+ (id)objectFromString:(id)arg1;
+ (id)stringFromObject:(id)arg1;
@property(nonatomic) double timeIntervalSinceReferenceDateValue; // @synthesize timeIntervalSinceReferenceDateValue=_timeIntervalSinceReferenceDateValue;
@property(nonatomic) long long integerValue; // @synthesize integerValue=_integerValue;
@property(nonatomic) double doubleValue; // @synthesize doubleValue=_doubleValue;
@property(retain, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasTimeIntervalSinceReferenceDateValue;
@property(nonatomic) _Bool hasIntegerValue;
@property(nonatomic) _Bool hasDoubleValue;
@property(readonly, nonatomic) _Bool hasStringValue;

@end
