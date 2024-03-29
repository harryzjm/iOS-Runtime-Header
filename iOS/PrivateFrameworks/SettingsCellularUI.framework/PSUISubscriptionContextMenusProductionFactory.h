//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PSListController, PSSpecifier;

__attribute__((visibility("hidden")))
@interface PSUISubscriptionContextMenusProductionFactory : NSObject
{
    _Bool _popViewControllerOnPlanRemoval;
    PSListController *_hostController;
    PSSpecifier *_parentSpecifier;
    PSSpecifier *_groupSpecifier;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool popViewControllerOnPlanRemoval; // @synthesize popViewControllerOnPlanRemoval=_popViewControllerOnPlanRemoval;
@property(nonatomic) __weak PSSpecifier *groupSpecifier; // @synthesize groupSpecifier=_groupSpecifier;
@property(nonatomic) __weak PSSpecifier *parentSpecifier; // @synthesize parentSpecifier=_parentSpecifier;
@property(nonatomic) __weak PSListController *hostController; // @synthesize hostController=_hostController;
- (id)createRoamingSpecifiersSubgroupWithServiceDescriptor:(id)arg1;
- (id)createDataModeSubgroupWithContext:(id)arg1;
- (id)createPasscodeStatusCache;
- (id)createCellularPlanManager;
- (id)createCellularPlanManagerCache;
- (id)createDataCache;
- (id)createCarrierBundleCache;
- (id)createSimStatusCache;
- (id)createCallCache;
- (id)createSimSubgroup;
- (id)createNetworkSettingsSubgroup;
- (id)createMyNumberSubgroup;
- (id)createNetworkSelectionSubgroup;
- (id)createCarrierSpaceSubgroup;
- (id)createCallingSubgroup;
- (_Bool)shouldPopViewControllerOnPlanRemoval;
- (id)initWithHostController:(id)arg1 parentSpecifier:(id)arg2 groupSpecifier:(id)arg3 popViewControllerOnPlanRemoval:(_Bool)arg4;

@end

