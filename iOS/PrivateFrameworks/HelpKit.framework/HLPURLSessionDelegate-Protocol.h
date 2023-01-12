//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HelpKit/NSObject-Protocol.h>

@class HLPURLSessionTask, NSCachedURLResponse, NSError, NSURL, NSURLAuthenticationChallenge, NSURLResponse;

@protocol HLPURLSessionDelegate <NSObject>

@optional
- (void)sessionTask:(HLPURLSessionTask *)arg1 didReceiveResponse:(NSURLResponse *)arg2 completionHandler:(void (^)(long long, _Bool))arg3;
- (void)sessionTask:(HLPURLSessionTask *)arg1 didFinishDownloadingToURL:(NSURL *)arg2;
- (void)sessionTask:(HLPURLSessionTask *)arg1 willCacheResponse:(NSCachedURLResponse *)arg2 completionHandler:(void (^)(NSCachedURLResponse *))arg3;
- (void)sessionTask:(HLPURLSessionTask *)arg1 didCompleteWithError:(NSError *)arg2;
- (void)sessionTask:(HLPURLSessionTask *)arg1 didReceiveChallenge:(NSURLAuthenticationChallenge *)arg2 completionHandler:(void (^)(long long, NSURLCredential *))arg3;
@end

