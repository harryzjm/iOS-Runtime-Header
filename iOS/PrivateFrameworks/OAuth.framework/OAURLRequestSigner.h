//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class OACredential;

@interface OAURLRequestSigner : NSObject
{
    OACredential *_credential;
    int _signatureMethod;
}

@property(nonatomic) int signatureMethod; // @synthesize signatureMethod=_signatureMethod;
- (id)signedURLRequestWithRequest:(id)arg1;
- (id)signedURLRequestWithRequest:(id)arg1 applicationID:(id)arg2 timestamp:(id)arg3;
- (id)applyApplicationID:(id)arg1 toRequest:(id)arg2 containsMultiPartData:(_Bool)arg3;
- (id)oauthAuthorizationHeaderWithSignature:(id)arg1 nonce:(id)arg2 timestamp:(id)arg3;
- (id)oauthParametersWithNonce:(id)arg1 timeStamp:(id)arg2;
- (id)timestamp:(id)arg1;
- (id)oauthNonce;
- (Class)signer;
- (id)signatureMethodString;
- (void)dealloc;
- (id)initWithCredential:(id)arg1;

@end

