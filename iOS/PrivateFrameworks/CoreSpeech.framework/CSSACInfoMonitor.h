//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject;
@protocol OS_dispatch_queue;

@interface CSSACInfoMonitor
{
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _isDeviceRoleStereo;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (_Bool)isDeviceRoleStereo;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)arg1;
- (id)init;

@end

