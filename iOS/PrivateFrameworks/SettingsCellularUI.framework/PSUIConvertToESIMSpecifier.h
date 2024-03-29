//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSSpecifier.h>

@class NSString, PSListController, TSSIMSetupFlow, UINavigationController;

__attribute__((visibility("hidden")))
@interface PSUIConvertToESIMSpecifier : PSSpecifier
{
    TSSIMSetupFlow *_flow;
    NSString *_phoneNumber;
    NSString *_carrierName;
    PSListController *_hostController;
    UINavigationController *_navigationController;
    _Bool _isViewControllerPopNeeded;
    NSString *_iccid;
}

- (void).cxx_destruct;
- (id)getLogger;
- (void)_showWifiAlert;
- (void)_convertToeSIM;
- (void)simSetupFlowCompleted:(unsigned long long)arg1;
- (void)odcCanceled:(id)arg1;
- (void)odcFailed:(id)arg1;
- (void)odcSuccess:(id)arg1 isViewControllerPopNeeded:(_Bool)arg2;
- (void)convertToeSIMCellPressed:(id)arg1;
- (void)dealloc;
- (id)initWithPhoneNumber:(id)arg1 carrierName:(id)arg2 hostController:(id)arg3 isViewControllerPopNeeded:(_Bool)arg4 iccid:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

