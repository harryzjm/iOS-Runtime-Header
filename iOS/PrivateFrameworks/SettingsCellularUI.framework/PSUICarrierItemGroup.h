//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CTCellularPlanManager, NSString, PSListController, PSSpecifier, PSUIAddCellularPlanSpecifier, PSUICellularPlanManagerCache;

__attribute__((visibility("hidden")))
@interface PSUICarrierItemGroup : NSObject
{
    PSUICellularPlanManagerCache *_cellularPlanManagerCache;
    CTCellularPlanManager *_ctCellularPlanManager;
    PSUIAddCellularPlanSpecifier *_addCellularPlanSpecifierEmbedded;
    PSUIAddCellularPlanSpecifier *_addCellularPlanSpecifierStandard;
    PSSpecifier *_groupSpecifier;
    PSListController *_listController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak PSListController *listController; // @synthesize listController=_listController;
@property(retain, nonatomic) PSSpecifier *groupSpecifier; // @synthesize groupSpecifier=_groupSpecifier;
- (id)getLogger;
- (void)carrierItemPressed:(id)arg1;
- (id)specifiersForCarrierItems;
- (_Bool)hasCarrierItems;
- (id)getAddCellularPlanSpecifier:(_Bool)arg1;
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

