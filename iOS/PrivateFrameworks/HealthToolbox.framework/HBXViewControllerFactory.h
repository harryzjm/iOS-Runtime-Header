//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HBXUnitSupport, HKHealthChartFactory, WDProfile;

@interface HBXViewControllerFactory : NSObject
{
    HKHealthChartFactory *_chartFactory;
    WDProfile *_profile;
    HBXUnitSupport *_unitSupport;
}

+ (id)sharedInstanceForHealthStore:(id)arg1;
+ (id)sharedInstance;
+ (id)factories;
+ (struct os_unfair_recursive_lock_s)factoriesLock;
- (void).cxx_destruct;
@property(retain, nonatomic) HBXUnitSupport *unitSupport; // @synthesize unitSupport=_unitSupport;
@property(retain, nonatomic) WDProfile *profile; // @synthesize profile=_profile;
@property(retain, nonatomic) HKHealthChartFactory *chartFactory; // @synthesize chartFactory=_chartFactory;
- (id)unitStringForType:(id)arg1;
- (void)fetchUserDefaultForKey:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (id)localizedUnitDisplayNameForDisplayType:(id)arg1;
- (void)updatePreferredUnit:(id)arg1 forType:(id)arg2;
- (id)preferredUnitForType:(id)arg1;
- (id)localizedPreferredUnitDisplayNameForType:(id)arg1 nameContext:(long long)arg2;
- (id)localizedPreferredUnitDisplayNameForType:(id)arg1;
- (id)localizedDisplayNameForUnit:(id)arg1;
- (id)createHKUnitPreferenceController;
- (void)createAndStartExportForViewController:(id)arg1;
- (id)createDataSourcesTableViewController:(id)arg1;
- (id)createListViewController:(id)arg1;
- (id)createElectrocardiogramDataMetadataViewControllerWithElectrocardiogram:(id)arg1 dataProvider:(id)arg2;
- (id)createElectrocardiogramListDataProvider;
- (id)createUnitPreferencesController:(id)arg1;
- (id)createDetailViewControllerForType:(id)arg1 displayDate:(id)arg2;
- (id)createDetailViewControllerForType:(id)arg1;
- (id)createActivityChartForActivityMoveMode:(long long)arg1 displayDate:(id)arg2;
- (id)createActivityChart:(id)arg1;
- (id)createInteractiveChartForType:(id)arg1 preferredOverlay:(long long)arg2 displayDateInterval:(id)arg3;
- (id)createInteractiveChartForType:(id)arg1 preferredOverlay:(long long)arg2 displayDate:(id)arg3;
- (id)createChartForTypeIdentifier:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 minimumSize:(struct CGSize)arg4 disableXAxis:(_Bool)arg5;
- (id)createDeletedSourceMessageViewControllerForSource:(id)arg1;
- (id)createResearchStudySourcesViewControllerUsingInsetStyling:(_Bool)arg1 restorationStudyBundleIdentifier:(id)arg2;
- (id)createContactConsolidationControllerInViewController:(id)arg1;
- (id)createDeviceStoredDataViewControllerForDevice:(id)arg1 withHealthStore:(id)arg2 usingInsetStyling:(_Bool)arg3;
- (id)createLocalDeviceStoredDataViewControllerForSource:(id)arg1 withHealthStore:(id)arg2 usingInsetStyling:(_Bool)arg3;
- (id)createWatchStoredDataViewControllerForSource:(id)arg1 withHealthStore:(id)arg2 usingInsetStyling:(_Bool)arg3;
- (id)detailViewControllerForSourceModel:(id)arg1 withHealthStore:(id)arg2;
- (id)createDeviceSourcesViewControllerUsingInsetStyling:(_Bool)arg1;
- (id)createSingleAppAuthorizationViewControllerUsingInsetStyling:(_Bool)arg1 restorationApplicationBundleIdentifier:(id)arg2;
- (id)createAppSourcesViewControllerUsingInsetStyling:(_Bool)arg1;
- (id)createSourcesViewControllerUsingInsetStyling:(_Bool)arg1;
- (id)createBuddyViewController;
- (id)createFavoritesController;
- (id)notificationManager;
- (id)initWithHealthStore:(id)arg1;
- (id)init;

@end
