//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PersonalizationPortrait/SFFeedbackListener-Protocol.h>

@class NSString, PPNamedEntityStore, PPSpotlightSessionState, PPTopicStore;

@interface PPUniversalSearchFeedbackListener : NSObject <SFFeedbackListener>
{
    PPNamedEntityStore *_entityStore;
    PPTopicStore *_topicStore;
    PPSpotlightSessionState *_sessionState;
}

- (void).cxx_destruct;
- (id)protectionClassForBundleId:(id)arg1;
- (void)sendMetricsFeedback:(unsigned long long)arg1 engagedCSSICount:(unsigned long long)arg2;
- (void)sendFeedbackWithEngagementStrings:(id)arg1 rejectionStrings:(id)arg2 store:(id)arg3;
- (id)fetchFeedbackCSSIParsedResults:(id)arg1 feedbackBundleId:(id)arg2 queryId:(long long)arg3;
- (void)reportFeedback:(id)arg1 queryId:(long long)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
