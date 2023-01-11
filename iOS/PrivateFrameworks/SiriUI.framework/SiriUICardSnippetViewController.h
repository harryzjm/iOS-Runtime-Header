//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriUI/CRKCardPresentationDelegate-Protocol.h>
#import <SiriUI/CRKCardViewControllerDelegate-Protocol.h>
#import <SiriUI/SiriUICardLoadingObserver-Protocol.h>
#import <SiriUI/SiriUICardSnippetViewDataSource-Protocol.h>
#import <SiriUI/SiriUICardSnippetViewDelegate-Protocol.h>
#import <SiriUI/SiriUIModalContainerViewControllerDelegate-Protocol.h>
#import <SiriUI/_SiriUICardLoaderDelegate-Protocol.h>

@class CRKCardPresentation, NSMutableDictionary, NSObject, NSString, SACardSnippet, SiriUICardSnippetView, SiriUIModalContainerViewController, UIViewController, _SiriUICardLoader;
@protocol CRKCardViewControllerDelegate, CRKCardViewControlling, OS_dispatch_group;

@interface SiriUICardSnippetViewController <_SiriUICardLoaderDelegate, SiriUICardLoadingObserver, SiriUIModalContainerViewControllerDelegate, CRKCardPresentationDelegate, SiriUICardSnippetViewDataSource, SiriUICardSnippetViewDelegate, CRKCardViewControllerDelegate>
{
    SACardSnippet *_snippet;
    struct CGSize _contentSize;
    NSMutableDictionary *_referenceableCommandsByIdentifierMap;
    NSMutableDictionary *_referenceableSnippetsByIdentifierMap;
    NSObject<OS_dispatch_group> *_cardLoadingGroup;
    SACardSnippet *_newlyLoadedCardSnippet;
    _SiriUICardLoader *_cardLoader;
    SiriUIModalContainerViewController *_presentedModalContainerViewController;
    UIViewController<CRKCardViewControlling> *_cardViewController;
    CRKCardPresentation *_cardPresentation;
}

+ (void)initialize;
@property(retain, nonatomic, getter=_cardPresentation, setter=_setCardPresentation:) CRKCardPresentation *cardPresentation; // @synthesize cardPresentation=_cardPresentation;
@property(retain, nonatomic, getter=_cardViewController, setter=_setCardViewController:) UIViewController<CRKCardViewControlling> *cardViewController; // @synthesize cardViewController=_cardViewController;
- (id)snippet;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <CRKCardViewControllerDelegate> cardViewControllerDelegate;
- (double)desiredHeightForTransparentHeaderView;
- (void)configureReusableTransparentHeaderView:(id)arg1;
- (Class)transparentHeaderViewClass;
- (void)cardLoadingMonitor:(id)arg1 didReceiveCardSnippet:(id)arg2;
- (_Bool)cardLoader:(id)arg1 loadCard:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (_Bool)cardLoader:(id)arg1 shouldLoadCard:(id)arg2;
- (void)controllerForCard:(id)arg1 didReceiveAsyncCard:(id)arg2 withAsyncCardReceiptFeedback:(id)arg3;
- (void)controllerForCard:(id)arg1 didRequestAsyncCard:(id)arg2 withAsyncCardRequestFeedback:(id)arg3;
- (void)cardSectionViewDidDisappearForCardSection:(id)arg1 withDisappearanceFeedback:(id)arg2;
- (void)cardSectionViewDidAppearForCardSection:(id)arg1 withAppearanceFeedback:(id)arg2;
- (void)cardSectionViewWillAppearForCardSection:(id)arg1 withAppearanceFeedback:(id)arg2;
- (void)cardViewDidDisappearForCard:(id)arg1 withDisappearanceFeedback:(id)arg2;
- (void)cardViewDidAppearForCard:(id)arg1 withAppearanceFeedback:(id)arg2;
- (void)cardViewWillAppearForCard:(id)arg1 withAppearanceFeedback:(id)arg2;
- (void)userDidEngageCardSection:(id)arg1 withEngagementFeedback:(id)arg2;
- (void)modalContainerViewControllerViewDidDisappear:(id)arg1;
- (void)modalContainerViewControllerViewWillDisappear:(id)arg1;
- (void)presentViewController:(id)arg1 forCardViewController:(id)arg2;
- (unsigned long long)navigationIndexOfCardViewController:(id)arg1;
- (struct CGSize)cardViewController:(id)arg1 boundingSizeForCardSectionViewController:(id)arg2;
- (_Bool)performPunchoutCommand:(id)arg1 forCardViewController:(id)arg2;
- (_Bool)performNextCardCommand:(id)arg1 forCardViewController:(id)arg2;
- (_Bool)performReferentialCommand:(id)arg1 forCardViewController:(id)arg2;
- (void)cardViewController:(id)arg1 requestsHandlingOfIntent:(id)arg2;
- (void)cardViewControllerBoundsDidChange:(id)arg1;
- (void)cardViewControllerDidLoad:(id)arg1;
- (void)cardSnippetViewSashWasTapped:(id)arg1;
- (double)contentHeightForWidth:(double)arg1;
- (id)localeForCardSnippetView:(id)arg1;
- (id)sashItemForCardSnippetView:(id)arg1;
- (void)_forwardProgressEvent:(unsigned long long)arg1 toCardViewController:(id)arg2 animated:(_Bool)arg3;
- (void)_forwardProgressEventToCardViewController:(unsigned long long)arg1;
- (void)willConfirm;
- (id)_metricsContextOfEventsForCardSection:(id)arg1 inCard:(id)arg2;
- (id)_metricsContextOfEventsForCard:(id)arg1;
- (void)_validateCardSectionForParsecFeedbackDelivery:(id)arg1 validHandler:(CDUnknownBlockType)arg2;
- (void)_validateCardForParsecFeedbackDelivery:(id)arg1 validHandler:(CDUnknownBlockType)arg2;
- (void)_beginMonitoringForNextCardWithBlock:(CDUnknownBlockType)arg1;
- (void)_updateContentSizeAndNotifyDelegateIfNecessary:(_Bool)arg1;
- (void)_addCardViewControllerAsChildViewController:(id)arg1;
- (void)_removeCardViewControllerFromParentViewController:(id)arg1;
- (void)siriDidReceiveViewsWithDialogPhase:(id)arg1;
- (void)siriDidStopSpeakingWithIdentifier:(id)arg1 speechQueueIsEmpty:(_Bool)arg2;
- (void)siriDidStartSpeakingWithIdentifier:(id)arg1;
- (void)willCancel;
- (void)siriDidDeactivate;
- (void)wasAddedToTranscript;
- (id)requestContext;
- (_Bool)logContentsIfApplicable;
- (_Bool)isIndicatingActivity;
- (double)desiredHeight;
- (_Bool)usePlatterStyle;
- (struct UIEdgeInsets)defaultViewInsets;
- (void)setSnippet:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) SiriUICardSnippetView *view; // @dynamic view;

@end

