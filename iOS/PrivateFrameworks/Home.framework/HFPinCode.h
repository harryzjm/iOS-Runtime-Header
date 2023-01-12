//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Home/NSCopying-Protocol.h>

@class HMAccessCodeUserInformation, NSMutableSet, NSSet, NSString;

@interface HFPinCode : NSObject <NSCopying>
{
    NSMutableSet *_accessoryAccessCodes;
    NSMutableSet *_accessories;
    HMAccessCodeUserInformation *_userLabel;
    NSString *_pinCodeValue;
}

+ (id)na_identity;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *pinCodeValue; // @synthesize pinCodeValue=_pinCodeValue;
@property(retain, nonatomic) HMAccessCodeUserInformation *userLabel; // @synthesize userLabel=_userLabel;
@property(readonly, nonatomic) NSSet *accessories;
- (void)removeAccessories:(id)arg1;
- (void)addAccessories:(id)arg1;
@property(readonly, nonatomic) _Bool hasRestrictions;
- (void)removeAccessoryAccessCode:(id)arg1;
- (void)addAccessoryAccessCode:(id)arg1;
@property(readonly, nonatomic) NSSet *accessoryAccessCodes;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithNewPinCodeValue:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLabel:(id)arg1 accessCodeValue:(id)arg2 accessoryAccessCodes:(id)arg3;
- (id)initWithAccessoryAccessCode:(id)arg1;
- (id)initWithHomeAccessCode:(id)arg1;

@end
