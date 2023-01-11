//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKAccountOwnerType, HKMedicalDate, NSString;

@interface HKAccountOwner <NSSecureCoding, NSCopying>
{
    NSString *_name;
    HKMedicalDate *_birthDate;
}

+ (_Bool)_isConcreteObjectClass;
+ (_Bool)supportsEquivalence;
+ (_Bool)supportsSecureCoding;
+ (id)_newAccountOwnerWithType:(id)arg1 note:(id)arg2 enteredInError:(_Bool)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 country:(id)arg11 state:(unsigned long long)arg12 name:(id)arg13 birthDate:(id)arg14 config:(CDUnknownBlockType)arg15;
+ (id)accountOwnerWithType:(id)arg1 note:(id)arg2 enteredInError:(_Bool)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 country:(id)arg11 state:(unsigned long long)arg12 name:(id)arg13 birthDate:(id)arg14;
+ (id)accountOwnerWithType:(id)arg1 note:(id)arg2 enteredInError:(_Bool)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 country:(id)arg10 state:(unsigned long long)arg11 name:(id)arg12 birthDate:(id)arg13;
- (void).cxx_destruct;
@property(readonly, copy) HKAccountOwnerType *accountOwnerType;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration)arg1;
- (void)_setBirthDate:(id)arg1;
@property(readonly, copy) HKMedicalDate *birthDate;
- (void)_setName:(id)arg1;
@property(readonly, copy) NSString *name;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEquivalent:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)init;

@end
