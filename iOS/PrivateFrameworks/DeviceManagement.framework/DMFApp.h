//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DeviceManagement/NSCopying-Protocol.h>
#import <DeviceManagement/NSSecureCoding-Protocol.h>

@class DMFAppManagementInformation, NSDictionary, NSNumber, NSString;

@interface DMFApp : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _isPlaceholder;
    _Bool _isRestricted;
    _Bool _isBlocked;
    _Bool _isUserBasedVPP;
    _Bool _isDeviceBasedVPP;
    _Bool _isLicenseExpired;
    _Bool _isLicenseRevoked;
    _Bool _isUPP;
    _Bool _isValidated;
    _Bool _isAppStoreVendable;
    _Bool _isBetaApp;
    _Bool _isAdHocCodeSigned;
    _Bool _hasUpdateAvailable;
    unsigned long long _type;
    NSString *_displayName;
    NSString *_bundleIdentifier;
    NSNumber *_storeItemIdentifier;
    NSNumber *_externalVersionIdentifier;
    NSString *_version;
    NSString *_shortVersion;
    NSNumber *_staticUsage;
    NSNumber *_dynamicUsage;
    NSNumber *_onDemandResourcesUsage;
    NSNumber *_sharedUsage;
    unsigned long long _installationState;
    NSString *_VPNUUIDString;
    NSDictionary *_configuration;
    NSDictionary *_feedback;
    DMFAppManagementInformation *_managementInformation;
}

+ (_Bool)supportsSecureCoding;
+ (id)stringForInstallationState:(unsigned long long)arg1;
@property(copy, nonatomic) DMFAppManagementInformation *managementInformation; // @synthesize managementInformation=_managementInformation;
@property(copy, nonatomic) NSDictionary *feedback; // @synthesize feedback=_feedback;
@property(copy, nonatomic) NSDictionary *configuration; // @synthesize configuration=_configuration;
@property(copy, nonatomic) NSString *VPNUUIDString; // @synthesize VPNUUIDString=_VPNUUIDString;
@property(nonatomic) _Bool hasUpdateAvailable; // @synthesize hasUpdateAvailable=_hasUpdateAvailable;
@property(nonatomic) _Bool isAdHocCodeSigned; // @synthesize isAdHocCodeSigned=_isAdHocCodeSigned;
@property(nonatomic) _Bool isBetaApp; // @synthesize isBetaApp=_isBetaApp;
@property(nonatomic) _Bool isAppStoreVendable; // @synthesize isAppStoreVendable=_isAppStoreVendable;
@property(nonatomic) _Bool isValidated; // @synthesize isValidated=_isValidated;
@property(nonatomic) _Bool isUPP; // @synthesize isUPP=_isUPP;
@property(nonatomic) _Bool isLicenseRevoked; // @synthesize isLicenseRevoked=_isLicenseRevoked;
@property(nonatomic) _Bool isLicenseExpired; // @synthesize isLicenseExpired=_isLicenseExpired;
@property(nonatomic) _Bool isDeviceBasedVPP; // @synthesize isDeviceBasedVPP=_isDeviceBasedVPP;
@property(nonatomic) _Bool isUserBasedVPP; // @synthesize isUserBasedVPP=_isUserBasedVPP;
@property(nonatomic) _Bool isBlocked; // @synthesize isBlocked=_isBlocked;
@property(nonatomic) _Bool isRestricted; // @synthesize isRestricted=_isRestricted;
@property(nonatomic) _Bool isPlaceholder; // @synthesize isPlaceholder=_isPlaceholder;
@property(nonatomic) unsigned long long installationState; // @synthesize installationState=_installationState;
@property(copy, nonatomic) NSNumber *sharedUsage; // @synthesize sharedUsage=_sharedUsage;
@property(copy, nonatomic) NSNumber *onDemandResourcesUsage; // @synthesize onDemandResourcesUsage=_onDemandResourcesUsage;
@property(copy, nonatomic) NSNumber *dynamicUsage; // @synthesize dynamicUsage=_dynamicUsage;
@property(copy, nonatomic) NSNumber *staticUsage; // @synthesize staticUsage=_staticUsage;
@property(copy, nonatomic) NSString *shortVersion; // @synthesize shortVersion=_shortVersion;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(copy, nonatomic) NSNumber *externalVersionIdentifier; // @synthesize externalVersionIdentifier=_externalVersionIdentifier;
@property(copy, nonatomic) NSNumber *storeItemIdentifier; // @synthesize storeItemIdentifier=_storeItemIdentifier;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)_stringForType:(unsigned long long)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;

@end

