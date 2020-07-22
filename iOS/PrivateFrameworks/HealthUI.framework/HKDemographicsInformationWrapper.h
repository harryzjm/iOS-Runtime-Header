//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HKBiologicalSexObject, HKBloodTypeObject, HKFitzpatrickSkinTypeObject, HKQuantity, HKWheelchairUseObject, NSArray, NSDateComponents, NSString;

@interface HKDemographicsInformationWrapper : NSObject
{
    NSString *_firstName;
    NSString *_middleName;
    NSString *_lastName;
    NSDateComponents *_dateOfBirthComponents;
    HKBiologicalSexObject *_biologicalSexObject;
    HKQuantity *_heightQuantity;
    HKQuantity *_weightQuantity;
    HKFitzpatrickSkinTypeObject *_fitzpatrickSkinTypeObject;
    HKBloodTypeObject *_bloodTypeObject;
    HKWheelchairUseObject *_wheelchairUseObject;
    NSArray *_postalAddresses;
    NSArray *_emailAddresses;
}

@property(copy, nonatomic) NSArray *emailAddresses; // @synthesize emailAddresses=_emailAddresses;
@property(copy, nonatomic) NSArray *postalAddresses; // @synthesize postalAddresses=_postalAddresses;
@property(copy, nonatomic) HKWheelchairUseObject *wheelchairUseObject; // @synthesize wheelchairUseObject=_wheelchairUseObject;
@property(copy, nonatomic) HKBloodTypeObject *bloodTypeObject; // @synthesize bloodTypeObject=_bloodTypeObject;
@property(copy, nonatomic) HKFitzpatrickSkinTypeObject *fitzpatrickSkinTypeObject; // @synthesize fitzpatrickSkinTypeObject=_fitzpatrickSkinTypeObject;
@property(copy, nonatomic) HKQuantity *weightQuantity; // @synthesize weightQuantity=_weightQuantity;
@property(copy, nonatomic) HKQuantity *heightQuantity; // @synthesize heightQuantity=_heightQuantity;
@property(copy, nonatomic) HKBiologicalSexObject *biologicalSexObject; // @synthesize biologicalSexObject=_biologicalSexObject;
@property(copy, nonatomic) NSDateComponents *dateOfBirthComponents; // @synthesize dateOfBirthComponents=_dateOfBirthComponents;
@property(copy, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(copy, nonatomic) NSString *middleName; // @synthesize middleName=_middleName;
@property(copy, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
- (void).cxx_destruct;

@end

