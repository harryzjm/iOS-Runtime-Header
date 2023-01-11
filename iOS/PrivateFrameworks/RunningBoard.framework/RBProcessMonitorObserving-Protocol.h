//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RunningBoard/NSObject-Protocol.h>
#import <RunningBoard/RBStateCapturing-Protocol.h>

@class NSArray;
@protocol RBProcessMonitoring;

@protocol RBProcessMonitorObserving <NSObject, RBStateCapturing>
- (void)processMonitor:(id <RBProcessMonitoring>)arg1 didChangeProcessStates:(NSArray *)arg2;
@end
