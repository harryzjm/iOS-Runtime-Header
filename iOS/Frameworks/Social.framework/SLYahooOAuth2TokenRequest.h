//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SLYahooOAuth2TokenRequest : NSObject
{
}

+ (id)_urlRequestForParams:(id)arg1 clientID:(id)arg2 secret:(id)arg3;
+ (id)urlRequestForClientID:(id)arg1 secret:(id)arg2 refreshToken:(id)arg3;
+ (id)urlRequestForClientID:(id)arg1 secret:(id)arg2 redirectURI:(id)arg3 authCode:(id)arg4;

@end
