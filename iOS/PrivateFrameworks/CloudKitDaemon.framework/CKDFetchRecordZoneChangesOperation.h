//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKServerChangeToken, NSData, NSDictionary;

@interface CKDFetchRecordZoneChangesOperation
{
    _Bool _clientIsUsingLegacyCKFetchRecordChangesOperationAPI;
    CDUnknownBlockType _recordChangedBlock;
    CDUnknownBlockType _recordDeletedBlock;
    CDUnknownBlockType _serverChangeTokenUpdatedBlock;
    CKServerChangeToken *_resultServerChangeToken;
    NSData *_resultClientChangeTokenData;
    long long _resultStatus;
    long long _changeTypes;
    NSDictionary *_supplementalChangeTokenByZoneID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *supplementalChangeTokenByZoneID; // @synthesize supplementalChangeTokenByZoneID=_supplementalChangeTokenByZoneID;
@property(nonatomic) _Bool clientIsUsingLegacyCKFetchRecordChangesOperationAPI; // @synthesize clientIsUsingLegacyCKFetchRecordChangesOperationAPI=_clientIsUsingLegacyCKFetchRecordChangesOperationAPI;
@property(nonatomic) long long changeTypes; // @synthesize changeTypes=_changeTypes;
@property(nonatomic) long long resultStatus; // @synthesize resultStatus=_resultStatus;
@property(retain, nonatomic) NSData *resultClientChangeTokenData; // @synthesize resultClientChangeTokenData=_resultClientChangeTokenData;
@property(retain, nonatomic) CKServerChangeToken *resultServerChangeToken; // @synthesize resultServerChangeToken=_resultServerChangeToken;
@property(copy, nonatomic) CDUnknownBlockType serverChangeTokenUpdatedBlock; // @synthesize serverChangeTokenUpdatedBlock=_serverChangeTokenUpdatedBlock;
@property(copy, nonatomic) CDUnknownBlockType recordDeletedBlock; // @synthesize recordDeletedBlock=_recordDeletedBlock;
@property(copy, nonatomic) CDUnknownBlockType recordChangedBlock; // @synthesize recordChangedBlock=_recordChangedBlock;
- (id)analyticsPayload;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_noteOperationFinishedBlockEnd;
- (void)_noteOperationEnding;
- (void)_noteOperationBeginning;
- (id)_createAndConfigureURLRequestForZoneIDs:(id)arg1 optionsByZoneID:(id)arg2;
- (int)operationType;
- (id)_optionsForZonesWithPendingChangesAfterRequest:(id)arg1;
- (void)_noteDeletedRecordWithID:(id)arg1 recordType:(id)arg2;
- (void)_noteChangedRecordWithID:(id)arg1 record:(id)arg2 error:(id)arg3;
- (void)_noteCompletedURLRequest:(id)arg1 withSchedulerInfo:(id)arg2;
- (id)activityCreate;
- (id)pipeliningDescription;
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;

@end

