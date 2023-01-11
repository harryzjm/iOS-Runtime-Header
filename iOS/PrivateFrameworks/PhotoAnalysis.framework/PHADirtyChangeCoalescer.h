//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PFCoalescer;
@protocol OS_dispatch_queue, PHADirtyChangeCoalescerDelegate;

@interface PHADirtyChangeCoalescer : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    PFCoalescer *_valueCoalescer;
    id <PHADirtyChangeCoalescerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <PHADirtyChangeCoalescerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)recordDirtyTransitionForAssetIdentifier:(id)arg1 workerType:(short)arg2 workerFlags:(int)arg3;
- (id)init;

@end
