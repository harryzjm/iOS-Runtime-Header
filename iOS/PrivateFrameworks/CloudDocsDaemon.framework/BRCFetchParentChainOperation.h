//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_BRCOperation.h"

@class BRCItemID, BRCServerZone, CKRecordID, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface BRCFetchParentChainOperation : _BRCOperation
{
    unsigned long long _recordsFetched;
    unsigned long long _recordsFetchedTotalMetadataSize;
    unsigned long long _xattrsFetchedTotalSize;
    CKRecordID *_parentRecordID;
    BRCServerZone *_serverZone;
    BRCItemID *_parentID;
    NSMutableArray *_fetchParentChainCompletionBlocks;
}

- (void).cxx_destruct;
- (void)cancelToBeReplacedByOperation:(id)arg1;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)addFetchParentChainCompletionBlock:(CDUnknownBlockType)arg1;
- (void)main;
- (void)_fetchParentChain:(id)arg1;
- (id)createActivity;
- (_Bool)shouldRetryForError:(id)arg1;
- (id)initWithParentID:(id)arg1 zone:(id)arg2 isUserWaiting:(_Bool)arg3;
@property(readonly, nonatomic) BRCItemID *parentIDToList;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

