//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface OITSUProgressObserver : NSObject
{
    double mValueInterval;
    NSObject<OS_dispatch_queue> *mQueue;
    CDUnknownBlockType mHandler;
    double mLastHandledValue;
    _Bool mLastHandledIndeterminate;
}

@property(readonly, nonatomic) double valueInterval; // @synthesize valueInterval=mValueInterval;
- (void)handleValue:(double)arg1 maxValue:(double)arg2 isIndeterminate:(_Bool)arg3;
- (void)dealloc;
- (id)init;
- (id)initWithValueInterval:(double)arg1 queue:(id)arg2 handler:(CDUnknownBlockType)arg3;

@end
