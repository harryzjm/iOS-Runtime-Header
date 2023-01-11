//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <CardKit/CRKCardSectionViewControllingDelegate-Protocol.h>
#import <CardKit/CRKEventResponding-Protocol.h>
#import <CardKit/CRKFeedbackDelegate-Protocol.h>
#import <CardKit/SFFeedbackListener-Protocol.h>

@class CRKCardSectionViewConfiguration, CRKOverlayButton, INUIRemoteViewController, NSArray, NSString, UIView;
@protocol CRCardSection, CRKCardSectionView, CRKCardSectionViewControllerDataSource, CRKCardSectionViewControllerDelegate;

@interface CRKCardSectionViewController : UIViewController <CRKCardSectionViewControllingDelegate, SFFeedbackListener, CRKFeedbackDelegate, CRKEventResponding>
{
    CRKOverlayButton *_overlayButton;
    _Bool _loading;
    id <CRKCardSectionViewControllerDelegate> _delegate;
    id <CRCardSection> _cardSection;
    NSArray *_extraCommands;
    INUIRemoteViewController *__remoteViewController;
    CRKCardSectionViewConfiguration *_viewConfiguration;
    id <CRKCardSectionViewControllerDataSource> _dataSource;
}

+ (void)_registerWithCardKit;
+ (id)cardSectionViewControllerForViewConfiguration:(id)arg1;
+ (void)registerCardSectionViewController;
+ (id)cardSectionClasses;
+ (id)cardSectionViewControllerForCardSection:(id)arg1 dataSource:(id)arg2;
+ (id)cardSectionViewControllerForCardSection:(id)arg1;
@property(nonatomic) __weak id <CRKCardSectionViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) CRKCardSectionViewConfiguration *viewConfiguration; // @synthesize viewConfiguration=_viewConfiguration;
@property(readonly, nonatomic) INUIRemoteViewController *_remoteViewController; // @synthesize _remoteViewController=__remoteViewController;
@property(retain, nonatomic, getter=_extraCommands, setter=_setExtraCommands:) NSArray *extraCommands; // @synthesize extraCommands=_extraCommands;
@property(nonatomic, getter=isLoading) _Bool loading; // @synthesize loading=_loading;
@property(retain, nonatomic) id <CRCardSection> cardSection; // @synthesize cardSection=_cardSection;
@property(nonatomic) __weak id <CRKCardSectionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)cardSectionViewDidInvalidateSizeForCardSection:(id)arg1;
- (void)controllerForCard:(id)arg1 didReceiveAsyncCard:(id)arg2 withAsyncCardReceiptFeedback:(id)arg3;
- (void)controllerForCard:(id)arg1 didRequestAsyncCard:(id)arg2 withAsyncCardRequestFeedback:(id)arg3;
- (void)cardSectionViewDidDisappearForCardSection:(id)arg1 withDisappearanceFeedback:(id)arg2;
- (void)cardSectionViewDidAppearForCardSection:(id)arg1 withAppearanceFeedback:(id)arg2;
- (void)cardSectionViewWillAppearForCardSection:(id)arg1 withAppearanceFeedback:(id)arg2;
- (void)cardViewDidDisappearForCard:(id)arg1 withDisappearanceFeedback:(id)arg2;
- (void)cardViewDidAppearForCard:(id)arg1 withAppearanceFeedback:(id)arg2;
- (void)cardViewWillAppearForCard:(id)arg1 withAppearanceFeedback:(id)arg2;
- (_Bool)shouldHandleEngagement:(id)arg1 forCardSection:(id)arg2;
- (void)userDidEngageCardSection:(id)arg1 withEngagementFeedback:(id)arg2;
- (_Bool)performCommand:(id)arg1 forViewController:(id)arg2;
- (void)cardSectionViewDidSelectPreferredPunchoutIndex:(long long)arg1;
- (void)presentViewController:(id)arg1;
- (void)cardSectionViewDidInvalidateSize:(id)arg1;
- (void)cardSectionViewDidInvalidateSize:(id)arg1 animate:(_Bool)arg2;
- (void)didEngageCardSection:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)_setupCardSectionButtons;
- (void)_setViewExternally:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)_generateCardSectionViewAppearanceFeedback;
- (_Bool)_checkIfCardSectionIsNull:(id)arg1;
- (id)_backingCardSection;
- (_Bool)_shouldHideButtonOverlay;
- (_Bool)_isIndicatingActivity;
- (void)_buttonOverlayTouchWasCanceled:(id)arg1;
- (void)_buttonOverlayWasTouchedDown:(id)arg1;
- (void)_buttonOverlayWasTouchedUpOutside:(id)arg1;
- (void)_buttonOverlayWasTouchedUpInside:(id)arg1;
- (id)_preferredPunchoutCommand;
- (id)_destinationPunchout;
- (id)_commands;
- (_Bool)_shouldRenderButtonOverlay;
- (void)_resumeTouchesIfNecessary;
- (void)_cancelTouchesIfNecessary;
- (void)_finishLoadingViewIfNecessary;
- (void)_loadCardSectionView;
- (void)_performAllCommands;
- (_Bool)_isLoadedWithIntentsUIView;
- (_Bool)_expectsSearchUIView;
- (_Bool)_hasCorrespondingSearchUIView;
- (void)_performCommand:(id)arg1;
- (id)_initWithCardSection:(id)arg1 dataSource:(id)arg2;
- (id)_initWithCardSection:(id)arg1;
- (void)cardEventDidOccur:(unsigned long long)arg1 withIdentifier:(id)arg2 userInfo:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIView<CRKCardSectionView> *view; // @dynamic view;

@end

