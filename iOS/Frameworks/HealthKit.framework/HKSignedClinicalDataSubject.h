//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKMedicalDate, NSArray, NSString;

@interface HKSignedClinicalDataSubject : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_fullName;
    HKMedicalDate *_birthDate;
    NSString *_gender;
    NSArray *_emailAddresses;
    NSArray *_phoneNumbers;
    NSArray *_identifiers;
    NSArray *_addresses;
    NSString *_maritalStatus;
    NSString *_race;
    NSString *_ethnicity;
    NSString *_birthSex;
}

+ (_Bool)supportsSecureCoding;
+ (id)subjectWithFullName:(id)arg1 birthDate:(id)arg2 gender:(id)arg3 emailAddresses:(id)arg4 phoneNumbers:(id)arg5 identifiers:(id)arg6 addresses:(id)arg7 maritalStatus:(id)arg8 race:(id)arg9 ethnicity:(id)arg10 birthSex:(id)arg11;
+ (id)subjectWithFullName:(id)arg1 birthDate:(id)arg2 gender:(id)arg3 emailAddresses:(id)arg4 phoneNumbers:(id)arg5;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *birthSex; // @synthesize birthSex=_birthSex;
@property(readonly, copy, nonatomic) NSString *ethnicity; // @synthesize ethnicity=_ethnicity;
@property(readonly, copy, nonatomic) NSString *race; // @synthesize race=_race;
@property(readonly, copy, nonatomic) NSString *maritalStatus; // @synthesize maritalStatus=_maritalStatus;
@property(readonly, copy, nonatomic) NSArray *addresses; // @synthesize addresses=_addresses;
@property(readonly, copy, nonatomic) NSArray *identifiers; // @synthesize identifiers=_identifiers;
@property(readonly, copy, nonatomic) NSArray *phoneNumbers; // @synthesize phoneNumbers=_phoneNumbers;
@property(readonly, copy, nonatomic) NSArray *emailAddresses; // @synthesize emailAddresses=_emailAddresses;
@property(readonly, copy, nonatomic) NSString *gender; // @synthesize gender=_gender;
@property(readonly, copy, nonatomic) HKMedicalDate *birthDate; // @synthesize birthDate=_birthDate;
@property(readonly, copy, nonatomic) NSString *fullName; // @synthesize fullName=_fullName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)debugDescription;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithFullName:(id)arg1 birthDate:(id)arg2 gender:(id)arg3 emailAddresses:(id)arg4 phoneNumbers:(id)arg5 identifiers:(id)arg6 addresses:(id)arg7 maritalStatus:(id)arg8 race:(id)arg9 ethnicity:(id)arg10 birthSex:(id)arg11;

@end
