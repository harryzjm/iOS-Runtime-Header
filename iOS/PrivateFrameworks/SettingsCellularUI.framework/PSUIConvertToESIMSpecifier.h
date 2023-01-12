//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSSpecifier.h>

#import <SettingsCellularUI/TSSIMSetupDelegate-Protocol.h>

@class Logger, NSString, PSListController, TSSIMSetupFlow;

__attribute__((visibility("hidden")))
@interface PSUIConvertToESIMSpecifier : PSSpecifier <TSSIMSetupDelegate>
{
    Logger *_logger;
    TSSIMSetupFlow *_flow;
    NSString *_phoneNumber;
    NSString *_carrierName;
    PSListController *_hostController;
    _Bool _isViewControllerPopNeeded;
}

- (void).cxx_destruct;
- (id)getLogger;
- (void)_showWifiAlert;
- (void)_convertToeSIM;
- (void)simSetupFlowCompleted:(unsigned long long)arg1;
- (void)convertToeSIMCellPressed:(id)arg1;
- (void)dealloc;
- (id)initWithPhoneNumber:(id)arg1 carrierName:(id)arg2 hostController:(id)arg3 isViewControllerPopNeeded:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
