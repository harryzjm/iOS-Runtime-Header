//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, PKSEConsistencyCheckDeviceCredentialAppletProperties, PKSEConsistencyCheckDeviceCredentialISO18013Properties, PKSECredentialAddress;

@interface PKSEConsistencyCheckDeviceCredential : NSObject
{
    _Bool _shouldRegister;
    PKSECredentialAddress *_address;
    unsigned long long _type;
    unsigned long long _state;
    NSNumber *_underlyingCredentialState;
    long long _credentialType;
    PKSEConsistencyCheckDeviceCredentialAppletProperties *_appletProperties;
    PKSEConsistencyCheckDeviceCredentialISO18013Properties *_isoProperties;
}

+ (id)deviceCredentialWithApplet:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) PKSEConsistencyCheckDeviceCredentialISO18013Properties *isoProperties; // @synthesize isoProperties=_isoProperties;
@property(retain, nonatomic) PKSEConsistencyCheckDeviceCredentialAppletProperties *appletProperties; // @synthesize appletProperties=_appletProperties;
@property(readonly, nonatomic) _Bool shouldRegister; // @synthesize shouldRegister=_shouldRegister;
@property(nonatomic) long long credentialType; // @synthesize credentialType=_credentialType;
@property(retain, nonatomic) NSNumber *underlyingCredentialState; // @synthesize underlyingCredentialState=_underlyingCredentialState;
@property(readonly, nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) PKSECredentialAddress *address; // @synthesize address=_address;
- (id)description;
- (id)initWithType:(unsigned long long)arg1 state:(unsigned long long)arg2 underlyingCredentialState:(id)arg3 address:(id)arg4;
- (id)init;

@end
