//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/NSCopying-Protocol.h>

@class NSString;

@interface REFeature : NSObject <NSCopying>
{
}

+ (id)standHourCompletionFeature;
+ (id)exerciseTimeCompletionFeature;
+ (id)activeEnergyCompletionFeature;
+ (id)performedWorkoutCountFeature;
+ (id)dailyAverageWorkoutCountFeature;
+ (id)workoutStateFeature;
+ (id)activeWorkoutFeature;
+ (id)siriActionRoleFeature;
+ (id)currentlyPlayingFromAppFeature;
+ (id)currentlyPlayingMediaDonationFeature;
+ (id)nowPlayingStateFeature;
+ (id)siriActionPerformedCountFeature;
+ (id)siriActionDailyAveragePerformedCountFeature;
+ (id)isDeveloperDonationFeature;
+ (id)isSiriActionFeature;
+ (id)itemIdentifierFeature;
+ (id)motionFeature;
+ (id)isStationaryFeature;
+ (id)travelingFeature;
+ (id)knownLocationOfInterestFeature;
+ (id)locationOfInterestFeature;
+ (id)relevanceThresholdFeature;
+ (id)portraitFeature;
+ (id)sentimentAnalysisCertaintyFeature;
+ (id)negativeSentimentAnalysisFeature;
+ (id)sentimentAnalysisFeature;
+ (id)recentSiriActionFeature;
+ (id)groupFeature;
+ (id)sessionFeature;
+ (id)isInDailyRoutineFeature;
+ (id)dailyRoutineFeature;
+ (id)forcedFeature;
+ (id)siriDomainFeature;
+ (id)conditionalFeature;
+ (id)noContentFeature;
+ (id)isWeekendFeature;
+ (id)dayOfWeekFeature;
+ (id)currentTimeFeature;
+ (id)appUsageFeature;
+ (id)interactionFeature;
+ (id)priorityFeature;
+ (id)geofenceFeature;
+ (id)locationFeature;
+ (id)dateOccursTodayFeature;
+ (id)dateFeature;
+ (id)dataSourceFeature;
+ (id)sectionFeature;
+ (id)transformedFeatureWithTransformer:(id)arg1 features:(id)arg2;
+ (id)crossedFeatureWithFeatures:(id)arg1;
+ (id)featureWithName:(id)arg1 featureType:(unsigned long long)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_replaceDependentFeature:(id)arg1 withFeature:(id)arg2;
- (id)_dependentFeatures;
- (id)_rootFeatures;
- (long long)_bitCount;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) unsigned long long featureType;
@property(readonly, nonatomic) NSString *name;
- (id)featureByUsingTransformer:(id)arg1;

@end
