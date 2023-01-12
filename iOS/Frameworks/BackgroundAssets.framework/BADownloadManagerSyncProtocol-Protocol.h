//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BackgroundAssets/NSObject-Protocol.h>

@class NSArray, NSError, NSString, NSURL, NSURLAuthenticationChallenge;

@protocol BADownloadManagerSyncProtocol <NSObject>
- (void)downloadIdentifierDidFinish:(NSString *)arg1 clientStagedURL:(NSURL *)arg2 sandboxExtensionToken:(NSString *)arg3 wasHandled:(void (^)(_Bool))arg4;
- (void)downloadIdentifier:(NSString *)arg1 didFailWithError:(NSError *)arg2 wasHandled:(void (^)(_Bool))arg3;
- (void)downloadIdentifier:(NSString *)arg1 didReceiveChallenge:(NSURLAuthenticationChallenge *)arg2 authChallengeHandler:(void (^)(long long, NSURLCredential *))arg3;
- (void)downloadIdentifier:(NSString *)arg1 didWriteBytes:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (void)downloadIdentifierDidPause:(NSString *)arg1;
- (void)downloadIdentifierDidBegin:(NSString *)arg1;
- (void)removeDownloadIdentifier:(NSString *)arg1;
- (void)syncDownloads:(NSArray *)arg1;
@end

