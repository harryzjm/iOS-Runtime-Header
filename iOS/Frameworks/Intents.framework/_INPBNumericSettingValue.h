//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBNumericSettingValue-Protocol.h>

@class NSString;

@interface _INPBNumericSettingValue : PBCodable <_INPBNumericSettingValue, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int unit:1;
        unsigned int value:1;
    } _has;
    int _unit;
    double _value;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) double value; // @synthesize value=_value;
@property(nonatomic) int unit; // @synthesize unit=_unit;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(nonatomic) _Bool hasValue;
- (int)StringAsUnit:(id)arg1;
- (id)unitAsString:(int)arg1;
@property(nonatomic) _Bool hasUnit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
