//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBPower-Protocol.h>

@class NSArray, NSString;

@interface _INPBPower : PBCodable <_INPBPower, NSSecureCoding, NSCopying>
{
    struct _has;
    NSArray *_values;
}

+ (_Bool)supportsSecureCoding;
+ (Class)valueType;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *values; // @synthesize values=_values;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)valueAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long valuesCount;
- (void)addValue:(id)arg1;
- (void)clearValues;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
