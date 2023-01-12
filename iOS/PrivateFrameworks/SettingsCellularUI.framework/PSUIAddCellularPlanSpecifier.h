//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSSpecifier.h>

#import <SettingsCellularUI/TSSIMSetupDelegate-Protocol.h>

@class CTCellularPlanManager, Logger, NSString, PSListController, TSSIMSetupFlow, UIActivityIndicatorView;

__attribute__((visibility("hidden")))
@interface PSUIAddCellularPlanSpecifier : PSSpecifier <TSSIMSetupDelegate>
{
    CTCellularPlanManager *_planManager;
    Logger *_logger;
    id _originAccessoryView;
    UIActivityIndicatorView *_spinner;
    PSListController *_hostController;
    TSSIMSetupFlow *_flow;
}

- (void).cxx_destruct;
@property(retain) TSSIMSetupFlow *flow; // @synthesize flow=_flow;
@property(nonatomic) __weak PSListController *hostController; // @synthesize hostController=_hostController;
- (id)getLogger;
- (void)setProperty:(id)arg1 forKey:(id)arg2;
- (void)showSpinner:(_Bool)arg1;
- (long long)userConsentResponse;
- (void)simSetupFlowCompleted:(unsigned long long)arg1;
- (void)addCellularPlanCellPressed:(id)arg1;
- (id)initWithHostController:(id)arg1 isEmbeddedInCarrierList:(_Bool)arg2 planManager:(id)arg3;
- (id)initWithHostController:(id)arg1 isEmbeddedInCarrierList:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
