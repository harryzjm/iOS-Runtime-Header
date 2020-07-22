//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CMCatherineFeederInternal : NSObject
{
    NSObject<OS_dispatch_queue> *fInternalQueue;
    struct CLConnectionClient *fLocationdConnection;
    NSObject<OS_dispatch_source> *fWatchdogTimer;
}

- (void)_feedCatherine:(double)arg1 confidence:(double)arg2 timestamp:(double)arg3;
- (void)_stopWatchdogCheckins;
- (void)_startWatchdogCheckins;
- (void)_startDaemonConnection;
- (void)_teardown;
- (void)dealloc;
- (id)init;

@end

