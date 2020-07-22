//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HKHealthStore, NSArray;

@interface HKHealthQueryFetchOperation
{
    HKHealthStore *_healthStore;
    CDUnknownBlockType _clientCompletion;
    CDUnknownBlockType _fetchOperationManager;
    NSArray *_queries;
}

@property(retain, nonatomic) NSArray *queries; // @synthesize queries=_queries;
- (void).cxx_destruct;
- (void)completedWithResults:(id)arg1 error:(id)arg2;
- (void)stopOperation;
- (void)startOperationWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithHealthStore:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
