//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface HKSleepCurrentValueDataProvider
{
}

- (void)_fetchQueryResultFromDate:(id)arg1 toDate:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_dataProviderValueFromMostRecentSample:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_queryDateRangeFromSampleDate:(id)arg1;
- (id)_currentSleepQueryWithCompletion:(CDUnknownBlockType)arg1;
- (id)fetchOperationWithCompletion:(CDUnknownBlockType)arg1;
- (id)currentValue;

@end
