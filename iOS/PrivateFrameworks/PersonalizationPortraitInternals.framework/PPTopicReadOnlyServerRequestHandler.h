//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PersonalizationPortraitInternals/PPTopicReadOnlyServerProtocol-Protocol.h>

@class NSString, PPXPCServerPipelinedBatchQueryManager, _PASBundleIdResolver;
@protocol PPTopicClientProtocol;

@interface PPTopicReadOnlyServerRequestHandler : NSObject <PPTopicReadOnlyServerProtocol>
{
    id <PPTopicClientProtocol> _clientProxy;
    PPXPCServerPipelinedBatchQueryManager *_queryManager;
    NSString *_clientProcessName;
    _PASBundleIdResolver *_bundleIdResolver;
}

+ (id)filterQIDDictionary:(id)arg1 withAllowlistOfProcess:(id)arg2 allowlist:(id)arg3;
+ (id)filterTopicRecordsNotInAllowlist:(id)arg1 withAllowlistOfProcess:(id)arg2 allowlist:(id)arg3;
+ (id)filterScoredTopicsNotInAllowlist:(id)arg1 withAllowlistOfProcess:(id)arg2 allowlist:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) _PASBundleIdResolver *bundleIdResolver; // @synthesize bundleIdResolver=_bundleIdResolver;
@property(copy, nonatomic) NSString *clientProcessName; // @synthesize clientProcessName=_clientProcessName;
- (void)registerFeedback:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)unmapMappedTopicIdentifier:(id)arg1 mappingIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)scoresForTopicMapping:(id)arg1 query:(id)arg2 queryId:(unsigned long long)arg3;
- (void)topicExtractionsFromText:(id)arg1 queryId:(unsigned long long)arg2;
- (void)topicRecordsWithQuery:(id)arg1 queryId:(unsigned long long)arg2;
- (void)rankedTopicsWithQuery:(id)arg1 queryId:(unsigned long long)arg2;
- (void)unblockPendingQueries;
- (void)setRemoteObjectProxy:(id)arg1;
- (id)init;

@end
