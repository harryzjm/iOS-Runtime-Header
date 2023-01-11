//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PreferencesUI/PSSpecifierGroup-Protocol.h>

@class CTCellularPlanManager, NSString, PSListController, PSSpecifier, PSUICellularPlanManagerCache;

@interface PSUICarrierItemGroup : NSObject <PSSpecifierGroup>
{
    PSUICellularPlanManagerCache *_cellularPlanManager;
    CTCellularPlanManager *_ctCellularPlanManager;
    PSSpecifier *_groupSpecifier;
    PSListController *_listController;
}

@property(nonatomic) __weak PSListController *listController; // @synthesize listController=_listController;
- (void).cxx_destruct;
- (void)carrierItemPressed:(id)arg1;
- (id)specifiersForCarrierItems;
- (_Bool)hasCarrierItems;
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

