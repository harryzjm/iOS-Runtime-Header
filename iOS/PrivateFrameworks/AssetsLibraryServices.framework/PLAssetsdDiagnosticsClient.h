//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PLAssetsdDiagnosticsClient
{
}

- (void)setSharedMemoryForDeferredLogging:(id)arg1;
- (void)setPhotosXPCEndpoint:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)getPhotosXPCEndpoint:(id *)arg1 error:(id *)arg2;
- (_Bool)incompleteRestoreProcesses:(id *)arg1 error:(id *)arg2;
- (_Bool)dumpPhotoAnalysisStatusWithOutputFilePath:(id *)arg1 error:(id *)arg2;
- (_Bool)dumpCloudPhotosStatusIncludingDaemon:(_Bool)arg1 error:(id *)arg2;

@end
