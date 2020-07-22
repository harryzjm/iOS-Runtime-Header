//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class MKMapSnapshotOptions, NSXPCConnection, VKMapSnapshotCreator;
@protocol OS_dispatch_queue;

@interface MKMapSnapshotter : NSObject
{
    MKMapSnapshotOptions *_options;
    int _loadingFlag;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    CDUnknownBlockType _completionHandler;
    VKMapSnapshotCreator *_snapshotCreator;
    _Bool _needsResume;
    NSXPCConnection *_snapshotService;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)_performSnapshot;
- (void)_setupCustomFeaturesForAnnotationViewsIfNeeded;
- (void)startWithQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_succeedWithSnapshot:(id)arg1;
- (void)_failWithError:(id)arg1;
- (void)_cleanupSnapshotCreator;
- (void)_cancel;
- (void)_exitBackground:(id)arg1;
- (void)_enterBackground:(id)arg1;
- (void)dealloc;
- (id)initWithOptions:(id)arg1;
- (id)init;
@property(readonly, nonatomic, getter=isLoading) _Bool loading;

@end

