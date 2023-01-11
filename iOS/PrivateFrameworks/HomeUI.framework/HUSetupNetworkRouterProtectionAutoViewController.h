//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeUI/HUConfigurationViewController-Protocol.h>

@class HMNetworkRouterProfile, NSString;
@protocol HUConfigurationViewControllerDelegate;

@interface HUSetupNetworkRouterProtectionAutoViewController <HUConfigurationViewController>
{
    id <HUConfigurationViewControllerDelegate> _delegate;
    HMNetworkRouterProfile *_profile;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) HMNetworkRouterProfile *profile; // @synthesize profile=_profile;
@property(nonatomic) __weak id <HUConfigurationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateNetworkProtection:(long long)arg1 andFinishWithActionResult:(unsigned long long)arg2;
- (void)_learnMorePressed:(id)arg1;
- (void)_disablePressed:(id)arg1;
- (void)_customizePressed:(id)arg1;
- (void)_continuePressed:(id)arg1;
- (_Bool)_hasNetworkCustomizableAccessories;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithProfile:(id)arg1 configurationDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isFinalStep;
@property(readonly) Class superclass;

@end
