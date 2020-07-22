//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchToSharePredictions/SFFeedbackListener-Protocol.h>

@class NSString, SFCustomFeedback, SFEndSearchFeedback, SFResultEngagementFeedback, SFSearchViewAppearFeedback, SFSearchViewDisappearFeedback, SFStartSearchFeedback, SFSuggestionEngagementFeedback;

@protocol SGQPSearchToShareProtocol <SFFeedbackListener>
- (void)sendCustomFeedback:(SFCustomFeedback *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (void)didEngageResult:(SFResultEngagementFeedback *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (void)didEngageSuggestion:(SFSuggestionEngagementFeedback *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (void)didEndSearch:(SFEndSearchFeedback *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (void)didStartSearch:(SFStartSearchFeedback *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (void)searchViewDidDisappear:(SFSearchViewDisappearFeedback *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (void)searchViewDidAppear:(SFSearchViewAppearFeedback *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (void)rankedCategoriesForConversation:(NSString *)arg1 limit:(unsigned long long)arg2 completionHandler:(void (^)(NSArray *, NSError *))arg3;
- (void)queryPredictionsForConversation:(NSString *)arg1 limit:(unsigned long long)arg2 completionHandler:(void (^)(NSArray *, NSError *))arg3;
@end

