//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <AppPredictionUI/CRKCardPresentationDelegate-Protocol.h>
#import <AppPredictionUI/CRKCardViewControllerDelegate-Protocol.h>

@class APUIShortLookViewController, ATXAction, CRKCardPresentation, NSLayoutConstraint, NSString, PLPlatterView, UITapGestureRecognizer, UIViewController;
@protocol APUIActionFeedbackDelegate, CRKCardViewControllerDelegate;

@interface APUIActionPlatterView : UIView <CRKCardViewControllerDelegate, CRKCardPresentationDelegate>
{
    ATXAction *_atxAction;
    unsigned long long _displayType;
    UIViewController *_parentViewController;
    APUIShortLookViewController *_shortLookViewController;
    PLPlatterView *_platterView;
    NSLayoutConstraint *_heightConstraint;
    UITapGestureRecognizer *_tapRecognizer;
    long long _displayContext;
    id <APUIActionFeedbackDelegate> _actionFeedbackDelegate;
    CRKCardPresentation *_cardPresentation;
    UIViewController *_currentCardViewController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIViewController *currentCardViewController; // @synthesize currentCardViewController=_currentCardViewController;
@property(retain, nonatomic) CRKCardPresentation *cardPresentation; // @synthesize cardPresentation=_cardPresentation;
@property(nonatomic) __weak id <APUIActionFeedbackDelegate> actionFeedbackDelegate; // @synthesize actionFeedbackDelegate=_actionFeedbackDelegate;
@property(nonatomic) long long displayContext; // @synthesize displayContext=_displayContext;
- (long long)cardPresentation:(id)arg1 compareCardSectionViewProviderOne:(id)arg2 providerTwo:(id)arg3;
@property(readonly, nonatomic) id <CRKCardViewControllerDelegate> cardViewControllerDelegate;
- (void)cardViewControllerBoundsDidChange:(id)arg1;
- (void)cardViewControllerDidLoad:(id)arg1;
- (void)_tapRecognized:(id)arg1;
- (void)layoutSubviews;
- (id)initWithATXAction:(id)arg1 parentViewController:(id)arg2;
- (id)initWithATXAction:(id)arg1 parentViewController:(id)arg2 displayType:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
