//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_BRCOperation.h"

@class BRCServerZone, CKRecordID, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface BRCLocateRecordOperation : _BRCOperation
{
    unsigned long long _recordsFetched;
    unsigned long long _recordsFetchedTotalMetadataSize;
    unsigned long long _xattrsFetchedTotalSize;
    CKRecordID *_structureRecordID;
    BRCServerZone *_serverZone;
    _Bool _exists;
    NSMutableArray *_locateRecordCompletionBlocks;
    CKRecordID *_recordID;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CKRecordID *recordID; // @synthesize recordID=_recordID;
- (void)cancelToBeReplacedByOperation:(id)arg1;
- (void)addLocateRecordCompletionBlock:(CDUnknownBlockType)arg1;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)main;
- (void)_performAfterLocatingRecord:(CDUnknownBlockType)arg1;
- (id)createActivity;
- (_Bool)shouldRetryForError:(id)arg1;
- (id)initWithRecordID:(id)arg1 serverZone:(id)arg2 isUserWaiting:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

