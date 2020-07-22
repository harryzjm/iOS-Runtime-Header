//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudDocsDaemon/BRCOperationSubclass-Protocol.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface BRCSharingCleanShareSubitemsOperation <BRCOperationSubclass>
{
    unsigned long long _rowID;
    NSMutableArray *_shareIDsToDelete;
    unsigned long long _batchSize;
}

- (void).cxx_destruct;
- (void)main;
- (void)_deleteNextShareIDBatch;
- (id)createActivity;
- (id)initWithItem:(id)arg1;
- (_Bool)shouldRetryForError:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

