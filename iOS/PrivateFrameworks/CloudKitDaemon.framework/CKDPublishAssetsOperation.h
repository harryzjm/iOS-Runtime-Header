//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary, NSMutableDictionary, NSOperation;
@protocol CKPublishAssetsOperationCallbacks;

@interface CKDPublishAssetsOperation
{
    CDUnknownBlockType _assetPublishedBlock;
    NSArray *_recordIDs;
    NSDictionary *_fileNamesByAssetFieldNames;
    unsigned long long _requestedTTL;
    unsigned long long _URLOptions;
    NSOperation *_fetchRecordsOperation;
    NSMutableDictionary *_fetchedRecordsByID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *fetchedRecordsByID; // @synthesize fetchedRecordsByID=_fetchedRecordsByID;
@property(retain) NSOperation *fetchRecordsOperation; // @synthesize fetchRecordsOperation=_fetchRecordsOperation;
@property(nonatomic) unsigned long long URLOptions; // @synthesize URLOptions=_URLOptions;
@property(nonatomic) unsigned long long requestedTTL; // @synthesize requestedTTL=_requestedTTL;
@property(retain, nonatomic) NSDictionary *fileNamesByAssetFieldNames; // @synthesize fileNamesByAssetFieldNames=_fileNamesByAssetFieldNames;
@property(retain, nonatomic) NSArray *recordIDs; // @synthesize recordIDs=_recordIDs;
@property(copy, nonatomic) CDUnknownBlockType assetPublishedBlock; // @synthesize assetPublishedBlock=_assetPublishedBlock;
- (void)cancel;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)main;
- (void)_fetchRecords;
- (void)_fetchPCSForRecords;
- (void)_finishPublishAssetsForRecord:(id)arg1;
- (void)_dispatchAssetURLsForRecord:(id)arg1 pcs:(struct _OpaquePCSShareProtection *)arg2;
- (id)_checkEntitlements;
- (id)nameForState:(unsigned long long)arg1;
- (_Bool)makeStateTransition;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;

// Remaining properties
@property(retain, nonatomic) id <CKPublishAssetsOperationCallbacks> clientOperationCallbackProxy; // @dynamic clientOperationCallbackProxy;
@property(nonatomic) unsigned long long state; // @dynamic state;

@end

