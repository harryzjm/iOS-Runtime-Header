//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MCUIProvisioningProfile : NSObject
{
    _Bool _isAppleInternal;
    _Bool _isBeta;
    _Bool _isFreeDeveloperProvisioningProfile;
    _Bool _isUniversalProvisioningProfile;
    NSString *_allowedApplicationIdentifierEntitlement;
    NSString *_UUID;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isUniversalProvisioningProfile; // @synthesize isUniversalProvisioningProfile=_isUniversalProvisioningProfile;
@property(nonatomic) _Bool isFreeDeveloperProvisioningProfile; // @synthesize isFreeDeveloperProvisioningProfile=_isFreeDeveloperProvisioningProfile;
@property(nonatomic) _Bool isBeta; // @synthesize isBeta=_isBeta;
@property(nonatomic) _Bool isAppleInternal; // @synthesize isAppleInternal=_isAppleInternal;
@property(retain, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
@property(retain, nonatomic) NSString *allowedApplicationIdentifierEntitlement; // @synthesize allowedApplicationIdentifierEntitlement=_allowedApplicationIdentifierEntitlement;
- (_Bool)allowsApplicationIdentifierEntitlement:(id)arg1;
- (id)initWithProfile:(void *)arg1;

@end
