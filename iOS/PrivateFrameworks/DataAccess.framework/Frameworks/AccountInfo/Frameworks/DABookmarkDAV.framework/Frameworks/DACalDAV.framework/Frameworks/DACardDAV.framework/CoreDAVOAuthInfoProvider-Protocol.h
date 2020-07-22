//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DACardDAV/NSObject-Protocol.h>

@class NSString, NSURLAuthenticationChallenge;

@protocol CoreDAVOAuthInfoProvider <NSObject>

@optional
- (unsigned long long)oauthVariant;
- (NSString *)oauth2Token;
- (struct _CFURLCredential *)newOAuth1CredentialForChallenge:(NSURLAuthenticationChallenge *)arg1;
@end

