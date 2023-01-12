//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKit/HMFObject-Protocol.h>
#import <HomeKit/NSCopying-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class HMAccessCodeUserInformationValue, HMAccessCodeValue, NSArray, NSString;

@interface HMHomeAccessCodeValue : NSObject <HMFObject, NSCopying, NSSecureCoding>
{
    HMAccessCodeValue *_accessCodeValue;
    HMAccessCodeUserInformationValue *_userInformationValue;
}

+ (id)shortDescription;
+ (_Bool)supportsSecureCoding;
+ (id)homeAccessCodeValueWithStringValue:(id)arg1 removedUserInfo:(id)arg2;
+ (id)homeAccessCodeValueWithStringValue:(id)arg1 label:(id)arg2;
+ (id)homeAccessCodeValueWithStringValue:(id)arg1 userUUID:(id)arg2;
- (void).cxx_destruct;
@property(readonly, copy) HMAccessCodeUserInformationValue *userInformationValue; // @synthesize userInformationValue=_userInformationValue;
@property(readonly, copy) HMAccessCodeValue *accessCodeValue; // @synthesize accessCodeValue=_accessCodeValue;
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithAccessCodeValue:(id)arg1 userInformationValue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly) Class superclass;

@end
