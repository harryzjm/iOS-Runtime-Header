//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HKHealthStore, PPSQLDatabase;

@interface PPHealthKitImporter : NSObject
{
    HKHealthStore *_healthStore;
    PPSQLDatabase *_db;
}

+ (id)_workoutTopicMap;
+ (_Bool)_shouldImport;
- (void).cxx_destruct;
- (_Bool)_saveAnchor:(id)arg1;
- (id)_getSavedAnchor;
- (id)_scoredTopicsFromPropertiesOfWorkouts:(id)arg1 workoutTopicMap:(id)arg2;
- (void)_removeDeletedWorkouts:(id)arg1;
- (void)_donateTopics:(id)arg1 workout:(id)arg2;
- (void)_importWorkouts:(id)arg1;
- (void)importHealthKitDataWithShouldContinueBlock:(CDUnknownBlockType)arg1;
- (void)importHealthKitData;
- (id)initWithDatabase:(id)arg1;
- (id)init;

@end
