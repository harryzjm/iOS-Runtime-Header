//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSProgress.h"

@protocol NSProgressPublisher;

__attribute__((visibility("hidden")))
@interface _NSProgressProxy : NSProgress
{
    id <NSProgressPublisher> _forwarder;
    _Bool _isOld;
    CDUnknownBlockType _unpublishingHandler;
}

- (_Bool)isOld;
- (void)_acknowledgeWithSuccess:(_Bool)arg1;
- (void)acknowledgeWithSuccess:(_Bool)arg1;
- (double)fractionCompleted;
- (void)resume;
- (void)prioritize;
- (void)pause;
- (void)cancel;
- (void)unpublish;
- (void)publish;
- (id)byteCompletedCount;
- (id)byteTotalCount;
- (id)fileCompletedCount;
- (id)fileTotalCount;
- (id)fileURL;
- (id)fileOperationKind;
- (id)throughput;
- (id)estimatedTimeRemaining;
- (void)setByteCompletedCount:(id)arg1;
- (void)setByteTotalCount:(id)arg1;
- (void)setFileCompletedCount:(id)arg1;
- (void)setFileTotalCount:(id)arg1;
- (void)setFileURL:(id)arg1;
- (void)setFileOperationKind:(id)arg1;
- (void)setThroughput:(id)arg1;
- (void)setEstimatedTimeRemaining:(id)arg1;
- (void)setKind:(id)arg1;
- (void)setUserInfoObject:(id)arg1 forKey:(id)arg2;
- (void)setPrioritizationHandler:(CDUnknownBlockType)arg1;
- (void)setPrioritizable:(_Bool)arg1;
- (void)setPausingHandler:(CDUnknownBlockType)arg1;
- (void)setCancellationHandler:(CDUnknownBlockType)arg1;
- (void)setPausable:(_Bool)arg1;
- (void)setCancellable:(_Bool)arg1;
- (void)setLocalizedDescription:(id)arg1;
- (void)setCompletedUnitCount:(long long)arg1;
- (void)setTotalUnitCount:(long long)arg1;
- (void)resignCurrent;
- (void)becomeCurrentWithPendingUnitCount:(long long)arg1;
- (void)_setRemoteValues:(id)arg1 forKeys:(id)arg2;
- (void)_setRemoteUserInfoValue:(id)arg1 forKey:(id)arg2;
- (void)_invokeUnpublishingHandler;
- (void)_invokePublishingHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)_initWithForwarder:(id)arg1 values:(id)arg2 isOld:(_Bool)arg3;

@end

