//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString;

@interface DMFMDMv1InstallAppRequest
{
    _Bool _manage;
    NSString *_redemptionCode;
    NSString *_originator;
    unsigned long long _managementOptions;
    NSString *_VPNUUIDString;
    NSDictionary *_configuration;
}

+ (_Bool)supportsSecureCoding;
+ (_Bool)isPermittedOnUserConnection;
+ (_Bool)isPermittedOnSystemConnection;
+ (id)permittedPlatforms;
+ (Class)whitelistedClassForResultObject;
@property(copy, nonatomic) NSDictionary *configuration; // @synthesize configuration=_configuration;
@property(copy, nonatomic) NSString *VPNUUIDString; // @synthesize VPNUUIDString=_VPNUUIDString;
@property(nonatomic) unsigned long long managementOptions; // @synthesize managementOptions=_managementOptions;
@property(nonatomic) _Bool manage; // @synthesize manage=_manage;
@property(copy, nonatomic) NSString *originator; // @synthesize originator=_originator;
@property(copy, nonatomic) NSString *redemptionCode; // @synthesize redemptionCode=_redemptionCode;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

