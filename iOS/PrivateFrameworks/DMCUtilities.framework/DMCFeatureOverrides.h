//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface DMCFeatureOverrides : NSObject
{
}

+ (id)productNameWithDefaultValue:(id)arg1;
+ (id)modelNameWithDefaultValue:(id)arg1;
+ (id)depDeviceSerialNumberWithValue:(id)arg1;
+ (id)depRemoveEnrollmentURLStringWithURLString:(id)arg1;
+ (id)depConfigurationEnrollmentURLStringWithURLString:(id)arg1;
+ (id)depProvisionalEnrollmentURLStringWithURLString:(id)arg1;
+ (id)depResponseContentTypeFromContentType:(id)arg1;
+ (id)depResponseDataFromData:(id)arg1;
+ (id)activationRecordFlagsWithFlags:(id)arg1;
+ (_Bool)useHTTPLogging;
+ (_Bool)shouldSimulateMDMCommunication;
+ (_Bool)useNonEphemeralWebAuthSession;
+ (id)serviceDiscoveryFallbackURLWithValue:(id)arg1;
+ (id)serviceDiscoveryDomainWithValue:(id)arg1;
+ (id)serviceDiscoveryDefaultPortWithValue:(id)arg1;
+ (_Bool)ignoreEnrollmentMode;
+ (double)enrollmentStepTimeoutThresholdWithDefaultValue:(double)arg1;
+ (id)enrollmentProfileWithDefaultValue:(id)arg1;
+ (_Bool)allowAnyMAIDToSignIn;
+ (double)accountSignInTimeoutThresholdWithDefaultValue:(double)arg1;
+ (_Bool)sentinelExistsAtPath:(id)arg1;
+ (_Bool)boolForDefaultsKey:(id)arg1;
+ (id)numberForDefaultsKey:(id)arg1;
+ (id)stringForDefaultsKey:(id)arg1;

@end
