//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, WeatherPreferences;
@protocol SynchronizedDefaultsDelegate, WeatherPreferencesPersistence;

__attribute__((visibility("hidden")))
@interface WeatherCloudPreferences : NSObject
{
    id <WeatherPreferencesPersistence> _cloudStore;
    id <SynchronizedDefaultsDelegate> _syncDelegate;
    WeatherPreferences *_localPreferences;
}

- (void).cxx_destruct;
@property(retain) WeatherPreferences *localPreferences; // @synthesize localPreferences=_localPreferences;
@property(nonatomic) __weak id <SynchronizedDefaultsDelegate> syncDelegate; // @synthesize syncDelegate=_syncDelegate;
@property(retain, nonatomic) id <WeatherPreferencesPersistence> cloudStore; // @synthesize cloudStore=_cloudStore;
- (_Bool)shouldWriteCitiesToCloud:(id)arg1;
- (void)saveCitiesToCloud:(id)arg1;
- (void)setCloudStoreCities:(id)arg1;
- (void)_synchronize:(_Bool)arg1;
- (void)cloudPersistenceDidSynchronize:(id)arg1;
- (void)forceSync;
- (id)prepareLocalCitiesForReconciliation:(id)arg1 isInitialSync:(_Bool)arg2;
- (id)reconcileCloudCities:(id)arg1 withLocal:(id)arg2 isInitialSync:(_Bool)arg3;
- (void)updateLocalStoreWithRemoteChanges:(id)arg1;
- (void)cloudCitiesChangedExternally:(id)arg1;
- (_Bool)areCloudCities:(id)arg1 equalToLocalCities:(id)arg2;
- (id)citiesByEnforcingSizeLimitOnResults:(id)arg1;
- (id)cloudRepresentationFromCities:(id)arg1;
- (void)purgeLegacyCloudCities;
- (id)initWithLocalPreferences:(id)arg1 persistence:(id)arg2;
- (id)initWithLocalPreferences:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

