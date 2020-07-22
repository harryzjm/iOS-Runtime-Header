//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

@interface NSURL (UIKitAdditions)
+ (id)URLWithDisplayIdentifier:(id)arg1 forSearchResultDomain:(int)arg2 andIdentifier:(unsigned long long)arg3;
+ (id)mapsURLWithSourceAddress:(id)arg1 destinationAddress:(id)arg2;
+ (id)mapsURLWithQuery:(id)arg1;
- (_Bool)isHTTPOrHTTPSURL;
- (_Bool)isJavaScriptURL;
- (_Bool)isAccountURL;
- (_Bool)isWebcalURL;
- (_Bool)isSpringboardHandledURL;
- (id)searchResultIdentifier;
- (id)searchResultDomain;
- (id)radarWebURL;
- (id)phobosURL;
- (void)_domain:(id *)arg1 subdomain:(id *)arg2;
@end

