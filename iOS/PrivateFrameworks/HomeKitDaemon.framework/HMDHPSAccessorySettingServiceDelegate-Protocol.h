//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;
@protocol HMDHPSSetting;

@protocol HMDHPSAccessorySettingServiceDelegate

@optional
- (void)didReconnect;
- (void)didUpdateSetting:(id <HMDHPSSetting>)arg1 forKeyPath:(NSString *)arg2;
- (void)settingValueUpdatedForKeyPath:(NSString *)arg1 setting:(id <HMDHPSSetting>)arg2;
@end

