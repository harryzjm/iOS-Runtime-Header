//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface HKCountCurrentValueDataProvider
{
    long long _countStyle;
}

@property(readonly, nonatomic) long long countStyle; // @synthesize countStyle=_countStyle;
- (id)_countAllSamplesQueryWithCompletion:(CDUnknownBlockType)arg1;
- (void)_countFromDate:(id)arg1 toDate:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_dataProviderValueForCount:(id)arg1 sampleDate:(id)arg2;
- (void)_dataProviderValueFromMostRecentSample:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_mostRecentValueQueryWithCompletion:(CDUnknownBlockType)arg1;
- (id)fetchOperationWithCompletion:(CDUnknownBlockType)arg1;
- (id)currentValue;
- (id)initWithHealthStore:(id)arg1 updateController:(id)arg2 dateCache:(id)arg3 displayType:(id)arg4 countStyle:(long long)arg5;

@end

