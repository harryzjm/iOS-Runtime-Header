//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSSpecifier.h>

@class NSArray, PSListController, PSSimStatusCache, PSUICellularDataListItemsController, PSUICellularPlanManagerCache, PSUICoreTelephonyCallCache, PSUICoreTelephonyDataCache, PSUIDeviceWiFiState;

__attribute__((visibility("hidden")))
@interface PSUICellularDataSpecifier : PSSpecifier
{
    PSUICellularDataListItemsController *_detailController;
    PSListController *_hostController;
    PSSimStatusCache *_simStatusCache;
    PSUICellularPlanManagerCache *_planManagerCache;
    PSUICoreTelephonyDataCache *_dataCache;
    PSUICoreTelephonyCallCache *_callCache;
    PSUIDeviceWiFiState *_wifiState;
    NSArray *_cachedPlanItems;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *cachedPlanItems; // @synthesize cachedPlanItems=_cachedPlanItems;
@property(retain, nonatomic) PSUIDeviceWiFiState *wifiState; // @synthesize wifiState=_wifiState;
@property(retain, nonatomic) PSUICoreTelephonyCallCache *callCache; // @synthesize callCache=_callCache;
@property(retain, nonatomic) PSUICoreTelephonyDataCache *dataCache; // @synthesize dataCache=_dataCache;
@property(retain, nonatomic) PSUICellularPlanManagerCache *planManagerCache; // @synthesize planManagerCache=_planManagerCache;
@property(retain, nonatomic) PSSimStatusCache *simStatusCache; // @synthesize simStatusCache=_simStatusCache;
@property(nonatomic) __weak PSListController *hostController; // @synthesize hostController=_hostController;
@property(nonatomic) __weak PSUICellularDataListItemsController *detailController; // @synthesize detailController=_detailController;
- (id)getLogger;
- (void)canceledDataSwitch:(id)arg1;
- (id)callEndConfirmationSpecifier;
- (id)subscriptionContextForListItem:(id)arg1;
- (id)planItemForListItem:(id)arg1;
- (void)_setCellularDataSwitch:(id)arg1;
- (void)_acceptedDataSwitch:(id)arg1;
- (void)_setCellularDataEnabled:(id)arg1 specifier:(id)arg2;
- (id)_isCellularDataEnabled:(id)arg1;
- (void)setCellularDataSwitch:(_Bool)arg1;
- (void)acceptedDataSwitch:(id)arg1;
- (void)setCellularDataEnabled:(id)arg1 specifier:(id)arg2;
- (id)isCellularDataEnabled:(id)arg1;
- (void)setAirplaneMode:(_Bool)arg1;
- (_Bool)isDetailControllerNeeded;
- (void)updateCachedState;
- (id)initWithHostController:(id)arg1 simStatusCache:(id)arg2 planManagerCache:(id)arg3 callCache:(id)arg4 dataCache:(id)arg5 wifiState:(id)arg6;
- (id)initWithHostController:(id)arg1;

@end

