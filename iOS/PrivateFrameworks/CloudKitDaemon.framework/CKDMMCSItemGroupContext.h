//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudKitDaemon/CKDCancelling-Protocol.h>
#import <CloudKitDaemon/CKDMMCSItemReaderWriterDelegateProtocol-Protocol.h>

@class CKDMMCS, CKDMMCSItem, CKDMMCSItemGroup, CKDOperation, NSMapTable, NSNumber;

__attribute__((visibility("hidden")))
@interface CKDMMCSItemGroupContext : NSObject <CKDCancelling, CKDMMCSItemReaderWriterDelegateProtocol>
{
    CKDOperation *_operation;
    id _operationInfo;
    NSNumber *_hasConformingOperation;
    CKDMMCS *_MMCS;
    CKDMMCSItemGroup *_itemGroup;
    CDUnknownBlockType _progressBlock;
    CDUnknownBlockType _commandBlock;
    CDUnknownBlockType _startBlock;
    CDUnknownBlockType _completionBlock;
    CKDMMCSItem *_MMCSPackageSectionItem;
    NSMapTable *_MMCSItemsByItemID;
    long long _mmcsOperationType;
}

@property(nonatomic) long long mmcsOperationType; // @synthesize mmcsOperationType=_mmcsOperationType;
@property(retain, nonatomic) NSMapTable *MMCSItemsByItemID; // @synthesize MMCSItemsByItemID=_MMCSItemsByItemID;
@property(retain, nonatomic) CKDMMCSItem *MMCSPackageSectionItem; // @synthesize MMCSPackageSectionItem=_MMCSPackageSectionItem;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(copy, nonatomic) CDUnknownBlockType startBlock; // @synthesize startBlock=_startBlock;
@property(copy, nonatomic) CDUnknownBlockType commandBlock; // @synthesize commandBlock=_commandBlock;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(retain, nonatomic) CKDMMCSItemGroup *itemGroup; // @synthesize itemGroup=_itemGroup;
@property(retain, nonatomic) CKDMMCS *MMCS; // @synthesize MMCS=_MMCS;
@property(retain, nonatomic) NSNumber *hasConformingOperation; // @synthesize hasConformingOperation=_hasConformingOperation;
@property(retain, nonatomic) id operationInfo; // @synthesize operationInfo=_operationInfo;
@property(nonatomic) __weak CKDOperation *operation; // @synthesize operation=_operation;
- (void).cxx_destruct;
- (_Bool)didReadFromItemReaderWriter:(id)arg1 offset:(unsigned long long)arg2 bytes:(char *)arg3 length:(unsigned long long)arg4 bytesRead:(unsigned long long *)arg5 error:(id *)arg6;
- (_Bool)willReadFromItemReaderWriter:(id)arg1 offset:(unsigned long long)arg2 bytes:(char *)arg3 length:(unsigned long long)arg4 bytesRead:(unsigned long long *)arg5 error:(id *)arg6;
- (id)didGetFileMetadataItemReaderWriter:(id)arg1 fileMetadata:(id)arg2 error:(id)arg3;
- (_Bool)willGetFileMetadataItemReaderWriter:(id)arg1 error:(id *)arg2;
- (void)didCloseItemReaderWriter:(id)arg1 result:(_Bool)arg2 error:(id)arg3;
- (_Bool)willCloseItemReaderWriter:(id)arg1 error:(id *)arg2;
- (void)didOpenItemReaderWriter:(id)arg1 result:(_Bool)arg2 error:(id)arg3;
- (_Bool)willOpenItemReaderWriter:(id)arg1 error:(id *)arg2;
- (id)getCKDMMCSItemReaderByPathForMMCSItem:(id)arg1 error:(id *)arg2;
- (struct MMCSItemReaderWriter *)getMMCSItemReaderForItemID:(unsigned long long)arg1 error:(id *)arg2;
- (id)conformingOperation;
- (void)didGetMetricsForRequest:(id)arg1;
- (void)didPutSectionWithSignature:(id)arg1 results:(id)arg2;
- (void)didPutItemID:(unsigned long long)arg1 signature:(id)arg2 results:(id)arg3;
- (void)didGetItemID:(unsigned long long)arg1 signature:(id)arg2 path:(id)arg3 error:(id)arg4 results:(id)arg5;
- (void)handleCommand:(id)arg1 forItem:(id)arg2;
- (void)updateProgressForItemID:(unsigned long long)arg1 state:(int)arg2 progress:(double)arg3 error:(id)arg4;
- (void)updateProgressForPackageSectionState:(int)arg1 progress:(double)arg2 results:(id)arg3;
- (void)updateProgressForItemID:(unsigned long long)arg1 state:(int)arg2 progress:(double)arg3 results:(id)arg4;
- (void)didCompleteRequestWithError:(id)arg1;
- (void)_cleanupMMCSItems;
- (void)_cleanupMMCSRegisterItems;
- (_Bool)_setupMMCSItemsWithError:(id *)arg1;
- (_Bool)_setupGetMMCSItemsWithError:(id *)arg1;
- (_Bool)_setupPutContentMetadataMMCSItemsWithError:(id *)arg1;
- (_Bool)_setupPutMMCSItemsWithError:(id *)arg1;
- (_Bool)_setupRegisterMMCSItemsWithError:(id *)arg1;
- (id)findTrackedMMCSItemByItemID:(unsigned long long)arg1;
- (void)_stopTrackingMMCSItems:(id)arg1;
- (void)_startTrackingMMCSItems:(id)arg1;
- (_Bool)shouldFetchAssetContentInMemory;
- (void)start;
- (void)cancel;
- (id)initWithMMCS:(id)arg1 itemGroup:(id)arg2 operation:(id)arg3 progress:(CDUnknownBlockType)arg4 command:(CDUnknownBlockType)arg5 start:(CDUnknownBlockType)arg6 completionHandler:(CDUnknownBlockType)arg7;

@end

