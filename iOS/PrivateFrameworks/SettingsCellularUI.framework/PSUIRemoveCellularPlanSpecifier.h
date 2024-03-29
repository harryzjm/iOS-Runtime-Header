//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSConfirmationSpecifier.h>

@class CTCellularPlanManager, PSListController, PSUICellularPlanManagerCache, PSUICellularPlanUniversalReference;

__attribute__((visibility("hidden")))
@interface PSUIRemoveCellularPlanSpecifier : PSConfirmationSpecifier
{
    _Bool _popViewControllerOnPlanDeletion;
    PSUICellularPlanUniversalReference *_planReference;
    CTCellularPlanManager *_cellularPlanManager;
    PSUICellularPlanManagerCache *_planManagerCache;
    PSListController *_hostController;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool popViewControllerOnPlanDeletion; // @synthesize popViewControllerOnPlanDeletion=_popViewControllerOnPlanDeletion;
@property(nonatomic) __weak PSListController *hostController; // @synthesize hostController=_hostController;
@property(retain, nonatomic) PSUICellularPlanManagerCache *planManagerCache; // @synthesize planManagerCache=_planManagerCache;
@property(retain, nonatomic) CTCellularPlanManager *cellularPlanManager; // @synthesize cellularPlanManager=_cellularPlanManager;
@property(retain, nonatomic) PSUICellularPlanUniversalReference *planReference; // @synthesize planReference=_planReference;
- (id)getLogger;
- (void)remap:(id)arg1 to:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showRemapFor:(id)arg1 withList:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)prepareToShowRemap:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_didRemoveSessionComplete;
- (void)removeCellularPlanConfirmed:(id)arg1;
- (void)removeCellularPlan:(id)arg1;
- (void)alignLeft;
- (id)initWithPlanUniversalReference:(id)arg1 cellularPlanManager:(id)arg2 planManagerCache:(id)arg3 hostController:(id)arg4 popViewControllerOnPlanDeletion:(_Bool)arg5;

@end

