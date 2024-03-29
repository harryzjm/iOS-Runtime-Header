//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKDFetchRecordsOperation, CKDModifyRecordsOperation, CKRecord, CKRecordID, NSArray;

@interface CKDUpdateMissingAssetStatusOperation
{
    _Bool _recovered;
    _Bool _isPackage;
    CKRecordID *_repairRecordID;
    NSArray *_assetSizes;
    NSArray *_assetPutReceipts;
    CKDFetchRecordsOperation *_fetchOperation;
    CKDModifyRecordsOperation *_modifyOperation;
    CKRecord *_record;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CKRecord *record; // @synthesize record=_record;
@property(retain, nonatomic) CKDModifyRecordsOperation *modifyOperation; // @synthesize modifyOperation=_modifyOperation;
@property(retain, nonatomic) CKDFetchRecordsOperation *fetchOperation; // @synthesize fetchOperation=_fetchOperation;
@property(retain, nonatomic) NSArray *assetPutReceipts; // @synthesize assetPutReceipts=_assetPutReceipts;
@property(retain, nonatomic) NSArray *assetSizes; // @synthesize assetSizes=_assetSizes;
@property(nonatomic) _Bool isPackage; // @synthesize isPackage=_isPackage;
@property(nonatomic) _Bool recovered; // @synthesize recovered=_recovered;
@property(retain, nonatomic) CKRecordID *repairRecordID; // @synthesize repairRecordID=_repairRecordID;
- (void)main;
- (void)_updateMissingAssetStatus;
- (int)operationType;
- (id)nameForState:(unsigned long long)arg1;
- (_Bool)makeStateTransition;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;

// Remaining properties
@property(nonatomic) unsigned long long state; // @dynamic state;

@end

