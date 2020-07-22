//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class RTLearnedLocationManager, RTLocationManager, RTLocationTagger, RTVisitManager;

@interface RTDataProviderLocation
{
    RTLearnedLocationManager *_learnedLocationManager;
    RTLocationManager *_locationManager;
    RTLocationTagger *_locationTagger;
    RTVisitManager *_visitManager;
}

@property(retain, nonatomic) RTVisitManager *visitManager; // @synthesize visitManager=_visitManager;
@property(retain, nonatomic) RTLocationTagger *locationTagger; // @synthesize locationTagger=_locationTagger;
@property(retain, nonatomic) RTLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(retain, nonatomic) RTLearnedLocationManager *learnedLocationManager; // @synthesize learnedLocationManager=_learnedLocationManager;
- (void).cxx_destruct;
- (id)supportedEventClasses;
- (void)populateDataProviderWithHandler:(CDUnknownBlockType)arg1;
- (id)supportedEventStreams;
- (void)fetchCurrentLocationWithHandler:(CDUnknownBlockType)arg1;
- (void)_processMicroLocationUpdate:(id)arg1;
- (void)_processLowConfidenceVisit:(id)arg1;
- (void)onMicroLocationUpdate:(id)arg1;
- (void)onLowConfidenceVisitNotification:(id)arg1;
- (void)onVisitManagerAvailable:(id)arg1;
- (void)_fetchLowConfidenceVisitIncident;
- (void)internalRemoveObserver:(id)arg1 name:(id)arg2;
- (void)internalAddObserver:(id)arg1 name:(id)arg2;
- (void)_unregisterForMicroLocationNotifications;
- (void)_registerForMicroLocationNotifications;
- (void)_unregisterForVisitNotifications;
- (void)_registerForVisitNotifications;
- (void)shutdown;
- (id)initWithPurgeManager:(id)arg1 locationTagger:(id)arg2 defaultsManager:(id)arg3 locationManager:(id)arg4 visitManager:(id)arg5 learnedLocationManager:(id)arg6;
- (id)init;

@end
