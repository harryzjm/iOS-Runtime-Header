//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CSAdBlockerAssetMetaUpdateMonitor
{
    int _notifyToken;
}

+ (id)sharedInstance;
- (void)_notifyObserver:(id)arg1;
- (void)_didReceiveNewAdBlockerAssetMetaData;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)arg1;
- (const char *)_asssetMetaUpdatedKey;
- (id)init;

@end
