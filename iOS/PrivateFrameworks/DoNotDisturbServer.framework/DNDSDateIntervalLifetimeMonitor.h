//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PCPersistentTimer;

@interface DNDSDateIntervalLifetimeMonitor
{
    PCPersistentTimer *_lifetimeTimer;
}

+ (_Bool)willMonitorLifetime:(id)arg1;
- (void).cxx_destruct;
- (void)_timerFired:(id)arg1;
- (id)updateForModeAssertionDetails:(id)arg1 date:(id)arg2;

@end
