//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface DMFFetchSecurityInformationRequest
{
    NSArray *_infoKeys;
}

+ (id)watchOSSecurityInfoKeys;
+ (id)tvOSSecurityInfoKeys;
+ (id)macOSSecurityInfoKeys;
+ (id)iOSSecurityInfoKeys;
+ (id)allPlatformSecurityInfoKeys;
+ (id)currentPlatformSecurityInfoKeys;
+ (_Bool)supportsSecureCoding;
+ (_Bool)isPermittedOnUserConnection;
+ (_Bool)isPermittedOnSystemConnection;
+ (id)permittedPlatforms;
+ (Class)whitelistedClassForResultObject;
@property(copy, nonatomic) NSArray *infoKeys; // @synthesize infoKeys=_infoKeys;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

