//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HKHealthStore, NSDictionary, NSMutableDictionary;

@interface HKUnitPreferenceController : NSObject
{
    NSMutableDictionary *_unitStrings;
    HKHealthStore *_healthStore;
    NSDictionary *_unitPreferencesByObjectType;
}

- (void).cxx_destruct;
- (id)displayRangeForDisplayType:(id)arg1;
- (id)_longDisplayNameForUnit:(id)arg1;
- (id)_displayNameKeyForUnit:(id)arg1;
- (id)_displayNameKeyForDisplayType:(id)arg1 withNumber:(_Bool)arg2;
- (id)_displayNameKey:(id)arg1 withNumber:(_Bool)arg2;
- (id)_changedKeysBetweenDictionary:(id)arg1 andDictionary:(id)arg2;
- (void)_postNotificationWithChangedKeys:(id)arg1;
- (void)_updateHKUnitPreferences:(id)arg1;
- (void)_refreshHKUnitPreferencesWithCompletion:(CDUnknownBlockType)arg1;
- (id)_generateDefaultHKUnitPreferences;
- (void)_fetchHKUnitPreferencesWithAttempt:(long long)arg1;
- (void)_initHKUnitPreferences;
- (void)_unitPreferencesDidUpdate:(id)arg1;
- (void)_localeDidChange:(id)arg1;
- (double)scaleFactorForYAxisLabeling:(id)arg1;
- (void)updatePreferredUnit:(id)arg1 forDisplayType:(id)arg2;
- (id)_longDisplayNameOverrideForDisplayType:(id)arg1;
- (id)localizedLongDisplayNameForDisplayType:(id)arg1;
- (id)localizedDisplayNameForUnit:(id)arg1 value:(id)arg2;
- (id)localizedDisplayNameForDisplayType:(id)arg1 value:(id)arg2;
- (id)localizedDisplayNameForDisplayType:(id)arg1;
- (id)localizedHealthUIStringForDisplayType:(id)arg1 key:(id)arg2 value:(id)arg3;
- (id)unitForDisplayType:(id)arg1;
- (void)dealloc;
- (id)initWithHealthStore:(id)arg1;

@end

