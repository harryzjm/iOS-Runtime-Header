//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeUI/HUFeatureOnboardingConfiguratorDelegate-Protocol.h>

@class HUFeatureOnboardingConfigurator, NAFuture, NSMutableArray, NSMutableDictionary, NSString, UINavigationController, UIViewController;
@protocol HUConfigurationViewController;

@interface HUFeatureOnboarder : NSObject <HUFeatureOnboardingConfiguratorDelegate>
{
    _Bool _restart;
    _Bool _hasPerformedPostProcessing;
    NSMutableDictionary *_userInputResults;
    NAFuture *_completionFuture;
    HUFeatureOnboardingConfigurator *_configurator;
    NSMutableArray *_allRemainingFlowGroups;
    UINavigationController *_navController;
    UIViewController<HUConfigurationViewController> *__currentViewControllerForTests;
}

@property(nonatomic) _Bool hasPerformedPostProcessing; // @synthesize hasPerformedPostProcessing=_hasPerformedPostProcessing;
@property __weak UIViewController<HUConfigurationViewController> *_currentViewControllerForTests; // @synthesize _currentViewControllerForTests=__currentViewControllerForTests;
@property(retain, nonatomic) UINavigationController *navController; // @synthesize navController=_navController;
@property(retain, nonatomic) NSMutableArray *allRemainingFlowGroups; // @synthesize allRemainingFlowGroups=_allRemainingFlowGroups;
@property(retain, nonatomic) HUFeatureOnboardingConfigurator *configurator; // @synthesize configurator=_configurator;
@property(retain, nonatomic) NAFuture *completionFuture; // @synthesize completionFuture=_completionFuture;
@property(nonatomic) _Bool restart; // @synthesize restart=_restart;
@property(retain, nonatomic) NSMutableDictionary *userInputResults; // @synthesize userInputResults=_userInputResults;
- (void).cxx_destruct;
- (void)restartCurrentOnboarding;
- (id)getNextViewControllerForOnboardingInput:(id)arg1;
- (void)configuratorDidFinish:(id)arg1;
- (void)configuratorDidUpdateViewController:(id)arg1;
- (void)_skipAnyFlowsNoLongerRequired;
- (id)_findNextAppropriateFlow:(id)arg1;
- (void)startOnboardingWithPresentingViewController:(id)arg1;
- (id)getPostProcessingFlowsForResults:(id)arg1;
- (id)_subclass_buildAllFlowGroupsFromFeatureGroups:(id)arg1 usageOptions:(id)arg2;
- (id)initWithGroupedFeatures:(id)arg1 usageOptions:(id)arg2;
- (id)initWithFeatures:(id)arg1 usageOptions:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
