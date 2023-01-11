//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKFetchShareParticipantsOperationCallbacks-Protocol.h>

@class CKFetchShareParticipantsOperationInfo, NSArray, NSMutableDictionary, NSMutableSet;
@protocol CKFetchShareParticipantsOperationCallbacks;

@interface CKFetchShareParticipantsOperation <CKFetchShareParticipantsOperationCallbacks>
{
    CDUnknownBlockType _shareParticipantFetchedBlock;
    CDUnknownBlockType _fetchShareParticipantsCompletionBlock;
    NSArray *_userIdentityLookupInfos;
    NSMutableSet *_discoveredUserIdentities;
    NSMutableDictionary *_lookupErrors;
}

+ (void)applyDaemonCallbackInterfaceTweaks:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *lookupErrors; // @synthesize lookupErrors=_lookupErrors;
@property(retain, nonatomic) NSMutableSet *discoveredUserIdentities; // @synthesize discoveredUserIdentities=_discoveredUserIdentities;
@property(copy, nonatomic) NSArray *userIdentityLookupInfos; // @synthesize userIdentityLookupInfos=_userIdentityLookupInfos;
- (id)activityCreate;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)handleShareParticipantFetchForLookupInfo:(id)arg1 shareParticipant:(id)arg2 error:(id)arg3;
- (void)performCKOperation;
- (_Bool)CKOperationShouldRun:(id *)arg1;
- (_Bool)hasCKOperationCallbacksSet;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType fetchShareParticipantsCompletionBlock; // @synthesize fetchShareParticipantsCompletionBlock=_fetchShareParticipantsCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType shareParticipantFetchedBlock; // @synthesize shareParticipantFetchedBlock=_shareParticipantFetchedBlock;
- (id)initWithUserIdentityLookupInfos:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) id <CKFetchShareParticipantsOperationCallbacks> clientOperationCallbackProxy; // @dynamic clientOperationCallbackProxy;
@property(readonly, nonatomic) CKFetchShareParticipantsOperationInfo *operationInfo; // @dynamic operationInfo;

@end
