//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CTCellularPlanManager, CTServiceDescriptor, CTXPCServiceSubscriptionContext, PSListController, PSSimStatusCache, PSSpecifier, PSUICallingSubgroup, PSUICarrierSpaceGroup, PSUICellularPlanManagerCache, PSUICoreTelephonyCallCache, PSUICoreTelephonyCarrierBundleCache, PSUICoreTelephonyDataCache, PSUIDataModeSubgroup, PSUIDevicePasscodeState, PSUIMyNumberSubgroup, PSUINetworkSelectionSubgroup, PSUINetworkSettingsSubgroup, PSUIRoamingSpecifiersSubgroup, PSUISIMSubgroup;

@protocol PSUISubscriptionContextMenusFactory
- (PSUIRoamingSpecifiersSubgroup *)createRoamingSpecifiersSubgroupWithServiceDescriptor:(CTServiceDescriptor *)arg1;
- (PSUIDataModeSubgroup *)createDataModeSubgroupWithContext:(CTXPCServiceSubscriptionContext *)arg1;
- (PSUIDevicePasscodeState *)createPasscodeStatusCache;
- (CTCellularPlanManager *)createCellularPlanManager;
- (PSUICellularPlanManagerCache *)createCellularPlanManagerCache;
- (PSUICoreTelephonyDataCache *)createDataCache;
- (PSUICoreTelephonyCarrierBundleCache *)createCarrierBundleCache;
- (PSSimStatusCache *)createSimStatusCache;
- (PSUICoreTelephonyCallCache *)createCallCache;
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

