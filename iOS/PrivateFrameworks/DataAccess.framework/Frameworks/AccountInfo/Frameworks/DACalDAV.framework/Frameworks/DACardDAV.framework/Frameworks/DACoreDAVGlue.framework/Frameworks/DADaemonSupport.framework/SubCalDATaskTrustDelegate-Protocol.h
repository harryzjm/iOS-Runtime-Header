//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DADaemonSupport/NSObject-Protocol.h>

@class NSURLAuthenticationChallenge, SubCalDATask;

@protocol SubCalDATaskTrustDelegate <NSObject>
- (void)handleTrustChallenge:(NSURLAuthenticationChallenge *)arg1 forTask:(SubCalDATask *)arg2 completionHandler:(void (^)(long long, NSURLCredential *))arg3;
- (void)handleTrustChallenge:(NSURLAuthenticationChallenge *)arg1 forTask:(SubCalDATask *)arg2;
@end
