//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject;
@protocol OS_dispatch_queue;

@interface CSSmartSiriVolumeEnablePolicy
{
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)_addSmartSiriVolumeEnabledConditions;
- (void)_subscribeEventMonitors;
- (id)init;

@end
