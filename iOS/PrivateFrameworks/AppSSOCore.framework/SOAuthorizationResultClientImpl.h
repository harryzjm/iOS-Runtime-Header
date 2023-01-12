//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SOAuthorizationResultClientImpl : NSObject
{
    CDUnknownBlockType _authorizationHandleResponseCompletion;
    CDUnknownBlockType _authorizationHandleCredentialCompletion;
}

- (void).cxx_destruct;
@property(copy) CDUnknownBlockType authorizationHandleCredentialCompletion; // @synthesize authorizationHandleCredentialCompletion=_authorizationHandleCredentialCompletion;
@property(copy) CDUnknownBlockType authorizationHandleResponseCompletion; // @synthesize authorizationHandleResponseCompletion=_authorizationHandleResponseCompletion;
- (void)authorization:(id)arg1 didCompleteWithHTTPAuthorizationHeaders:(id)arg2;
- (void)authorization:(id)arg1 didCompleteWithHTTPResponse:(id)arg2 httpBody:(id)arg3;
- (void)authorization:(id)arg1 didCompleteWithError:(id)arg2;
- (void)authorizationDidComplete:(id)arg1;
- (void)authorizationDidCancel:(id)arg1;
- (void)authorizationDidNotHandle:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

