//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class HDWatchAppStateMonitor;

@protocol HDWatchAppStateMonitorDelegate <NSObject>
- (void)monitorDidDetectAppDeactivate:(HDWatchAppStateMonitor *)arg1;
- (void)monitorDidDetectAppActivate:(HDWatchAppStateMonitor *)arg1;
@end

