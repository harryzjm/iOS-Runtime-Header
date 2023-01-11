//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeUI/HUConfigurationViewController-Protocol.h>
#import <HomeUI/HUPreloadableViewController-Protocol.h>

@class HUPersonalRequestsEditorItemManager, NSString, OBLinkTrayButton, OBTrayButton;
@protocol HUConfigurationViewControllerDelegate;

@interface HUVoiceProfileSetupViewController <HUConfigurationViewController, HUPreloadableViewController>
{
    id <HUConfigurationViewControllerDelegate> _delegate;
    OBTrayButton *_setupButton;
    OBLinkTrayButton *_notNowButton;
    HUPersonalRequestsEditorItemManager *_prEditorItemManager;
}

@property(retain, nonatomic) HUPersonalRequestsEditorItemManager *prEditorItemManager; // @synthesize prEditorItemManager=_prEditorItemManager;
@property(retain, nonatomic) OBLinkTrayButton *notNowButton; // @synthesize notNowButton=_notNowButton;
@property(retain, nonatomic) OBTrayButton *setupButton; // @synthesize setupButton=_setupButton;
@property(nonatomic) __weak id <HUConfigurationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dismissSetup;
- (void)showLearnMore;
- (void)continueSetup;
- (void)skipSetup;
- (void)userTappedCancelFromWarning;
- (void)userTappedContinueFromWarning;
- (id)hu_preloadContent;
- (void)_turnOffPersonalRequests;
- (void)_resetVoiceProfileSetup;
- (void)_setupVoiceProfile:(id)arg1;
- (void)_dontSetupVoiceProfile;
- (void)_dontSetupVoiceProfileWithWarning:(id)arg1;
- (void)_setupPersonalRequestsItemInfrastructure;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isFinalStep;
@property(readonly) Class superclass;

@end
