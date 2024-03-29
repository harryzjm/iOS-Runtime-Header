//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HKDisplayType, HKUnitPreferenceController, NSMutableArray, NSMutableSet, NSPredicate, NSString, WDProfile;

__attribute__((visibility("hidden")))
@interface WDSampleListStatisticsDataProvider : NSObject
{
    _Bool _hasDetailViewController;
    _Bool _hasCompleteDataSet;
    NSPredicate *defaultQueryPredicate;
    NSString *_profileName;
    NSMutableArray *_data;
    NSMutableArray *_activeDataQueries;
    NSMutableSet *_activeQueryTypes;
    HKDisplayType *_displayType;
    WDProfile *_profile;
    HKUnitPreferenceController *_unitController;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) HKUnitPreferenceController *unitController; // @synthesize unitController=_unitController;
@property(readonly, nonatomic) WDProfile *profile; // @synthesize profile=_profile;
@property(readonly, nonatomic) HKDisplayType *displayType; // @synthesize displayType=_displayType;
@property(retain, nonatomic) NSMutableSet *activeQueryTypes; // @synthesize activeQueryTypes=_activeQueryTypes;
@property(retain, nonatomic) NSMutableArray *activeDataQueries; // @synthesize activeDataQueries=_activeDataQueries;
@property(retain) NSMutableArray *data; // @synthesize data=_data;
@property(copy, nonatomic) NSString *profileName; // @synthesize profileName=_profileName;
@property _Bool hasCompleteDataSet; // @synthesize hasCompleteDataSet=_hasCompleteDataSet;
@property(nonatomic) _Bool hasDetailViewController; // @synthesize hasDetailViewController=_hasDetailViewController;
@property(retain, nonatomic) NSPredicate *defaultQueryPredicate; // @synthesize defaultQueryPredicate;
- (id)_predicateForTheLastMonth;
- (void)_startCompleteDataStatisticsCollectionQueryForSampleType:(id)arg1 updateHandler:(CDUnknownBlockType)arg2;
- (void)_startPartialDataStatisticsCollectionQueryForSampleType:(id)arg1 updateHandler:(CDUnknownBlockType)arg2;
- (void)viewControllerIsNearEndOfScreen;
- (id)viewControllerForItemAtIndexPath:(id)arg1;
- (void)deleteObjectsAtIndexPath:(id)arg1 healthStore:(id)arg2 options:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)deleteAllData;
- (void)removeObjectAtIndex:(unsigned long long)arg1 forSection:(unsigned long long)arg2 sectionRemoved:(_Bool *)arg3;
- (void)stopCollectingData;
- (unsigned long long)_statisticsOptionsForSampleType:(id)arg1;
- (void)startCollectingDataWithUpdateHandler:(CDUnknownBlockType)arg1;
- (void)_handleResultsCollection:(id)arg1 fromQuery:(id)arg2 sampleType:(id)arg3 areComplete:(_Bool)arg4 withError:(id)arg5 updateHandler:(CDUnknownBlockType)arg6;
- (id)customCellForObject:(id)arg1 indexPath:(id)arg2 tableView:(id)arg3;
@property(readonly, nonatomic) double customEstimatedCellHeight;
@property(readonly, nonatomic) double customCellHeight;
- (void)customizeTableView:(id)arg1;
@property(readonly, nonatomic) _Bool textAdjustsFontSizeToFitWidth;
- (id)secondaryTextForObject:(id)arg1;
- (id)textForObject:(id)arg1;
- (id)objectAtIndex:(unsigned long long)arg1 forSection:(unsigned long long)arg2;
- (unsigned long long)numberOfObjectsForSection:(unsigned long long)arg1;
- (id)titleForSection:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long numberOfSections;
@property(readonly, nonatomic) long long cellStyle;
- (id)_statisticsAtIndexPath:(id)arg1;
- (id)sampleTypes;
- (id)initWithDisplayType:(id)arg1 profile:(id)arg2;

// Remaining properties
@property(readonly) _Bool calendarDateSelectorVisible;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

