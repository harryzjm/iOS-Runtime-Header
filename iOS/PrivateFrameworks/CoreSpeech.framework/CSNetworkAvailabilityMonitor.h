//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CSNetworkAvailabilityMonitor
{
    int _notifyToken;
}

+ (id)sharedInstance;
- (void)_notifyObserver:(id)arg1 withNetworkAvailability:(_Bool)arg2;
- (void)_didReceivedNetworkAvailabilityChangedNotification:(_Bool)arg1;
- (void)_availabilityChanged;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)arg1;
- (_Bool)isAvailable;
- (id)init;

@end

