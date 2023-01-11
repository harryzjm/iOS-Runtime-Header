//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NTPBTodayResultOperationFetchInfo, NTTodayResults;

@interface NTParsecTodayResultOperation
{
    NTTodayResults *_resultTodayResults;
    NSDictionary *_resultAssetHandlesByAssetID;
    NTPBTodayResultOperationFetchInfo *_resultFetchInfo;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NTPBTodayResultOperationFetchInfo *resultFetchInfo; // @synthesize resultFetchInfo=_resultFetchInfo;
@property(copy, nonatomic) NSDictionary *resultAssetHandlesByAssetID; // @synthesize resultAssetHandlesByAssetID=_resultAssetHandlesByAssetID;
@property(copy, nonatomic) NTTodayResults *resultTodayResults; // @synthesize resultTodayResults=_resultTodayResults;
- (void)_updateUseParsecEnabledWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_fetchThumbnailsForTodayResults:(id)arg1 withSearchResultsByHeadline:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_todayResultsWithSectionDescriptor:(id)arg1 aggregationResult:(id)arg2 searchResultsByHeadline:(id)arg3 ZKWNewsOperation:(id)arg4;
- (id)_aggregateSectionsWithSectionDescriptor:(id)arg1 headlines:(id)arg2;
- (void)_fetchTodayResultsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (_Bool)validateOperation;

@end
