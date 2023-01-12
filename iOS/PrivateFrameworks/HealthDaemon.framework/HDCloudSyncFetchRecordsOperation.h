//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/HDSynchronousTaskGroupDelegate-Protocol.h>

@class CKContainer, HDSynchronousTaskGroup, NSArray, NSString;

@interface HDCloudSyncFetchRecordsOperation <HDSynchronousTaskGroupDelegate>
{
    CKContainer *_container;
    struct os_unfair_lock_s _lock;
    HDSynchronousTaskGroup *_taskGroup;
    NSArray *_recordIDs;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *recordIDs; // @synthesize recordIDs=_recordIDs;
- (void)synchronousTaskGroup:(id)arg1 didFinishWithSuccess:(_Bool)arg2 errors:(id)arg3;
- (void)main;
- (id)initWithConfiguration:(id)arg1 container:(id)arg2 recordIDs:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
