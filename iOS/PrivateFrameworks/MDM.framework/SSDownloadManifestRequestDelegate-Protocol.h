//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MDM/SSRequestDelegate-Protocol.h>

@class SSDownloadManifestRequest, SSDownloadManifestResponse;

@protocol SSDownloadManifestRequestDelegate <SSRequestDelegate>

@optional
- (void)downloadManifestRequest:(SSDownloadManifestRequest *)arg1 didReceiveResponse:(SSDownloadManifestResponse *)arg2;
@end
