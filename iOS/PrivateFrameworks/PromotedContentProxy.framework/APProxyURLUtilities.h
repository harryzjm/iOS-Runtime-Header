//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface APProxyURLUtilities : NSObject
{
}

+ (id)_proxyURLForVideoURL:(id)arg1 adIdentifier:(id)arg2 changeScheme:(_Bool)arg3;
+ (id)proxyURLForVideoURL:(id)arg1 adIdentifier:(id)arg2 changeScheme:(_Bool)arg3;
+ (void)changeSchemeTo:(long long)arg1 forUrlRequest:(id)arg2;
+ (id)composeUserAgentString:(id)arg1 adIdentifier:(id)arg2 maxRequestCount:(long long)arg3;
+ (void)parseUserAgentString:(id)arg1 adIdentifier:(id *)arg2 maxRequestCount:(id *)arg3;
+ (_Bool)_shouldProxyRequestToHost:(id)arg1;
+ (_Bool)shouldProxyRequestToHost:(id)arg1;

@end
