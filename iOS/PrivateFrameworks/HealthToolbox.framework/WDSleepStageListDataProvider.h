//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "WDSampleListDataProvider.h"

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface WDSleepStageListDataProvider : WDSampleListDataProvider
{
    NSMutableDictionary *_sleepData;
    NSMutableArray *_orderedKeys;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableArray *orderedKeys; // @synthesize orderedKeys=_orderedKeys;
@property(readonly, nonatomic) NSMutableDictionary *sleepData; // @synthesize sleepData=_sleepData;
- (id)viewControllerForItemAtIndexPath:(id)arg1;
- (void)deleteObjectsAtIndexPath:(id)arg1 healthStore:(id)arg2 options:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)deleteAllData;
- (void)removeObjectAtIndex:(unsigned long long)arg1 forSection:(unsigned long long)arg2 sectionRemoved:(_Bool *)arg3;
- (id)secondaryTextForObject:(id)arg1;
- (id)textForObject:(id)arg1;
- (id)_durationFormatter;
- (id)objectAtIndex:(unsigned long long)arg1 forSection:(unsigned long long)arg2;
- (id)_sleepSampleBucketAtIndex:(unsigned long long)arg1 section:(unsigned long long)arg2;
- (unsigned long long)numberOfObjectsForSection:(unsigned long long)arg1;
- (id)titleForSection:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
- (long long)cellStyle;
- (id)_sleepDataDictionaryFromSamples:(id)arg1;
- (void)_callUpdateHandler;
- (id)sampleTypes;

@end

