//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSString, PKPaymentEligibilityResponse, PKPaymentRequirementsResponse;

@interface PKPaymentCredential : NSObject
{
    long long _credentialType;
    NSString *_sanitizedPrimaryAccountNumber;
    NSString *_expiration;
    NSString *_longDescription;
    PKPaymentRequirementsResponse *_requirementsResponse;
    PKPaymentEligibilityResponse *_eligibilityResponse;
}

+ (id)fakeRemoteCredentials;
@property(retain, nonatomic) PKPaymentEligibilityResponse *eligibilityResponse; // @synthesize eligibilityResponse=_eligibilityResponse;
@property(retain, nonatomic) PKPaymentRequirementsResponse *requirementsResponse; // @synthesize requirementsResponse=_requirementsResponse;
@property(copy, nonatomic) NSString *longDescription; // @synthesize longDescription=_longDescription;
@property(copy, nonatomic) NSString *expiration; // @synthesize expiration=_expiration;
@property(copy, nonatomic) NSString *sanitizedPrimaryAccountNumber; // @synthesize sanitizedPrimaryAccountNumber=_sanitizedPrimaryAccountNumber;
@property(nonatomic) long long credentialType; // @synthesize credentialType=_credentialType;
- (void).cxx_destruct;
- (id)contactlessProductCredential;
- (_Bool)isContactlessProductCredential;
- (id)peerPaymentCredential;
- (_Bool)isPeerPaymentCredential;
- (id)localPassCredential;
- (_Bool)isLocalPassCredential;
- (id)remoteCredential;
- (_Bool)isRemoteCredential;

@end
