//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <CFNetwork/NSSecureCoding-Protocol.h>

@class NSError, NSURLAuthenticationChallengeInternal, NSURLCredential, NSURLProtectionSpace, NSURLResponse;
@protocol NSURLAuthenticationChallengeSender;

@interface NSURLAuthenticationChallenge : NSObject <NSSecureCoding>
{
    NSURLAuthenticationChallengeInternal *_internal;
}

+ (_Bool)supportsSecureCoding;
+ (id)_createAuthenticationChallengeForCFAuthChallenge:(struct _CFURLAuthChallenge *)arg1 sender:(id)arg2;
+ (id)_authenticationChallengeForCFAuthChallenge:(struct _CFURLAuthChallenge *)arg1 sender:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, retain) id <NSURLAuthenticationChallengeSender> sender;
@property(readonly, copy) NSURLResponse *failureResponse;
@property(readonly, copy) NSError *error;
@property(readonly) long long previousFailureCount;
@property(readonly, copy) NSURLCredential *proposedCredential;
@property(readonly, copy) NSURLProtectionSpace *protectionSpace;
- (void)dealloc;
- (id)_initWithCFAuthChallenge:(struct _CFURLAuthChallenge *)arg1 sender:(id)arg2;
- (id)initWithAuthenticationChallenge:(id)arg1 sender:(id)arg2;
- (id)_initWithListOfProtectionSpaces:(id)arg1 CurrentProtectionSpace:(id)arg2 proposedCredential:(id)arg3 previousFailureCount:(long long)arg4 failureResponse:(id)arg5 error:(id)arg6 sender:(id)arg7;
- (id)initWithProtectionSpace:(id)arg1 proposedCredential:(id)arg2 previousFailureCount:(long long)arg3 failureResponse:(id)arg4 error:(id)arg5 sender:(id)arg6;
- (id)init;
- (struct _CFURLAuthChallenge *)_createCFAuthChallenge;
- (void)setSender:(id)arg1;
- (_Bool)_isPasswordBasedChallenge;

@end

