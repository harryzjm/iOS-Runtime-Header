//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSProgress, PAImageConversionServiceClient, PAVideoConversionServiceClient;

@interface PLBackgroundJobDeferredRenderDerivativesBaseWorker
{
    NSProgress *_progressForCurrentAsset;
    PAImageConversionServiceClient *_imageConversionClient;
    PAVideoConversionServiceClient *_videoConversionClient;
}

+ (id)workerWithLibrary:(id)arg1;
- (void).cxx_destruct;
- (void)stopWorkingOnManagedObjectID:(id)arg1;
- (_Bool)isInterruptible;
- (void)performWorkOnManagedObjectID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)managedObjectIDsNeedingProcessing;
- (_Bool)hasPendingJobs;
- (id)videoConversionClient;
- (id)imageConversionClient;
- (id)_predicateToFetchDeferredAssets;

@end
