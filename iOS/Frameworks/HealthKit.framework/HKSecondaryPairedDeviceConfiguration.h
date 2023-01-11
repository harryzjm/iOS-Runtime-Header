//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/NSSecureCoding-Protocol.h>

@class NSDateComponents, NSNumber, NSString, NSUUID;

@interface HKSecondaryPairedDeviceConfiguration : NSObject <NSSecureCoding>
{
    NSUUID *_nanoRegistryDeviceUUID;
    unsigned long long _setupType;
    NSDateComponents *_dateOfBirth;
    NSString *_firstName;
    NSString *_lastName;
    NSNumber *_dsid;
    NSString *_guardianFirstName;
    NSString *_guardianLastName;
    NSNumber *_guardianDSID;
    NSString *_hashedDSID;
    NSString *_guardianHashedDSID;
}

+ (_Bool)supportsSecureCoding;
+ (id)secondaryPairedDeviceConfigurationWithNanoRegistryDeviceUUID:(id)arg1 setupType:(unsigned long long)arg2 firstName:(id)arg3 lastName:(id)arg4;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *guardianHashedDSID; // @synthesize guardianHashedDSID=_guardianHashedDSID;
@property(copy, nonatomic) NSString *hashedDSID; // @synthesize hashedDSID=_hashedDSID;
@property(copy, nonatomic) NSNumber *guardianDSID; // @synthesize guardianDSID=_guardianDSID;
@property(copy, nonatomic) NSString *guardianLastName; // @synthesize guardianLastName=_guardianLastName;
@property(copy, nonatomic) NSString *guardianFirstName; // @synthesize guardianFirstName=_guardianFirstName;
@property(copy, nonatomic) NSNumber *dsid; // @synthesize dsid=_dsid;
@property(copy, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(copy, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(copy, nonatomic) NSDateComponents *dateOfBirth; // @synthesize dateOfBirth=_dateOfBirth;
@property(nonatomic) unsigned long long setupType; // @synthesize setupType=_setupType;
@property(copy, nonatomic) NSUUID *nanoRegistryDeviceUUID; // @synthesize nanoRegistryDeviceUUID=_nanoRegistryDeviceUUID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)_initWithNanoRegistryDeviceUUID:(id)arg1 setupType:(unsigned long long)arg2 firstName:(id)arg3 lastName:(id)arg4;

@end
