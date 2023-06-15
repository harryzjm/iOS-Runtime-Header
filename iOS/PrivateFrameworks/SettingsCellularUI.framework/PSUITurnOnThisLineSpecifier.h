//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSSpecifier.h>

@class CTCellularPlanManager, CXCallObserver, NSString, PSListController, PSUICellularPlanManagerCache, PSUICellularPlanUniversalReference, PSUICoreTelephonyCallCache;

__attribute__((visibility("hidden")))
@interface PSUITurnOnThisLineSpecifier : PSSpecifier
{
    PSUICellularPlanUniversalReference *_planReference;
    CTCellularPlanManager *_cellularPlanManager;
    PSUICellularPlanManagerCache *_planManagerCache;
    PSUICoreTelephonyCallCache *_callCache;
    PSListController *_hostController;
    CXCallObserver *_callObserver;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CXCallObserver *callObserver; // @synthesize callObserver=_callObserver;
@property(nonatomic) __weak PSListController *hostController; // @synthesize hostController=_hostController;
@property(retain, nonatomic) PSUICoreTelephonyCallCache *callCache; // @synthesize callCache=_callCache;
@property(retain, nonatomic) PSUICellularPlanManagerCache *planManagerCache; // @synthesize planManagerCache=_planManagerCache;
@property(retain, nonatomic) CTCellularPlanManager *cellularPlanManager; // @synthesize cellularPlanManager=_cellularPlanManager;
@property(retain, nonatomic) PSUICellularPlanUniversalReference *planReference; // @synthesize planReference=_planReference;
- (id)getLogger;
- (void)_useLine:(_Bool)arg1 forPlan:(id)arg2;
- (void)_turnItOff;
- (void)_showPromptFor:(id)arg1;
- (id)_getAlertMessage:(id)arg1 onPad:(_Bool)arg2;
- (void)callObserver:(id)arg1 callChanged:(id)arg2;
- (void)setPlanEnabled:(id)arg1 specifier:(id)arg2;
- (_Bool)isPlanStatusActivatingPostinstall:(id)arg1;
- (_Bool)isTransferredPlan:(id)arg1;
- (id)isPlanEnabled:(id)arg1;
- (void)setSwitchEnabled;
- (id)initWithPlanUniversalReference:(id)arg1 cellularPlanManager:(id)arg2 planManagerCache:(id)arg3 callCache:(id)arg4 hostController:(id)arg5 isActivating:(_Bool)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

