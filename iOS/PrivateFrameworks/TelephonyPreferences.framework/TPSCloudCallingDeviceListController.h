//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TelephonyPreferences/TPSCloudCallingDeviceControllerDelegate-Protocol.h>

@class NSArray, NSString, PSSpecifier, TPSCloudCallingDeviceController;

@interface TPSCloudCallingDeviceListController <TPSCloudCallingDeviceControllerDelegate>
{
    PSSpecifier *_devicesGroupSpecifier;
    PSSpecifier *_mainGroupSpecifier;
    PSSpecifier *_mainSwitchSpecifier;
    TPSCloudCallingDeviceController *_deviceController;
    NSArray *_deviceSwitchSpecifiers;
}

@property(copy, nonatomic) NSArray *deviceSwitchSpecifiers; // @synthesize deviceSwitchSpecifiers=_deviceSwitchSpecifiers;
@property(readonly, nonatomic) TPSCloudCallingDeviceController *deviceController; // @synthesize deviceController=_deviceController;
- (void).cxx_destruct;
- (void)cloudCallingDeviceController:(id)arg1 didChangeDevices:(id)arg2;
- (void)setMainSwitchOn:(id)arg1 specifier:(id)arg2;
- (id)isMainSwitchOn:(id)arg1;
- (void)setDeviceSwitchOn:(id)arg1 specifier:(id)arg2;
- (id)isDeviceSwitchOn:(id)arg1;
@property(readonly, nonatomic) PSSpecifier *mainSwitchSpecifier; // @synthesize mainSwitchSpecifier=_mainSwitchSpecifier;
@property(readonly, nonatomic) PSSpecifier *mainGroupSpecifier; // @synthesize mainGroupSpecifier=_mainGroupSpecifier;
@property(readonly, nonatomic) PSSpecifier *devicesGroupSpecifier; // @synthesize devicesGroupSpecifier=_devicesGroupSpecifier;
- (id)specifiers;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

