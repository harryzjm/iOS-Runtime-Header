//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKit/NSCopying-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class NSUUID;
@protocol NSCopying><NSSecureCoding;

@interface HMAccessorySettingConstraint : NSObject <NSSecureCoding, NSCopying>
{
    NSUUID *_identifier;
    long long _type;
    id <NSCopying><NSSecureCoding> _value;
}

+ (_Bool)supportsSecureCoding;
+ (id)supportedValueClasses;
+ (id)shortDescription;
@property(readonly, copy) id <NSCopying><NSSecureCoding> value; // @synthesize value=_value;
@property(readonly) long long type; // @synthesize type=_type;
@property(readonly) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)debugDescription;
- (id)descriptionWithPointer:(_Bool)arg1;
- (id)shortDescription;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithType:(long long)arg1 value:(id)arg2;
- (id)init;

@end

