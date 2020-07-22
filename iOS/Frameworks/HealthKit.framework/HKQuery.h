//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/HKQueryClientInterface-Protocol.h>

@class HKHealthStore, HKObjectType, HKSampleType, NSPredicate, NSString, NSUUID, _HKFilter;
@protocol HKQueryDelegate, HKQueryServerInterface, OS_dispatch_queue;

@interface HKQuery : NSObject <HKQueryClientInterface>
{
    _Bool _hasBeenExecuted;
    id <HKQueryDelegate> _delegate;
    HKHealthStore *_strongHealthStore;
    _Atomic _Bool _deactivating;
    _Bool _shouldSuppressDataCollection;
    HKObjectType *_objectType;
    NSPredicate *_predicate;
    long long _activationState;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSUUID *_activationUUID;
    id <HKQueryServerInterface> _serverProxy;
    _HKFilter *_filter;
}

+ (id)_cachedInterfaceForProtocol:(id)arg1 configurationHandler:(CDUnknownBlockType)arg2;
+ (id)serverInterface;
+ (id)clientInterface;
+ (void)configureServerInterface:(id)arg1;
+ (void)configureClientInterface:(id)arg1;
+ (id)serverInterfaceProtocol;
+ (id)clientInterfaceProtocol;
+ (_Bool)shouldApplyAdditionalPredicateForObjectType:(id)arg1;
+ (id)predicateForActivitySummariesBetweenStartDateComponents:(id)arg1 endDateComponents:(id)arg2;
+ (id)predicateForActivitySummaryWithDateComponents:(id)arg1;
+ (id)predicateForWorkoutsWithOperatorType:(unsigned long long)arg1 totalFlightsClimbed:(id)arg2;
+ (id)predicateForWorkoutsWithOperatorType:(unsigned long long)arg1 totalSwimmingStrokeCount:(id)arg2;
+ (id)predicateForWorkoutsWithOperatorType:(unsigned long long)arg1 totalDistance:(id)arg2;
+ (id)predicateForWorkoutsWithOperatorType:(unsigned long long)arg1 totalEnergyBurned:(id)arg2;
+ (id)predicateForWorkoutsWithOperatorType:(unsigned long long)arg1 duration:(double)arg2;
+ (id)predicateForWorkoutsWithWorkoutActivityType:(unsigned long long)arg1;
+ (id)predicateForCategorySamplesWithOperatorType:(unsigned long long)arg1 value:(long long)arg2;
+ (id)predicateForQuantitySamplesWithOperatorType:(unsigned long long)arg1 quantity:(id)arg2;
+ (id)predicateForSamplesForDayFromDate:(id)arg1 calendar:(id)arg2 options:(unsigned long long)arg3;
+ (id)predicateForSamplesWithinDateInterval:(id)arg1 options:(unsigned long long)arg2;
+ (id)predicateForSamplesAssociatedWithSample:(id)arg1;
+ (id)predicateForObjectsFromWorkout:(id)arg1;
+ (id)predicateForObjectsWithNoCorrelation;
+ (id)predicateForObjectsWithUUIDs:(id)arg1;
+ (id)predicateForObjectWithUUID:(id)arg1;
+ (id)_predicateForObjectsFromAppleWatches;
+ (id)predicateForObjectsWithDeviceProperty:(id)arg1 allowedValues:(id)arg2;
+ (id)predicateForObjectsFromDevices:(id)arg1;
+ (id)predicateForObjectsFromSourceRevisions:(id)arg1;
+ (id)predicateForObjectsFromSources:(id)arg1;
+ (id)predicateForObjectsFromSource:(id)arg1;
+ (id)predicateForSamplesWithStartDate:(id)arg1 endDate:(id)arg2 inclusiveEndDates:(_Bool)arg3 options:(unsigned long long)arg4;
+ (id)predicateForSamplesWithStartDate:(id)arg1 endDate:(id)arg2 options:(unsigned long long)arg3;
+ (id)predicateForObjectsWithMetadataKey:(id)arg1 operatorType:(unsigned long long)arg2 value:(id)arg3;
+ (id)predicateForObjectsWithMetadataKey:(id)arg1 allowedValues:(id)arg2;
+ (id)predicateForObjectsWithMetadataKey:(id)arg1;
+ (id)predicateForActivityCachesBetweenStartDateComponents:(id)arg1 endDateComponents:(id)arg2;
@property(readonly, nonatomic, getter=_filter) _HKFilter *filter; // @synthesize filter=_filter;
@property(readonly, nonatomic) id <HKQueryServerInterface> serverProxy; // @synthesize serverProxy=_serverProxy;
@property(readonly, nonatomic) NSUUID *activationUUID; // @synthesize activationUUID=_activationUUID;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) long long activationState; // @synthesize activationState=_activationState;
@property(nonatomic) _Bool shouldSuppressDataCollection; // @synthesize shouldSuppressDataCollection=_shouldSuppressDataCollection;
@property(retain) NSPredicate *predicate; // @synthesize predicate=_predicate;
@property(retain) HKObjectType *objectType; // @synthesize objectType=_objectType;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) __weak id <HKQueryDelegate> delegate;
@property(readonly) HKSampleType *sampleType;
- (void)client_deliverError:(id)arg1 forQuery:(id)arg2;
- (void)_queue_deactivateWithError:(id)arg1;
- (void)_queue_activateWithHealthStore:(id)arg1 activationUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)queue_deactivate;
- (void)deactivate;
@property(readonly) _Bool deactivating;
- (void)reactivateWithHealthStore:(id)arg1;
- (void)activateWithClientQueue:(id)arg1 healthStore:(id)arg2 delegate:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)queue_dispatchToClientForUUID:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)_throwInvalidArgumentExceptionIfHasBeenExecuted:(SEL)arg1;
- (void)queue_populateConfiguration:(id)arg1;
- (id)_predicateFilterClasses;
- (_Bool)queue_shouldDeactivateAfterInitialResults;
- (void)queue_queryDidDeactivate:(id)arg1;
- (void)queue_queryDidFinishActivation:(id)arg1 success:(_Bool)arg2 error:(id)arg3;
- (void)queue_validate;
- (void)queue_deliverError:(id)arg1;
- (void)queue_connectToQueryServerWithHealthStore:(id)arg1 activationUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_initWithObjectType:(id)arg1 predicate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
