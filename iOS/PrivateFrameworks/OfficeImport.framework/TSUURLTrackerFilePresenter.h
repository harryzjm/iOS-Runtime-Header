//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSError, NSOperationQueue, NSSet, NSString, NSURL;
@protocol OS_dispatch_queue, TSUURLTrackerDelegate;

__attribute__((visibility("hidden")))
@interface TSUURLTrackerFilePresenter : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    _Bool _hasStarted;
    NSURL *_URLIfAvailable;
    NSData *_bookmarkDataIfAvailable;
    NSError *_latestError;
    id <TSUURLTrackerDelegate> _delegate;
    NSOperationQueue *_presentedItemOperationQueue;
}

- (void).cxx_destruct;
@property(readonly, retain) NSOperationQueue *presentedItemOperationQueue; // @synthesize presentedItemOperationQueue=_presentedItemOperationQueue;
@property(readonly, copy) NSString *description;
- (id)_description;
- (void)presentedItemDidChangeUbiquityAttributes:(id)arg1;
- (void)presentedItemDidMoveToURL:(id)arg1;
- (void)accommodatePresentedItemDeletionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)relinquishPresentedItemToWriter:(CDUnknownBlockType)arg1;
@property(readonly, copy) NSURL *presentedItemURL;
- (id)_bookmarkDataAndReturnError:(id *)arg1;
- (id)bookmarkDataAndReturnError:(id *)arg1;
- (void)stop;
- (void)pause;
- (void)startOrResume;
- (id)_bookmarkData;
@property(readonly) NSData *bookmarkData;
- (id)_URLAndReturnError:(id *)arg1;
- (id)URLAndReturnError:(id *)arg1;
- (id)initWithURL:(id)arg1 bookmarkData:(id)arg2 delegate:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property(readonly, copy) NSURL *primaryPresentedItemURL;
@property(readonly) Class superclass;

@end

