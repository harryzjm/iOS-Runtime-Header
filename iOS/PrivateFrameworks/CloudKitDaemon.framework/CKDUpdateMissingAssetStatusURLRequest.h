//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKDURLRequest.h"

@class CKRecordID, NSArray;

@interface CKDUpdateMissingAssetStatusURLRequest : CKDURLRequest
{
    _Bool _recovered;
    _Bool _isPackage;
    CKRecordID *_repairRecordID;
    NSArray *_assetSizes;
    NSArray *_assetPutReceipts;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *assetPutReceipts; // @synthesize assetPutReceipts=_assetPutReceipts;
@property(retain, nonatomic) NSArray *assetSizes; // @synthesize assetSizes=_assetSizes;
@property(nonatomic) _Bool isPackage; // @synthesize isPackage=_isPackage;
@property(nonatomic) _Bool recovered; // @synthesize recovered=_recovered;
@property(copy, nonatomic) CKRecordID *repairRecordID; // @synthesize repairRecordID=_repairRecordID;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)generateRequestOperations;
- (id)requestOperationClasses;
- (void)fillOutRequestProperties:(id)arg1;
- (id)equivalencyProperties;
- (id)initWithOperation:(id)arg1 repairRecordID:(id)arg2 recovered:(_Bool)arg3 package:(_Bool)arg4 sizes:(id)arg5 putReceipts:(id)arg6;
- (id)initWithOperation:(id)arg1 recoveredPackageRepairRecordID:(id)arg2 sizes:(id)arg3 putReceipts:(id)arg4;
- (id)initWithOperation:(id)arg1 recoveredAssetRepairRecordID:(id)arg2 size:(unsigned long long)arg3 putReceipt:(id)arg4;
- (id)initWithOperation:(id)arg1 unrecoveredRepairRecordID:(id)arg2;

@end

