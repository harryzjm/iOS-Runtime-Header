//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKit/NSCopying-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class HMAccessoryCollectionSetting, HMFUnfairLock, NSData, NSUUID;
@protocol NSObject><NSCopying><NSSecureCoding;

@interface HMAccessoryCollectionSettingItem : NSObject <NSCopying, NSSecureCoding>
{
    HMFUnfairLock *_lock;
    id <NSObject><NSCopying><NSSecureCoding> _value;
    NSData *_serializedValue;
    NSUUID *_identifier;
    HMAccessoryCollectionSetting *_setting;
}

+ (_Bool)supportsSecureCoding;
+ (id)shortDescription;
@property __weak HMAccessoryCollectionSetting *setting; // @synthesize setting=_setting;
@property(readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) id <NSObject><NSCopying><NSSecureCoding> value; // @synthesize value=_value;
@property(readonly) NSData *serializedValue; // @synthesize serializedValue=_serializedValue;
- (id)description;
- (id)debugDescription;
- (id)descriptionWithPointer:(_Bool)arg1;
- (id)shortDescription;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithValue:(id)arg1;
- (id)init;

@end

