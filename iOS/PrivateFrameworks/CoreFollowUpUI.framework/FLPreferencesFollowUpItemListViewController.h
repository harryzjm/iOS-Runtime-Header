//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSListController.h>

#import <CoreFollowUpUI/FLSpecifierTapHandlerDelegate-Protocol.h>

@class FLSpecifierTapHandler, NSString, UIViewController;
@protocol FLViewModel;

@interface FLPreferencesFollowUpItemListViewController : PSListController <FLSpecifierTapHandlerDelegate>
{
    id <FLViewModel> _viewModel;
    FLSpecifierTapHandler *_actionHandler;
    UIViewController *_presentationContext;
}

@property(retain, nonatomic) UIViewController *presentationContext; // @synthesize presentationContext=_presentationContext;
- (void).cxx_destruct;
- (void)_dismissFlowWithError:(id)arg1;
- (void)_showRadarPromptForItem:(id)arg1 action:(id)arg2;
- (void)preflightNetworkConnectivityForHandler:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)startPresentingForHandler:(id)arg1 withRemoteController:(id)arg2;
- (void)actionTapped:(id)arg1;
- (id)detailSpecifiersForFollowUpItem:(id)arg1;
- (id)followUpItemSpecifiers;
- (void)handleURL:(id)arg1;
- (id)specifiers;
- (void)setSpecifier:(id)arg1;
- (id)_viewModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

