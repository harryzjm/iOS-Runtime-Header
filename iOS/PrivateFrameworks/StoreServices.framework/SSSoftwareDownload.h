//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SSDownload.h"

@class ASDJob;

__attribute__((visibility("hidden")))
@interface SSSoftwareDownload : SSDownload
{
    ASDJob *_job;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) ASDJob *job; // @synthesize job=_job;
- (void)setValuesWithStoreDownloadMetadata:(id)arg1;
- (void)setDownloadPolicy:(id)arg1;
- (void)setDownloadHandler:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)setBackgroundNetworkingUserInitiated:(_Bool)arg1;
- (void)setBackgroundNetworkingJobGroupName:(id)arg1;
- (void)restart;
- (void)resume;
- (_Bool)removeAsset:(id)arg1;
- (void)prioritizeAboveDownload:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)pause;
- (_Bool)isEligibleForRestore:(id *)arg1;
- (_Bool)isBackgroundNetworkingUserInitiated;
- (double)estimatedSecondsRemaining;
- (long long)downloadSizeLimit;
- (id)downloadPolicy;
- (long long)bytesTotal;
- (long long)bytesDownloaded;
- (id)backgroundNetworkingJobGroupName;
- (_Bool)addAsset:(id)arg1 forType:(id)arg2;
- (id)assetsForType:(id)arg1;
- (id)status;
- (void)setStatus:(id)arg1;
- (void)setNetworkConstraints:(id)arg1;
- (void)setMetadata:(id)arg1;
- (id)networkConstraints;
- (id)metadata;
- (id)valueForProperty:(id)arg1;
- (void)_becomeManagedOnConnection:(id)arg1;
- (double)percentComplete;
- (id)failureError;
- (id)downloadPhaseIdentifier;
- (_Bool)isCancelable;
- (id)initWithPersistentIdentifier:(long long)arg1;
- (id)initWithJob:(id)arg1;

@end

