//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TCMessageContext, TCProgressContext;
@protocol OS_dispatch_group, OS_dispatch_queue, TCCancelDelegate;

__attribute__((visibility("hidden")))
@interface TCBackgroundThreadManager : NSObject
{
    id <TCCancelDelegate> mCancelDelegate;
    _Bool mIsWaiting;
    unsigned long long mBlockCount;
    NSObject<OS_dispatch_queue> *mQueue;
    NSObject<OS_dispatch_group> *mGroup;
    NSObject<OS_dispatch_queue> *mProgressReportingQueue;
    TCMessageContext *mMessageContext;
    TCProgressContext *mProgressContext;
}

@property(retain) TCProgressContext *progressContext; // @synthesize progressContext=mProgressContext;
@property(retain) TCMessageContext *messageContext; // @synthesize messageContext=mMessageContext;
- (void)reportWarning:(id)arg1;
- (void)waitUntilComplete;
- (void)addASyncBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithCancelDelegate:(id)arg1;
@property(readonly) _Bool isCancelled;

@end

