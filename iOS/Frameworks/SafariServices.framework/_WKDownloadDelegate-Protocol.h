//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariServices/NSObject-Protocol.h>

@class NSError, NSString, NSURLResponse, _WKDownload;

@protocol _WKDownloadDelegate <NSObject>

@optional
- (void)_downloadDidCancel:(_WKDownload *)arg1;
- (void)_download:(_WKDownload *)arg1 didFailWithError:(NSError *)arg2;
- (void)_downloadDidFinish:(_WKDownload *)arg1;
- (NSString *)_download:(_WKDownload *)arg1 decideDestinationWithSuggestedFilename:(NSString *)arg2 allowOverwrite:(_Bool *)arg3;
- (void)_download:(_WKDownload *)arg1 didReceiveData:(unsigned long long)arg2;
- (void)_download:(_WKDownload *)arg1 didReceiveResponse:(NSURLResponse *)arg2;
- (void)_downloadDidStart:(_WKDownload *)arg1;
@end
