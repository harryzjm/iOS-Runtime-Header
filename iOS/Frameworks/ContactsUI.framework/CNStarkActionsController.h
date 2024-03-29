//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class CNContact, CNContactQuickActionsController, CNStarkActionView, NSArray, NSString, UITraitCollection;
@protocol UINavigationControllerDelegate;

__attribute__((visibility("hidden")))
@interface CNStarkActionsController : UIViewController
{
    CNContact *_contact;
    CNContactQuickActionsController *_quickActionsController;
    UIViewController *_disambiguationViewController;
    id <UINavigationControllerDelegate> _phoneNavigationControllerDelegate;
    CNStarkActionView *_messageActionView;
    CNStarkActionView *_callActionView;
    CNStarkActionView *_directionsActionView;
    double _willTransitionToBoundsWidth;
    NSArray *_layoutConstraints;
}

+ (id)descriptorForRequiredKeys;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *layoutConstraints; // @synthesize layoutConstraints=_layoutConstraints;
@property(nonatomic) double willTransitionToBoundsWidth; // @synthesize willTransitionToBoundsWidth=_willTransitionToBoundsWidth;
@property(readonly, nonatomic) CNStarkActionView *directionsActionView; // @synthesize directionsActionView=_directionsActionView;
@property(readonly, nonatomic) CNStarkActionView *callActionView; // @synthesize callActionView=_callActionView;
@property(readonly, nonatomic) CNStarkActionView *messageActionView; // @synthesize messageActionView=_messageActionView;
@property(nonatomic) __weak id <UINavigationControllerDelegate> phoneNavigationControllerDelegate; // @synthesize phoneNavigationControllerDelegate=_phoneNavigationControllerDelegate;
@property(nonatomic) __weak UIViewController *disambiguationViewController; // @synthesize disambiguationViewController=_disambiguationViewController;
@property(readonly, nonatomic) CNContactQuickActionsController *quickActionsController; // @synthesize quickActionsController=_quickActionsController;
@property(readonly, nonatomic) CNContact *contact; // @synthesize contact=_contact;
- (void)removeForwardingDelegate;
- (void)forwardDelegateForNavigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)addForwardingDelegate;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)contactQuickActionsController:(id)arg1 dismissDisambiguationViewController:(id)arg2 forActionType:(id)arg3;
- (void)contactQuickActionsController:(id)arg1 presentDisambiguationViewController:(id)arg2 forActionType:(id)arg3;
- (id)viewForActionType:(id)arg1;
- (void)actionViewTapped:(id)arg1;
- (void)updateViews;
- (void)setupLayoutConstraints;
- (void)updateViewConstraints;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)resetLayoutConstraints;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setupViews;
- (void)viewDidLoad;
- (id)initWithContact:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) UITraitCollection *traitCollection;

@end

