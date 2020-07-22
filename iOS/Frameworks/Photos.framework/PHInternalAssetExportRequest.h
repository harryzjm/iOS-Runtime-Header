//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, PHResourceDownloadRequest;
@protocol OS_dispatch_queue;

@interface PHInternalAssetExportRequest
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    PHResourceDownloadRequest *_downloadRequest;
}

+ (id)exportRequestForAsset:(id)arg1 error:(id *)arg2;
+ (id)_variantsForAsset:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
- (void)exportWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)preflightExportWithOptions:(id)arg1 isDownloadingRequired:(_Bool *)arg2 isProcessingRequired:(_Bool *)arg3 fileURLs:(id *)arg4;
- (id)_initWithAsset:(id)arg1 variants:(id)arg2 downloadRequest:(id)arg3;

@end

