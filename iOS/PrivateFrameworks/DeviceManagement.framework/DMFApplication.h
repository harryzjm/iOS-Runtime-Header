//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DeviceManagement/NSCopying-Protocol.h>
#import <DeviceManagement/NSSecureCoding-Protocol.h>

@class DMFApplicationInstallProgress, NSData, NSDictionary, NSNumber, NSString;

@interface DMFApplication : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _isManaged;
    _Bool _isValidated;
    _Bool _isInstalled;
    _Bool _isPlaceholder;
    _Bool _isAppUpdate;
    _Bool _isBetaApp;
    _Bool _isRemoveable;
    _Bool _fileSharingEnabled;
    NSString *_applicationIdentifier;
    NSString *_bundleIdentifier;
    NSString *_name;
    NSData *_iconData;
    NSString *_bundleVersion;
    NSString *_shortVersionString;
    NSString *_applicationType;
    NSNumber *_adamID;
    NSNumber *_externalVersionIdentifier;
    NSNumber *_betaExternalVersionIdentifier;
    NSNumber *_staticUsage;
    NSNumber *_dynamicUsage;
    NSNumber *_onDemandResourcesUsage;
    NSString *_unusedRedemptionCode;
    NSDictionary *_attributes;
    NSDictionary *_configuration;
    NSDictionary *_feedback;
    unsigned long long _state;
    unsigned long long _managementFlags;
    DMFApplicationInstallProgress *_progress;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) DMFApplicationInstallProgress *progress; // @synthesize progress=_progress;
@property(readonly, nonatomic) _Bool fileSharingEnabled; // @synthesize fileSharingEnabled=_fileSharingEnabled;
@property(readonly, nonatomic) _Bool isRemoveable; // @synthesize isRemoveable=_isRemoveable;
@property(readonly, nonatomic) _Bool isBetaApp; // @synthesize isBetaApp=_isBetaApp;
@property(readonly, nonatomic) _Bool isAppUpdate; // @synthesize isAppUpdate=_isAppUpdate;
@property(readonly, nonatomic) _Bool isPlaceholder; // @synthesize isPlaceholder=_isPlaceholder;
@property(readonly, nonatomic) _Bool isInstalled; // @synthesize isInstalled=_isInstalled;
@property(readonly, nonatomic) _Bool isValidated; // @synthesize isValidated=_isValidated;
@property(readonly, nonatomic) _Bool isManaged; // @synthesize isManaged=_isManaged;
@property(readonly, nonatomic) unsigned long long managementFlags; // @synthesize managementFlags=_managementFlags;
@property(readonly, nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, copy, nonatomic) NSDictionary *feedback; // @synthesize feedback=_feedback;
@property(readonly, copy, nonatomic) NSDictionary *configuration; // @synthesize configuration=_configuration;
@property(readonly, copy, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(readonly, copy, nonatomic) NSString *unusedRedemptionCode; // @synthesize unusedRedemptionCode=_unusedRedemptionCode;
@property(readonly, copy, nonatomic) NSNumber *onDemandResourcesUsage; // @synthesize onDemandResourcesUsage=_onDemandResourcesUsage;
@property(readonly, copy, nonatomic) NSNumber *dynamicUsage; // @synthesize dynamicUsage=_dynamicUsage;
@property(readonly, copy, nonatomic) NSNumber *staticUsage; // @synthesize staticUsage=_staticUsage;
@property(readonly, copy, nonatomic) NSNumber *betaExternalVersionIdentifier; // @synthesize betaExternalVersionIdentifier=_betaExternalVersionIdentifier;
@property(readonly, copy, nonatomic) NSNumber *externalVersionIdentifier; // @synthesize externalVersionIdentifier=_externalVersionIdentifier;
@property(readonly, copy, nonatomic) NSNumber *adamID; // @synthesize adamID=_adamID;
@property(readonly, copy, nonatomic) NSString *applicationType; // @synthesize applicationType=_applicationType;
@property(readonly, copy, nonatomic) NSString *shortVersionString; // @synthesize shortVersionString=_shortVersionString;
@property(readonly, copy, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(readonly, copy, nonatomic) NSData *iconData; // @synthesize iconData=_iconData;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, copy, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBundleIdentifier:(id)arg1 name:(id)arg2 iconData:(id)arg3 applicationType:(id)arg4 adamID:(id)arg5 externalVersionNumber:(id)arg6 betaExternalVersionIdentifier:(id)arg7 isInstalled:(_Bool)arg8 isPlaceholder:(_Bool)arg9 isAppUpdate:(_Bool)arg10 isBetaApp:(_Bool)arg11 isRemoveable:(_Bool)arg12 fileSharingEnabled:(_Bool)arg13 progress:(id)arg14;
- (id)initWithApplicationIdentifier:(id)arg1 bundleIdentifier:(id)arg2 name:(id)arg3 iconData:(id)arg4 bundleVersion:(id)arg5 shortVersionString:(id)arg6 applicationType:(id)arg7 adamID:(id)arg8 externalVersionIdentifier:(id)arg9 betaExternalVersionIdentifier:(id)arg10 staticUsage:(id)arg11 dynamicUsage:(id)arg12 onDemandResourcesUsage:(id)arg13 unusedRedemptionCode:(id)arg14 attributes:(id)arg15 configuration:(id)arg16 feedback:(id)arg17 state:(unsigned long long)arg18 managementFlags:(unsigned long long)arg19 isManaged:(_Bool)arg20 isValidated:(_Bool)arg21 isInstalled:(_Bool)arg22 isPlaceholder:(_Bool)arg23 isAppUpdate:(_Bool)arg24 isBetaApp:(_Bool)arg25 isRemoveable:(_Bool)arg26 fileSharingEnabled:(_Bool)arg27 progress:(id)arg28;

@end

