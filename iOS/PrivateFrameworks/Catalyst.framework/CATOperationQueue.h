//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperationQueue.h>

@protocol CATOperationQueueDelegate;

@interface CATOperationQueue : NSOperationQueue
{
    id <CATOperationQueueDelegate> _delegate;
}

+ (id)mainQueue;
+ (id)currentQueue;
+ (id)backgroundQueue;
@property(nonatomic) __weak id <CATOperationQueueDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)stopObserving:(id)arg1;
- (void)startObserving:(id)arg1;
- (void)delegateWillAddOperation:(id)arg1;
- (void)delegateOperationDidFinish:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)addOperations:(id)arg1 waitUntilFinished:(_Bool)arg2;
- (void)addOperation:(id)arg1;
- (id)description;
- (void)setUnderlyingQueue:(id)arg1;

@end

