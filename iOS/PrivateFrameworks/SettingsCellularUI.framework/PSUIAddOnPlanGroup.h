//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CTCellularPlanManager, NSMutableArray, NSString, PSListController, PSSpecifier, PSUICellularPlanManagerCache, TSSIMSetupFlow;

__attribute__((visibility("hidden")))
@interface PSUIAddOnPlanGroup : NSObject
{
    PSUICellularPlanManagerCache *_cellularPlanManager;
    CTCellularPlanManager *_ctCellularPlanManager;
    PSSpecifier *_groupSpecifier;
    NSString *_carrierName;
    NSMutableArray *_remotePlansSpecifiers;
    PSListController *_listController;
    TSSIMSetupFlow *_flow;
}

- (void).cxx_destruct;
@property(retain) TSSIMSetupFlow *flow; // @synthesize flow=_flow;
@property(nonatomic) __weak PSListController *listController; // @synthesize listController=_listController;
- (id)getLogger;
- (void)simSetupFlowCompleted:(unsigned long long)arg1;
- (void)_handleAddRemotePlan:(id)arg1;
- (void)_addButtonPressed:(id)arg1;
- (id)specifiersForRemotePlans;
- (id)specifiers;
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2 planManager:(id)arg3 ctPlanManager:(id)arg4;
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

