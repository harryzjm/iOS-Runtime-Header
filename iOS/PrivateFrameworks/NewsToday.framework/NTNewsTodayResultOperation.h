//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSDictionary, NTCatchUpOperationForYouFetchInfo, NTPBTodayConfig, NTPBTodayResultOperationFetchInfo, NTTodayResults;

@interface NTNewsTodayResultOperation
{
    NTPBTodayConfig *_todayConfig;
    NSDate *_filterDate;
    NTCatchUpOperationForYouFetchInfo *_forYouFetchInfo;
    double _resultHeadlineScaleFactor;
    NTTodayResults *_resultTodayResults;
    NSDictionary *_resultAssetHandlesByAssetID;
    NTPBTodayResultOperationFetchInfo *_resultFetchInfo;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(copy, nonatomic) NTPBTodayResultOperationFetchInfo *resultFetchInfo; // @synthesize resultFetchInfo=_resultFetchInfo;
@property(copy, nonatomic) NSDictionary *resultAssetHandlesByAssetID; // @synthesize resultAssetHandlesByAssetID=_resultAssetHandlesByAssetID;
@property(copy, nonatomic) NTTodayResults *resultTodayResults; // @synthesize resultTodayResults=_resultTodayResults;
@property(nonatomic) double resultHeadlineScaleFactor; // @synthesize resultHeadlineScaleFactor=_resultHeadlineScaleFactor;
@property(copy, nonatomic) NTCatchUpOperationForYouFetchInfo *forYouFetchInfo; // @synthesize forYouFetchInfo=_forYouFetchInfo;
@property(copy, nonatomic) NSDate *filterDate; // @synthesize filterDate=_filterDate;
@property(copy, nonatomic) NTPBTodayConfig *todayConfig; // @synthesize todayConfig=_todayConfig;
- (_Bool)_useForegroundMinimumUpdateInterval;
- (void)_finalizeTodayResultsWithSectionDescriptors:(id)arg1 catchUpOperationResultsBySectionDescriptor:(id)arg2 slotAllocationByDynamicSlotItemID:(id)arg3 appConfiguration:(id)arg4 feedPersonalizer:(id)arg5 todayData:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)_registerForYouFetchWithForYouFetchInfo:(id)arg1;
- (void)_fetchTodayResultsWithFetchHelper:(id)arg1 aggregator:(id)arg2 budgetInfo:(id)arg3 appConfiguration:(id)arg4 feedPersonalizer:(id)arg5 todayData:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)_assembleQueueDescriptorsWithConfig:(id)arg1 allowOnlyWatchEligibleSections:(_Bool)arg2 respectsWidgetVisibleSectionsLimit:(_Bool)arg3 personalizationTreatment:(id)arg4 aggregateStore:(id)arg5 appConfiguration:(id)arg6 todayData:(id)arg7 completion:(CDUnknownBlockType)arg8;
- (id)_sectionCTRsWithTodayConfig:(id)arg1 personalizationTreatment:(id)arg2 aggregateStore:(id)arg3;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (void)prepareOperation;
- (_Bool)validateOperation;
- (id)init;

@end
