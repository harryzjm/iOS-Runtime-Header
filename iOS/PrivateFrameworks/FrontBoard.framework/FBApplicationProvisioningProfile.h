//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface FBApplicationProvisioningProfile : NSObject
{
    NSString *_allowedApplicationIdentifierEntitlement;
    _Bool _appleInternalProfile;
    _Bool _beta;
    _Bool _freeDeveloperProfile;
    _Bool _provisionsAllDevices;
    _Bool _provisionsThisDevice;
    NSString *_signerIdentity;
    NSDate *_expirationDate;
    NSString *_UUID;
}

@property(readonly, copy, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
@property(readonly, nonatomic) _Bool provisionsThisDevice; // @synthesize provisionsThisDevice=_provisionsThisDevice;
@property(readonly, nonatomic) _Bool provisionsAllDevices; // @synthesize provisionsAllDevices=_provisionsAllDevices;
@property(readonly, nonatomic, getter=isFreeDeveloperProfile) _Bool freeDeveloperProfile; // @synthesize freeDeveloperProfile=_freeDeveloperProfile;
@property(readonly, nonatomic, getter=isBeta) _Bool beta; // @synthesize beta=_beta;
@property(readonly, nonatomic, getter=isAppleInternalProfile) _Bool appleInternalProfile; // @synthesize appleInternalProfile=_appleInternalProfile;
@property(readonly, retain, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly, copy, nonatomic) NSString *signerIdentity; // @synthesize signerIdentity=_signerIdentity;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)description;
- (_Bool)allowsApplicationIdentifierEntitlement:(id)arg1;
- (void)dealloc;
- (id)initWithSignerIdentity:(id)arg1 profile:(id)arg2;

@end

