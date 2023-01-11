//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthToolbox/UIStateRestoring-Protocol.h>

@class HKChartDataCacheController, HKDateCache, HKDisplayCategoryController, HKDisplayTypeController, HKHealthRecordsStore, HKHealthStore, HKManualEntryValidationController, HKSampleTypeDateRangeController, HKSampleTypeUpdateController, HKSelectedTimeScopeController, HKUCUMUnitDisplayConverter, HKUnitPreferenceController, NSString, WDFavoriteDisplayTypesController, WDNotificationManager, WDSourceOrderController, WDUserActivityManager, WDUserDefaults, _HKWheelchairUseCharacteristicCache;
@protocol UIStateRestoring;

@interface WDProfile : NSObject <UIStateRestoring>
{
    WDNotificationManager *_notificationManager;
    HKDateCache *_dateCache;
    HKDisplayCategoryController *_displayCategoryController;
    HKDisplayTypeController *_displayTypeController;
    HKHealthStore *_healthStore;
    HKHealthRecordsStore *_healthRecordsStore;
    HKManualEntryValidationController *_manualEntryValidationController;
    HKSampleTypeDateRangeController *_sampleTypeDateRangeController;
    HKUnitPreferenceController *_unitController;
    HKUCUMUnitDisplayConverter *_ucumDisplayConverter;
    HKChartDataCacheController *_dataCacheController;
    WDFavoriteDisplayTypesController *_favoriteDisplayTypesController;
    HKSelectedTimeScopeController *_selectedTimeScopeController;
    HKSampleTypeUpdateController *_updateController;
    WDSourceOrderController *_sourceOrderController;
    WDUserActivityManager *_userActivityManager;
    WDUserDefaults *_userDefaults;
    _HKWheelchairUseCharacteristicCache *_wheelchairUseCharacteristicCache;
}

@property(readonly, nonatomic) _HKWheelchairUseCharacteristicCache *wheelchairUseCharacteristicCache; // @synthesize wheelchairUseCharacteristicCache=_wheelchairUseCharacteristicCache;
@property(readonly, nonatomic) WDUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(readonly, nonatomic) WDUserActivityManager *userActivityManager; // @synthesize userActivityManager=_userActivityManager;
@property(readonly, nonatomic) WDSourceOrderController *sourceOrderController; // @synthesize sourceOrderController=_sourceOrderController;
@property(readonly, nonatomic) HKSampleTypeUpdateController *updateController; // @synthesize updateController=_updateController;
@property(readonly, nonatomic) HKSelectedTimeScopeController *selectedTimeScopeController; // @synthesize selectedTimeScopeController=_selectedTimeScopeController;
@property(readonly, nonatomic) WDFavoriteDisplayTypesController *favoriteDisplayTypesController; // @synthesize favoriteDisplayTypesController=_favoriteDisplayTypesController;
@property(readonly, nonatomic) HKChartDataCacheController *dataCacheController; // @synthesize dataCacheController=_dataCacheController;
@property(readonly, nonatomic) HKUCUMUnitDisplayConverter *ucumDisplayConverter; // @synthesize ucumDisplayConverter=_ucumDisplayConverter;
@property(readonly, nonatomic) HKUnitPreferenceController *unitController; // @synthesize unitController=_unitController;
@property(readonly, nonatomic) HKSampleTypeDateRangeController *sampleTypeDateRangeController; // @synthesize sampleTypeDateRangeController=_sampleTypeDateRangeController;
@property(readonly, nonatomic) HKManualEntryValidationController *manualEntryValidationController; // @synthesize manualEntryValidationController=_manualEntryValidationController;
@property(readonly, nonatomic) HKHealthRecordsStore *healthRecordsStore; // @synthesize healthRecordsStore=_healthRecordsStore;
@property(readonly, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
@property(readonly, nonatomic) HKDisplayTypeController *displayTypeController; // @synthesize displayTypeController=_displayTypeController;
@property(readonly, nonatomic) HKDisplayCategoryController *displayCategoryController; // @synthesize displayCategoryController=_displayCategoryController;
@property(readonly, nonatomic) HKDateCache *dateCache; // @synthesize dateCache=_dateCache;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *presentationContext;
- (id)_createHealthStore;
@property(readonly, nonatomic) WDNotificationManager *notificationManager; // @synthesize notificationManager=_notificationManager;
- (id)initWithHealthStore:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) Class objectRestorationClass;
@property(readonly, nonatomic) id <UIStateRestoring> restorationParent;
@property(readonly) Class superclass;

@end
