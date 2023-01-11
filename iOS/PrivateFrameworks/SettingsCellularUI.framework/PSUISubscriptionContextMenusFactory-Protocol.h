//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CTCellularPlanManager, PSListController, PSSimStatusCache, PSSpecifier, PSUICallingSubgroup, PSUICarrierSpaceGroup, PSUICellularPlanManagerCache, PSUICoreTelephonyCarrierBundleCache, PSUICoreTelephonyDataCache, PSUILowDataModeSubgroup, PSUIMyNumberSubgroup, PSUINetworkSelectionSubgroup, PSUINetworkSettingsSubgroup, PSUISIMSubgroup;

@protocol PSUISubscriptionContextMenusFactory
- (PSUILowDataModeSubgroup *)createLowDataModeSubgroup;
- (CTCellularPlanManager *)createCellularPlanManager;
- (PSUICellularPlanManagerCache *)createCellularPlanManagerCache;
- (PSUICoreTelephonyDataCache *)createDataCache;
- (PSUICoreTelephonyCarrierBundleCache *)createCarrierBundleCache;
- (PSSimStatusCache *)createSimStatusCache;
- (PSUISIMSubgroup *)createSimSubgroup;
- (PSUINetworkSettingsSubgroup *)createNetworkSettingsSubgroup;
- (PSUIMyNumberSubgroup *)createMyNumberSubgroup;
- (PSUINetworkSelectionSubgroup *)createNetworkSelectionSubgroup;
- (PSUICarrierSpaceGroup *)createCarrierSpaceSubgroup;
- (PSUICallingSubgroup *)createCallingSubgroup;
- (_Bool)shouldPopViewControllerOnPlanRemoval;
- (PSSpecifier *)parentSpecifier;
- (PSSpecifier *)groupSpecifier;
- (PSListController *)hostController;
@end
