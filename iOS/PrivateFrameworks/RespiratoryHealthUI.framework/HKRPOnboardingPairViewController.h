//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BridgePreferences/BPSWelcomeOptinViewController.h>

#import <RespiratoryHealthUI/BPSMiniFlowStepController-Protocol.h>

@class HKRPOxygenSaturationOnboardingManager, HKRPOxygenSaturationSettings, RespiratoryHealthHeroView;
@protocol BPSSetupMiniFlowControllerDelegate;

@interface HKRPOnboardingPairViewController : BPSWelcomeOptinViewController <BPSMiniFlowStepController>
{
    RespiratoryHealthHeroView *_heroView;
    id <BPSSetupMiniFlowControllerDelegate> miniFlowDelegate;
    HKRPOxygenSaturationSettings *_settings;
    HKRPOxygenSaturationOnboardingManager *_onboardingManager;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) HKRPOxygenSaturationOnboardingManager *onboardingManager; // @synthesize onboardingManager=_onboardingManager;
@property(readonly, nonatomic) HKRPOxygenSaturationSettings *settings; // @synthesize settings=_settings;
@property(nonatomic) __weak id <BPSSetupMiniFlowControllerDelegate> miniFlowDelegate; // @synthesize miniFlowDelegate;
- (void)alternateButtonPressed:(id)arg1;
- (void)_presentOnboardingError:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_onboardWithCompletion:(CDUnknownBlockType)arg1;
- (void)suggestedButtonPressed:(id)arg1;
- (id)_localizedStringForKey:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)_makeHeroView;
- (void)viewDidLoad;
- (id)imageResourceBundleIdentifier;
- (id)imageResource;
- (id)captionText;
- (id)detailString;
- (id)titleString;
- (id)alternateButtonTitle;
- (id)suggestedButtonTitle;
- (id)initWithSettings:(id)arg1 onboardingManager:(id)arg2;

@end
