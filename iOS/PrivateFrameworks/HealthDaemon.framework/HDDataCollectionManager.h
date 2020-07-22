//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDDiagnosticObject-Protocol.h>
#import <HealthDaemon/HDHealthDaemonReadyObserver-Protocol.h>

@class HDBTLEHeartRateDataCollector, HDDemoManager, HDProfile, NSDate, NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface HDDataCollectionManager : NSObject <HDDiagnosticObject, HDHealthDaemonReadyObserver>
{
    NSDate *_lastLaunchUpdate;
    NSMutableDictionary *_dataAggregatorsByType;
    NSMutableArray *_builtinCollectors;
    HDProfile *_profile;
    NSMutableDictionary *_dataCollectorsByType;
    NSMutableDictionary *_observersByType;
    HDBTLEHeartRateDataCollector *_blteHeartRateDataCollector;
    NSObject<OS_dispatch_queue> *_queue;
    HDDemoManager *_demoManager;
}

@property(retain, nonatomic) HDDemoManager *demoManager; // @synthesize demoManager=_demoManager;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) HDBTLEHeartRateDataCollector *blteHeartRateDataCollector; // @synthesize blteHeartRateDataCollector=_blteHeartRateDataCollector;
@property(retain, nonatomic) NSMutableDictionary *observersByType; // @synthesize observersByType=_observersByType;
@property(retain, nonatomic) NSMutableDictionary *dataCollectorsByType; // @synthesize dataCollectorsByType=_dataCollectorsByType;
@property(readonly, nonatomic) __weak HDProfile *profile; // @synthesize profile=_profile;
- (void).cxx_destruct;
- (id)diagnosticDescription;
- (id)_dataCollectorsDiagnosticDescription;
- (id)_observersDescription;
- (void)addDataCollector:(id)arg1;
- (void)generateFakeDataForActivityType:(long long)arg1 minutes:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)stopFakingData;
- (void)startFakingWithHKWorkoutActivityType:(unsigned long long)arg1;
- (void)startFakingDataWithActivityType:(long long)arg1 speed:(id)arg2;
- (id)_queue_demoManagerCreatingIfNecessary;
- (_Bool)_queue_dataReceived:(id)arg1 provenance:(id)arg2 isDemoData:(_Bool)arg3 error:(id *)arg4;
- (void)sensorDataArrayReceived:(id)arg1 deviceEntity:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)sensorDataReceived:(id)arg1 deviceEntity:(id)arg2;
- (void)_updateDataCollectorsWithPrivacySettings;
- (id)pluginDataCollectors;
- (void)_queue_setupUnprotectedDataDependantState;
- (void)daemonReady:(id)arg1;
- (void)_queue_addDataCollector:(id)arg1;
- (void)_queue_alertCollectorsOfTypesWithObservers;
- (void)stopDataCollectionForType:(id)arg1 observer:(id)arg2;
- (void)startDataCollectionForType:(id)arg1 observer:(id)arg2 collectionInterval:(double)arg3;
- (double)_queue_defaultCollectionIntervalForType:(id)arg1;
- (void)_queue_adjustDataCollectionForType:(id)arg1 block:(CDUnknownBlockType)arg2;
- (CDStruct_0714bc26)_queue_collectionStateForType:(id)arg1;
- (id)_queue_observerMapForType:(id)arg1;
- (void)immediateUpdateForType:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (double)defaultCollectionIntervalForType:(id)arg1;
- (void)updateCollectionInterval:(double)arg1 type:(id)arg2 observer:(id)arg3;
- (void)dataCollectionObserver:(id)arg1 didChangeState:(id)arg2;
- (void)removeDataCollectionObserver:(id)arg1;
- (void)removeDataCollectionObserver:(id)arg1 type:(id)arg2;
- (void)addDataCollectionObserver:(id)arg1 type:(id)arg2 collectionInterval:(double)arg3 state:(id)arg4;
- (id)btleHeartRateDataCollector;
- (void)_queue_createBuiltinCollectors;
- (id)_queue_aggregatorForType:(id)arg1;
- (Class)_aggregatorClassForObjectType:(id)arg1;
- (id)aggregatorForType:(id)arg1;
- (void)_demoObjectsReceived:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)periodicUpdate;
- (void)dealloc;
- (id)initWithProfile:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

