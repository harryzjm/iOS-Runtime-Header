//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface RTPlatform : NSObject
{
}

+ (CDStruct_2ec95fd7)operatingSystemVersionFromString:(id)arg1;
+ (_Bool)version:(CDStruct_2ec95fd7)arg1 atLeastVersion:(CDStruct_2ec95fd7)arg2;
+ (_Bool)operatingSystemAtLeastVersion:(CDStruct_2ec95fd7)arg1;
+ (_Bool)operatingSystemNoGreaterThanVersion:(CDStruct_2ec95fd7)arg1;
+ (_Bool)version:(CDStruct_2ec95fd7)arg1 noGreaterThanVersion:(CDStruct_2ec95fd7)arg2;
+ (_Bool)version:(CDStruct_2ec95fd7)arg1 equalToVersion:(CDStruct_2ec95fd7)arg2;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)currentPlatform;
- (_Bool)isTinkerPaired;
- (_Bool)usesTSCForClustering;
- (_Bool)supportsScenarioTriggers;
- (_Bool)paired;
- (_Bool)supportsPairedDevice;
- (_Bool)iPhoneDevice;
- (_Bool)macOSPlatform;
- (_Bool)watchPlatform;
- (_Bool)iPhonePlatform;
- (_Bool)simulatorPlatform;
- (unsigned long long)deviceMemorySize;
- (id)deviceClass;
- (_Bool)supportsMultiUser;
- (_Bool)supportsCoreRoutineCapability;
- (_Bool)lowEndHardware;
- (id)systemModel;
- (id)serialNumber;
- (id)systemVersion;
- (id)buildVersion;
- (_Bool)internalInstall;
- (id)productType;
- (id)userAssignedDeviceName;

@end
