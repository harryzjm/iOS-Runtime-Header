//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudDocsDaemon/BRCOperationSubclass-Protocol.h>

@class CKRecordID, NSString;

__attribute__((visibility("hidden")))
@interface BRCFetchiWorkSharingInfoOperation <BRCOperationSubclass>
{
    CKRecordID *_recordID;
}

@property(retain, nonatomic) CKRecordID *recordID; // @synthesize recordID=_recordID;
- (void).cxx_destruct;
- (void)main;
- (_Bool)shouldRetryForError:(id)arg1;
- (id)createActivity;
- (id)initWithDocumentItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

