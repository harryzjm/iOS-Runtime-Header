//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CTCellularPlanManager, CTCellularPlanPendingTransfer, NSString, PSListController, PSSpecifier, PSUICellularPlanManagerCache;

__attribute__((visibility("hidden")))
@interface PSUIPlanPendingTransferMenusGroup : NSObject
{
    PSSpecifier *_parentSpecifier;
    CTCellularPlanPendingTransfer *_planPendingTransfer;
    PSSpecifier *_groupSpecifier;
    PSListController *_listController;
    CTCellularPlanManager *_cellularPlanManager;
    PSUICellularPlanManagerCache *_planManagerCache;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PSUICellularPlanManagerCache *planManagerCache; // @synthesize planManagerCache=_planManagerCache;
@property(retain, nonatomic) CTCellularPlanManager *cellularPlanManager; // @synthesize cellularPlanManager=_cellularPlanManager;
@property(nonatomic) __weak PSListController *listController; // @synthesize listController=_listController;
@property(nonatomic) __weak PSSpecifier *groupSpecifier; // @synthesize groupSpecifier=_groupSpecifier;
@property(retain, nonatomic) CTCellularPlanPendingTransfer *planPendingTransfer; // @synthesize planPendingTransfer=_planPendingTransfer;
@property(retain, nonatomic) PSSpecifier *parentSpecifier; // @synthesize parentSpecifier=_parentSpecifier;
- (id)getLogger;
- (void)addSpecifierForHeaderString:(id)arg1;
- (id)cancelConsentRequestSpecifier;
- (id)activatePlanSpecifier;
- (id)planActivationInfo;
- (id)planPendingTransferNumber:(id)arg1;
- (id)planPendingTransferLabel:(id)arg1;
- (void)removePlanPendingTransfer:(id)arg1;
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2;
- (id)specifiers;
- (id)initWithHostController:(id)arg1 parentSpecifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

