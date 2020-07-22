//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class RTRoutineManager;

@interface PSUILocationSystemServicesListController
{
    RTRoutineManager *_routineManager;
}

+ (id)locationBasedAlertBundlesForSystemVersion:(id)arg1;
@property(retain, nonatomic) RTRoutineManager *routineManager; // @synthesize routineManager=_routineManager;
- (void).cxx_destruct;
- (id)specifiers;
- (void)_performConsistencyCheck;
- (id)_areLocationBasedAlertsAuthorized;
- (void)_setLocationBasedAlertsAuthorized:(id)arg1;
- (void)_showAddressCorrectionPage;
- (void)_setAddressCorrectionAuthorizationStatus:(id)arg1 specifier:(id)arg2;
- (id)_readAddressCorrectionAuthorizationStatus:(id)arg1;
- (id)_productImprovementByBundlePath;
- (id)_locationBasedAlertBundles;
- (id)coreRoutineEnabledStatus:(id)arg1;
- (void)setStatusEnabled:(id)arg1 specifier:(id)arg2;
- (id)isStatusEnabled:(id)arg1;
- (void)stopLocationStatusUpdates;
- (void)startLocationStatusUpdates;
- (id)init;

@end

