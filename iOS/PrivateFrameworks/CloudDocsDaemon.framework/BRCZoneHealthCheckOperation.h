//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudDocsDaemon/BRCOperationSubclass-Protocol.h>

@class CKServerChangeToken, NSMutableArray, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface BRCZoneHealthCheckOperation <BRCOperationSubclass>
{
    CKServerChangeToken *_changeToken;
    NSMutableDictionary *_recordsByID;
    NSMutableArray *_deletedRecordIds;
}

- (void).cxx_destruct;
- (void)main;
- (void)completedZoneHealthSyncDownWithRequestID:(unsigned long long)arg1 error:(id)arg2;
- (void)receivedUpdatedServerChangeToken:(id)arg1 requestID:(unsigned long long)arg2;
- (_Bool)shouldRetryForError:(id)arg1;
- (id)initWithSession:(id)arg1 changeToken:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
