//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSError, NSMutableDictionary;

@interface CKFetchRecordZonesOperation
{
    _Bool _isFetchAllRecordZonesOperation;
    _Bool _ignorePCSFailures;
    NSArray *_recordZoneIDs;
    CDUnknownBlockType _fetchRecordZonesCompletionBlock;
    NSArray *_recordZones;
    NSMutableDictionary *_recordZonesByZoneID;
    NSMutableDictionary *_recordZoneErrors;
    NSError *_fetchAllRecordZonesError;
}

+ (id)fetchAllRecordZonesOperation;
@property(nonatomic) _Bool ignorePCSFailures; // @synthesize ignorePCSFailures=_ignorePCSFailures;
@property(nonatomic) _Bool isFetchAllRecordZonesOperation; // @synthesize isFetchAllRecordZonesOperation=_isFetchAllRecordZonesOperation;
@property(retain, nonatomic) NSError *fetchAllRecordZonesError; // @synthesize fetchAllRecordZonesError=_fetchAllRecordZonesError;
@property(retain, nonatomic) NSMutableDictionary *recordZoneErrors; // @synthesize recordZoneErrors=_recordZoneErrors;
@property(retain, nonatomic) NSMutableDictionary *recordZonesByZoneID; // @synthesize recordZonesByZoneID=_recordZonesByZoneID;
@property(retain, nonatomic) NSArray *recordZones; // @synthesize recordZones=_recordZones;
@property(copy, nonatomic) CDUnknownBlockType fetchRecordZonesCompletionBlock; // @synthesize fetchRecordZonesCompletionBlock=_fetchRecordZonesCompletionBlock;
@property(copy, nonatomic) NSArray *recordZoneIDs; // @synthesize recordZoneIDs=_recordZoneIDs;
- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (void)performCKOperation;
- (_Bool)CKOperationShouldRun:(id *)arg1;
- (_Bool)hasCKOperationCallbacksSet;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (id)activityCreate;
- (id)initWithRecordZoneIDs:(id)arg1;
- (id)init;

@end
