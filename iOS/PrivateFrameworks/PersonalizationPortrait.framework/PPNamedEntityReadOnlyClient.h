//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PersonalizationPortrait/PPNamedEntityClientProtocol-Protocol.h>

@class PPXPCClientHelper, PPXPCClientPipelinedBatchQueryManager;

@interface PPNamedEntityReadOnlyClient : NSObject <PPNamedEntityClientProtocol>
{
    PPXPCClientHelper *_clientHelper;
    PPXPCClientPipelinedBatchQueryManager *_queryManager;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)mapItemForPlaceName:(id)arg1 error:(id *)arg2;
- (void)feedbackNamedEntitiesOverallEngagement:(id)arg1;
- (void)feedbackEngagedNamedEntities:(id)arg1;
- (void)feedbackUsedNamedEntities:(id)arg1;
- (_Bool)namedEntityRecordsWithQuery:(id)arg1 error:(id *)arg2 handleBatch:(CDUnknownBlockType)arg3;
- (_Bool)rankedNamedEntitiesWithQuery:(id)arg1 error:(id *)arg2 handleBatch:(CDUnknownBlockType)arg3;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_remoteObjectProxy;
- (void)namedEntityRecordBatch:(id)arg1 isLast:(_Bool)arg2 error:(id)arg3 queryId:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)namedEntityBatch:(id)arg1 isLast:(_Bool)arg2 error:(id)arg3 queryId:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_unblockPendingQueries;
- (id)init;

@end

