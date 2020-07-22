//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKServerChangeToken;

@interface CKFetchNotificationChangesOperation
{
    _Bool _moreComing;
    CKServerChangeToken *_previousServerChangeToken;
    unsigned long long _resultsLimit;
    CDUnknownBlockType _notificationChangedBlock;
    CDUnknownBlockType _fetchNotificationChangesCompletionBlock;
    CKServerChangeToken *_resultServerChangeToken;
}

@property(retain, nonatomic) CKServerChangeToken *resultServerChangeToken; // @synthesize resultServerChangeToken=_resultServerChangeToken;
@property(copy, nonatomic) CDUnknownBlockType fetchNotificationChangesCompletionBlock; // @synthesize fetchNotificationChangesCompletionBlock=_fetchNotificationChangesCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType notificationChangedBlock; // @synthesize notificationChangedBlock=_notificationChangedBlock;
@property(nonatomic) _Bool moreComing; // @synthesize moreComing=_moreComing;
@property(nonatomic) unsigned long long resultsLimit; // @synthesize resultsLimit=_resultsLimit;
@property(copy, nonatomic) CKServerChangeToken *previousServerChangeToken; // @synthesize previousServerChangeToken=_previousServerChangeToken;
- (void).cxx_destruct;
- (id)activityCreate;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleCompletionCallback:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (void)performCKOperation;
- (_Bool)hasCKOperationCallbacksSet;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (id)initWithPreviousServerChangeToken:(id)arg1;
- (id)init;

@end

