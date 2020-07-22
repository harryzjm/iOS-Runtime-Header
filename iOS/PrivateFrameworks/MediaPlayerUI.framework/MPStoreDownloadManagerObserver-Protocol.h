//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayerUI/NSObject-Protocol.h>

@class MPStoreDownload, MPStoreDownloadManager, NSArray;

@protocol MPStoreDownloadManagerObserver <NSObject>

@optional
- (void)downloadManagerNetworkUsageDidChange:(MPStoreDownloadManager *)arg1;
- (void)downloadManager:(MPStoreDownloadManager *)arg1 downloadsDidProgress:(NSArray *)arg2;
- (void)downloadManager:(MPStoreDownloadManager *)arg1 downloadPurchaseDidFinish:(MPStoreDownload *)arg2;
- (void)downloadManager:(MPStoreDownloadManager *)arg1 downloadDidProgress:(MPStoreDownload *)arg2;
- (void)downloadManager:(MPStoreDownloadManager *)arg1 downloadDidFinish:(MPStoreDownload *)arg2;
- (void)downloadManager:(MPStoreDownloadManager *)arg1 didAddActiveDownloads:(NSArray *)arg2 removeActiveDownloads:(NSArray *)arg3;
- (void)downloadManager:(MPStoreDownloadManager *)arg1 didAddDownloads:(NSArray *)arg2 removeDownloads:(NSArray *)arg3;
@end

