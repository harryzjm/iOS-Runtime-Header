//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CellularPlanManager/NSObject-Protocol.h>

@class NSError, NSURLAuthenticationChallenge, NSURLConnection, NSURLProtectionSpace;

@protocol NSURLConnectionDelegate <NSObject>

@optional
- (void)connection:(NSURLConnection *)arg1 didCancelAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg2;
- (void)connection:(NSURLConnection *)arg1 didReceiveAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg2;
- (_Bool)connection:(NSURLConnection *)arg1 canAuthenticateAgainstProtectionSpace:(NSURLProtectionSpace *)arg2;
- (void)connection:(NSURLConnection *)arg1 willSendRequestForAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg2;
- (_Bool)connectionShouldUseCredentialStorage:(NSURLConnection *)arg1;
- (void)connection:(NSURLConnection *)arg1 didFailWithError:(NSError *)arg2;
@end

