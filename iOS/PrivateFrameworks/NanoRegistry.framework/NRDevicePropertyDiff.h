//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NRPBDevicePropertyDiff;
@protocol NSObject><NSCopying;

@interface NRDevicePropertyDiff
{
    id <NSObject><NSCopying> _value;
}

+ (id)unpackPropertyValue:(id)arg1;
+ (id)packPropertyValue:(id)arg1;
+ (id)enclosedClassTypes;
+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) id <NSObject><NSCopying> value; // @synthesize value=_value;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) NRPBDevicePropertyDiff *protobuf;
- (id)initWithProtobuf:(id)arg1;
- (id)initWithValue:(id)arg1;

@end

