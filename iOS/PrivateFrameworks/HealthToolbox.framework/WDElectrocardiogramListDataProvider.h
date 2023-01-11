//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface WDElectrocardiogramListDataProvider
{
    _Bool _shouldConsiderRequeryDueToDeletedObjects;
    unsigned long long _recentSampleLimit;
}

@property(nonatomic) _Bool shouldConsiderRequeryDueToDeletedObjects; // @synthesize shouldConsiderRequeryDueToDeletedObjects=_shouldConsiderRequeryDueToDeletedObjects;
@property(nonatomic) unsigned long long recentSampleLimit; // @synthesize recentSampleLimit=_recentSampleLimit;
- (id)viewControllerForItemAtIndexPath:(id)arg1;
- (id)customLoadingCellForRowAtIndexPath:(id)arg1 tableView:(id)arg2;
- (id)placeholderCellAtIndexPath:(id)arg1 tableView:(id)arg2;
- (id)customCellForObject:(id)arg1 indexPath:(id)arg2 tableView:(id)arg3;
- (id)_cellForSample:(id)arg1 indexPath:(id)arg2 tableView:(id)arg3;
- (double)customEstimatedCellHeight;
- (double)customCellHeight;
- (void)customizeTableView:(id)arg1;
- (long long)cellStyle;
- (id)textForObject:(id)arg1;
- (id)titleForSection:(unsigned long long)arg1;
- (id)queryDateForSelectedDate:(id)arg1;
- (_Bool)canEditRowAtIndexPath:(id)arg1;
- (_Bool)calendarDateSelectorVisible;
- (unsigned long long)numberOfObjectsForSection:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
- (id)sampleTypes;
- (void)refineSamplesWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateController:(id)arg1 didReceiveUpdateForType:(id)arg2 samplesAdded:(id)arg3 objectsRemoved:(id)arg4;
- (id)createQueryForSampleType:(id)arg1 predicate:(id)arg2 limit:(long long)arg3 sortDescriptors:(id)arg4 resultsHandler:(CDUnknownBlockType)arg5;

@end
