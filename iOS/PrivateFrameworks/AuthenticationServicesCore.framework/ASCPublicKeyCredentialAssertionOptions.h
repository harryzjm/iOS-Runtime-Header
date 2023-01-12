//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AuthenticationServicesCore/NSSecureCoding-Protocol.h>

@class NSArray, NSData, NSString;

@interface ASCPublicKeyCredentialAssertionOptions : NSObject <NSSecureCoding>
{
    unsigned long long _credentialKind;
    NSString *_relyingPartyIdentifier;
    NSData *_challenge;
    NSArray *_allowedCredentials;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *allowedCredentials; // @synthesize allowedCredentials=_allowedCredentials;
@property(readonly, copy, nonatomic) NSData *challenge; // @synthesize challenge=_challenge;
@property(readonly, copy, nonatomic) NSString *relyingPartyIdentifier; // @synthesize relyingPartyIdentifier=_relyingPartyIdentifier;
@property(readonly, nonatomic) unsigned long long credentialKind; // @synthesize credentialKind=_credentialKind;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKind:(unsigned long long)arg1 relyingParyIdentifier:(id)arg2 challenge:(id)arg3 allowedCredentials:(id)arg4;

@end
