//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface _HKDataCollectorDelayedOperation : NSObject
{
    CDUnknownBlockType _block;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_name;
    int _pendingRunCount;
    double _lastExecution;
    unsigned long long _executionNumber;
}

- (void).cxx_destruct;
- (void)invalidate;
- (void)executeWithDelay:(double)arg1;
- (id)initWithQueue:(id)arg1 name:(id)arg2 block:(CDUnknownBlockType)arg3;

@end
