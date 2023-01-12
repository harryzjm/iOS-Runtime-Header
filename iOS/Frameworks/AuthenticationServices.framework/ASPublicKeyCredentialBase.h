//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AuthenticationServices/ASPublicKeyCredential-Protocol.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface ASPublicKeyCredentialBase : NSObject <ASPublicKeyCredential>
{
    NSData *_rawClientDataJSON;
    NSData *_credentialID;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSData *credentialID; // @synthesize credentialID=_credentialID;
@property(readonly, copy, nonatomic) NSData *rawClientDataJSON; // @synthesize rawClientDataJSON=_rawClientDataJSON;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCredentialID:(id)arg1 rawClientDataJSON:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
