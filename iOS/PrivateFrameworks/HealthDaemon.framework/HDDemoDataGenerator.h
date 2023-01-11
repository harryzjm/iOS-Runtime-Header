//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HDDemoDataActivitySampleGenerator, HDDemoDataAudioExposureSampleGenerator, HDDemoDataAudiogramSampleGenerator, HDDemoDataBloodSampleGenerator, HDDemoDataBodySampleGenerator, HDDemoDataFoodSampleGenerator, HDDemoDataGeneratorConfiguration, HDDemoDataGeneratorState, HDDemoDataHealthDocumentSampleGenerator, HDDemoDataHeartSampleGenerator, HDDemoDataMindfulnessSampleGenerator, HDDemoDataMobilitySampleGenerator, HDDemoDataOtherAndAdditionalSampleGenerator, HDDemoDataPathologySampleGenerator, HDDemoDataPerson, HDDemoDataReproductiveHealthSampleGenerator, HDDemoDataSleepSampleGenerator, HDDemoDataStatisticsSampleGenerator, HDDemoDataSymptomsSampleGenerator, HDDemoDataVitalsSampleGenerator, HDProfile, NSArray, NSCalendar, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface HDDemoDataGenerator : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_sampleGenerators;
    NSMutableDictionary *_appProvenances;
    HDDemoDataGeneratorState *_generatorState;
    NSCalendar *_gregorianCalendar;
    long long _numHKSamples;
    _Bool _isGeneratingDemoData;
    HDProfile *_profile;
    HDDemoDataPerson *_demoPerson;
    HDDemoDataGeneratorConfiguration *_configuration;
    HDDemoDataActivitySampleGenerator *_activitySampleGenerator;
    HDDemoDataAudioExposureSampleGenerator *_audioExposureSampleGenerator;
    HDDemoDataAudiogramSampleGenerator *_audiogramSampleGenerator;
    HDDemoDataBloodSampleGenerator *_bloodSampleGenerator;
    HDDemoDataBodySampleGenerator *_bodySampleGenerator;
    HDDemoDataFoodSampleGenerator *_foodSampleGenerator;
    HDDemoDataHealthDocumentSampleGenerator *_healthDocumentSampleGenerator;
    HDDemoDataHeartSampleGenerator *_heartSampleGenerator;
    HDDemoDataMindfulnessSampleGenerator *_mindfulnessSampleGenerator;
    HDDemoDataMobilitySampleGenerator *_mobilitySampleGenerator;
    HDDemoDataOtherAndAdditionalSampleGenerator *_otherAndAdditionalSampleGenerator;
    HDDemoDataPathologySampleGenerator *_pathologySampleGenerator;
    HDDemoDataReproductiveHealthSampleGenerator *_reproductiveHealthSampleGenerator;
    HDDemoDataSleepSampleGenerator *_sleepSampleGenerator;
    HDDemoDataStatisticsSampleGenerator *_statisticsSampleGenerator;
    HDDemoDataSymptomsSampleGenerator *_symptomsSampleGenerator;
    HDDemoDataVitalsSampleGenerator *_vitalsSampleGenerator;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) HDDemoDataGeneratorState *generatorState; // @synthesize generatorState=_generatorState;
@property(retain, nonatomic) HDDemoDataVitalsSampleGenerator *vitalsSampleGenerator; // @synthesize vitalsSampleGenerator=_vitalsSampleGenerator;
@property(retain, nonatomic) HDDemoDataSymptomsSampleGenerator *symptomsSampleGenerator; // @synthesize symptomsSampleGenerator=_symptomsSampleGenerator;
@property(retain, nonatomic) HDDemoDataStatisticsSampleGenerator *statisticsSampleGenerator; // @synthesize statisticsSampleGenerator=_statisticsSampleGenerator;
@property(retain, nonatomic) HDDemoDataSleepSampleGenerator *sleepSampleGenerator; // @synthesize sleepSampleGenerator=_sleepSampleGenerator;
@property(retain, nonatomic) HDDemoDataReproductiveHealthSampleGenerator *reproductiveHealthSampleGenerator; // @synthesize reproductiveHealthSampleGenerator=_reproductiveHealthSampleGenerator;
@property(retain, nonatomic) HDDemoDataPathologySampleGenerator *pathologySampleGenerator; // @synthesize pathologySampleGenerator=_pathologySampleGenerator;
@property(retain, nonatomic) HDDemoDataOtherAndAdditionalSampleGenerator *otherAndAdditionalSampleGenerator; // @synthesize otherAndAdditionalSampleGenerator=_otherAndAdditionalSampleGenerator;
@property(retain, nonatomic) HDDemoDataMobilitySampleGenerator *mobilitySampleGenerator; // @synthesize mobilitySampleGenerator=_mobilitySampleGenerator;
@property(retain, nonatomic) HDDemoDataMindfulnessSampleGenerator *mindfulnessSampleGenerator; // @synthesize mindfulnessSampleGenerator=_mindfulnessSampleGenerator;
@property(retain, nonatomic) HDDemoDataHeartSampleGenerator *heartSampleGenerator; // @synthesize heartSampleGenerator=_heartSampleGenerator;
@property(retain, nonatomic) HDDemoDataHealthDocumentSampleGenerator *healthDocumentSampleGenerator; // @synthesize healthDocumentSampleGenerator=_healthDocumentSampleGenerator;
@property(retain, nonatomic) HDDemoDataFoodSampleGenerator *foodSampleGenerator; // @synthesize foodSampleGenerator=_foodSampleGenerator;
@property(retain, nonatomic) HDDemoDataBodySampleGenerator *bodySampleGenerator; // @synthesize bodySampleGenerator=_bodySampleGenerator;
@property(retain, nonatomic) HDDemoDataBloodSampleGenerator *bloodSampleGenerator; // @synthesize bloodSampleGenerator=_bloodSampleGenerator;
@property(retain, nonatomic) HDDemoDataAudiogramSampleGenerator *audiogramSampleGenerator; // @synthesize audiogramSampleGenerator=_audiogramSampleGenerator;
@property(retain, nonatomic) HDDemoDataAudioExposureSampleGenerator *audioExposureSampleGenerator; // @synthesize audioExposureSampleGenerator=_audioExposureSampleGenerator;
@property(retain, nonatomic) HDDemoDataActivitySampleGenerator *activitySampleGenerator; // @synthesize activitySampleGenerator=_activitySampleGenerator;
@property(retain, nonatomic) HDDemoDataGeneratorConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) HDDemoDataPerson *demoPerson; // @synthesize demoPerson=_demoPerson;
@property(readonly, nonatomic) __weak HDProfile *profile; // @synthesize profile=_profile;
- (_Bool)isDemoDataTimeInWeekend:(double)arg1 calendar:(id)arg2;
- (id)currentDateFromCurrentTime:(double)arg1;
- (long long)firstSampleDayOfYear;
- (id)firstSampleDate;
- (id)gregorianCalendar;
- (_Bool)isDifferentDayFromTime:(double)arg1;
- (double)_initialGenerationTimeWithDate:(id)arg1;
- (double)_timeIntervalFromInitialGenerationPeriod:(long long)arg1 currentDate:(id)arg2;
- (_Bool)_queue_unarchiveState;
- (void)_archiveCurrentState;
- (id)_unarchiveDataWithClass:(Class)arg1 error:(id *)arg2;
- (_Bool)_archiveObject:(id)arg1 error:(id *)arg2;
- (id)_keyValueDomain;
- (id)_workoutPrototypesIfEnsureRecentWorkoutHasRouteIsYes;
- (void)_updateWorkoutConfigurationInGeneratorStateWithSampleDate:(id)arg1;
- (id)_watchProvenanceWithPerson:(id)arg1;
- (id)_phoneProveance;
- (id)_appProvenanceWithBundleIdentifier:(id)arg1;
- (id)_appSourceWithBundleIdentifier:(id)arg1;
- (void)_insertIntoDatabaseObjectCollection:(id)arg1 fromPerson:(id)arg2;
- (void)_insertMedicalIDForDemoPerson:(id)arg1;
- (void)_insertBiographicalDataFromDemoPerson:(id)arg1;
- (void)_queue_generateDataForDemoPerson:(id)arg1 numIntervals:(long long)arg2;
- (void)_queue_generateFirstRunDataForDemoPerson:(id)arg1;
- (void)_queue_generateDataForDemoPerson:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 firstRun:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_queue_setupDemoDataSampleGenerators;
- (_Bool)_queue_loadDemoDataSampleGeneratorState;
- (void)_queue_initDemoDataSampleGenerators;
- (void)_queue_runDemoDataGeneratorForDemoPerson:(id)arg1 endDate:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)generateThroughEndDate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithProfile:(id)arg1 configuration:(id)arg2 queue:(id)arg3;
- (id)initWithProfile:(id)arg1 queue:(id)arg2;
- (id)init;

@end
