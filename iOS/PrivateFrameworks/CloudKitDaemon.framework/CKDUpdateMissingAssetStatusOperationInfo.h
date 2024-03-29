//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKDatabaseOperationInfo.h>

@class CKRecordID, NSArray;

@interface CKDUpdateMissingAssetStatusOperationInfo : CKDatabaseOperationInfo
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
@property(retain, nonatomic) CKRecordID *repairRecordID; // @synthesize repairRecordID=_repairRecordID;

@end

