//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSString;

@interface IDSAuthenticationSigningResult : NSObject
{
    NSArray *_authenticationCertificateSignatures;
    NSData *_inputData;
    NSData *_nonce;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *nonce; // @synthesize nonce=_nonce;
@property(readonly, nonatomic) NSData *inputData; // @synthesize inputData=_inputData;
@property(readonly, nonatomic) NSArray *authenticationCertificateSignatures; // @synthesize authenticationCertificateSignatures=_authenticationCertificateSignatures;
- (id)description;
- (id)initWithSubscriptionIdentifiers:(id)arg1 authenticationCertificates:(id)arg2 inputData:(id)arg3 nonce:(id)arg4 signature:(id)arg5;
@property(readonly, nonatomic) NSString *serverVerifiableEncoding;

@end
