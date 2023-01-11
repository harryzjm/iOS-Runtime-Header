//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthPluginHost/HKHealthAppPluginHost-Protocol.h>

@class NSArray, NSDateInterval, NSDictionary, NSProgress, NSString;

@protocol HealthPluginHost <HKHealthAppPluginHost>
- (void)submitFeedPersonalizationAnalyticsWithFeedsToPopulateWhenFinished:(NSArray *)arg1 completion:(void (^)(void))arg2;
- (void)submitHighlightsAnalyticsWithCompletion:(void (^)(void))arg1;
- (void)collectFeedPopulationDiagnosticLogsWithCompletion:(void (^)(NSArray *))arg1;
- (void)postNotificationWith:(NSString *)arg1 userInfo:(NSDictionary *)arg2;
- (void)indicateMajorUserInteractionWithCompletion:(void (^)(_Bool))arg1;
- (void)submitTrainingFor:(NSArray *)arg1 completion:(void (^)(void))arg2;
- (void)populateFeedWithFeedKinds:(NSArray *)arg1 for:(NSDateInterval *)arg2 completion:(void (^)(void))arg3;
- (NSProgress *)startInteractiveFeedItemGenerationWithCompletion:(void (^)(_Bool))arg1;
@end
