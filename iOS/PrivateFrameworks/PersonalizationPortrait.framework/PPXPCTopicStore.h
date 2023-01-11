//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PPXPCTopicStore
{
}

- (_Bool)clearWithError:(id *)arg1;
- (_Bool)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 error:(id *)arg2;
- (_Bool)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 groupIds:(id)arg2 error:(id *)arg3;
- (_Bool)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 documentIds:(id)arg2 error:(id *)arg3;
- (_Bool)deleteAllTopicsWithTopicId:(id)arg1 error:(id *)arg2;
- (_Bool)donateTopics:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3 cloudSync:(_Bool)arg4 decayRate:(double)arg5 error:(id *)arg6;
- (void)feedbackMappedTopicsOverallEngagement:(id)arg1 forMapping:(id)arg2;
- (void)feedbackTopicsOverallEngagement:(id)arg1;
- (void)feedbackEngagedMappedTopics:(id)arg1 forMapping:(id)arg2;
- (void)feedbackEngagedTopics:(id)arg1;
- (void)feedbackUsedMappedTopics:(id)arg1 forMapping:(id)arg2;
- (void)feedbackUsedTopics:(id)arg1;
- (id)topicRecordsWithQuery:(id)arg1 error:(id *)arg2;
- (_Bool)iterTopicRecordsWithQuery:(id)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;
- (id)scoresForTopicMapping:(id)arg1 query:(id)arg2 error:(id *)arg3;
- (_Bool)iterScoresForTopicMapping:(id)arg1 query:(id)arg2 error:(id *)arg3 block:(CDUnknownBlockType)arg4;
- (id)rankedTopicsWithQuery:(id)arg1 error:(id *)arg2;
- (_Bool)iterRankedTopicsWithQuery:(id)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;
- (id)_init;

@end
