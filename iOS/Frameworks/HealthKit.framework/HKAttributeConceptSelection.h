//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol NSCopying><NSSecureCoding><NSObject;

@interface HKAttributeConceptSelection
{
    long long _type;
    unsigned long long _operatorType;
    id <NSCopying><NSSecureCoding><NSObject> _value;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) id <NSCopying><NSSecureCoding><NSObject> value; // @synthesize value=_value;
@property(readonly, nonatomic) unsigned long long operatorType; // @synthesize operatorType=_operatorType;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithAttribute:(long long)arg1 operatorType:(unsigned long long)arg2 value:(id)arg3;
- (id)init;

@end
