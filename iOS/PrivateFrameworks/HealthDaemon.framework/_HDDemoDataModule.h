//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSOperationQueue;
@protocol OS_dispatch_source, _HDDemoDataModuleDelegate;

__attribute__((visibility("hidden")))
@interface _HDDemoDataModule : NSObject
{
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_source> *_timerSource;
    id <_HDDemoDataModuleDelegate> _delegate;
    NSDate *_lastFireDate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDate *lastFireDate; // @synthesize lastFireDate=_lastFireDate;
@property(nonatomic) __weak id <_HDDemoDataModuleDelegate> delegate; // @synthesize delegate=_delegate;
- (void)timerDidFireWithInterval:(double)arg1;
- (void)scheduleNextFireWithInterval:(double)arg1;
- (void)scheduleNextFire;
- (void)handleDataObject:(id)arg1;
@property(readonly, nonatomic) double nextFireInterval;
- (void)stop;
- (void)start;
- (id)initWithOperationQueue:(id)arg1;

@end
