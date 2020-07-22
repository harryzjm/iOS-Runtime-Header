//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, NSString;
@protocol OS_dispatch_queue, PXAutoloopVideoTaskDelegate;

@interface PXAutoloopVideoTask : NSObject
{
    NSObject<OS_dispatch_queue> *_performQueue;
    NSObject<OS_dispatch_queue> *_ivarQueue;
    void *_ivarQueueIdentifier;
    id <PXAutoloopVideoTaskDelegate> _ivarQueue_delegate;
    long long _ivarQueue_status;
    double _ivarQueue_progress;
    NSError *_ivarQueue_error;
    CDStruct_79eed083 _ivarQueue_delegateFlags;
    NSString *_temporaryFilesDirectory;
}

@property(readonly, copy, nonatomic) NSString *temporaryFilesDirectory; // @synthesize temporaryFilesDirectory=_temporaryFilesDirectory;
- (void).cxx_destruct;
- (void)_performIvarWrite:(CDUnknownBlockType)arg1;
- (void)_performIvarRead:(CDUnknownBlockType)arg1;
- (_Bool)_isOnIvarQueue;
- (_Bool)_isRunning;
- (void)setStatus:(long long)arg1;
@property(readonly, nonatomic) long long status;
- (void)setProgress:(double)arg1;
@property(readonly, nonatomic) double progress;
- (void)setError:(id)arg1;
@property(readonly, nonatomic) NSError *error;
- (void)setTemporaryFilesDirectory:(id)arg1;
@property(nonatomic) __weak id <PXAutoloopVideoTaskDelegate> delegate;
- (void)cancel;
- (void)performTaskWithInput:(id)arg1;
- (void)runWithInput:(id)arg1;
- (void)_reset;
- (id)init;

@end
