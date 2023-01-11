//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SettingsCellularUI/PSSpecifierGroup-Protocol.h>
#import <SettingsCellularUI/TSSIMSetupDelegate-Protocol.h>

@class CTCellularPlanManager, NSString, PSListController, PSSpecifier, TSSIMSetupFlow, UINavigationController;

__attribute__((visibility("hidden")))
@interface PSUIPlanPendingTransferMenusGroup : NSObject <TSSIMSetupDelegate, PSSpecifierGroup>
{
    PSSpecifier *_parentSpecifier;
    PSSpecifier *_groupSpecifier;
    PSListController *_listController;
    UINavigationController *_navigationController;
    CTCellularPlanManager *_cellularPlanManager;
    TSSIMSetupFlow *_flow;
}

@property(retain) TSSIMSetupFlow *flow; // @synthesize flow=_flow;
@property(retain, nonatomic) CTCellularPlanManager *cellularPlanManager; // @synthesize cellularPlanManager=_cellularPlanManager;
@property(nonatomic) __weak UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(nonatomic) __weak PSListController *listController; // @synthesize listController=_listController;
@property(nonatomic) __weak PSSpecifier *groupSpecifier; // @synthesize groupSpecifier=_groupSpecifier;
@property(retain, nonatomic) PSSpecifier *parentSpecifier; // @synthesize parentSpecifier=_parentSpecifier;
- (void).cxx_destruct;
- (id)planPendingTransferNumber:(id)arg1;
- (id)planPendingTransferLabel:(id)arg1;
- (void)removePlanPendingTransfer:(id)arg1;
- (void)simSetupFlowCompleted;
- (void)launchWebSheetWithURL:(id)arg1 andRequestBody:(id)arg2;
- (void)activatePlanPendingTransfer:(id)arg1;
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2;
- (id)specifiers;
- (id)initWithHostController:(id)arg1 parentSpecifier:(id)arg2 groupSpecifier:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
