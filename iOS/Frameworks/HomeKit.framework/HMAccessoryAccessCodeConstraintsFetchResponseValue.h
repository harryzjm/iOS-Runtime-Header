//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKit/HMFObject-Protocol.h>
#import <HomeKit/NSCopying-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class HMAccessCodeConstraints, NSArray, NSError, NSString, NSUUID;

@interface HMAccessoryAccessCodeConstraintsFetchResponseValue : NSObject <HMFObject, NSCopying, NSSecureCoding>
{
    NSUUID *_accessoryUUID;
    HMAccessCodeConstraints *_constraints;
    NSError *_error;
}

+ (id)shortDescription;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain) NSError *error; // @synthesize error=_error;
@property(readonly, copy) HMAccessCodeConstraints *constraints; // @synthesize constraints=_constraints;
@property(readonly, copy) NSUUID *accessoryUUID; // @synthesize accessoryUUID=_accessoryUUID;
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithAccessory:(id)arg1 constraints:(id)arg2 error:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly) Class superclass;

@end
