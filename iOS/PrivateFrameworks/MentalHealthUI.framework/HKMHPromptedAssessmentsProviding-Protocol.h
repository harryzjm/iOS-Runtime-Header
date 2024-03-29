//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HKStateOfMind, NSArray, NSNumber, OS_dispatch_queue;
@protocol HKMHPromptedAssessmentsProvidingObserver;

@protocol HKMHPromptedAssessmentsProviding
- (void)unregisterObserver:(id <HKMHPromptedAssessmentsProvidingObserver>)arg1;
- (void)registerObserver:(id <HKMHPromptedAssessmentsProvidingObserver>)arg1 queue:(OS_dispatch_queue *)arg2;
- (NSNumber *)willPendingStateOfMindTriggerLoggingPatternEscalation:(HKStateOfMind *)arg1 error:(id *)arg2;
- (NSNumber *)satisfiesLoggingPatternEscalationCriteriaIncludingPendingStateOfMind:(HKStateOfMind *)arg1 error:(id *)arg2;
- (NSArray *)promptedAssessmentsWithError:(id *)arg1;
@end

