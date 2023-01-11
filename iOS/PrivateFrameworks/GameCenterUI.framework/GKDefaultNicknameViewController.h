//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <GameCenterUI/CNPhotoPickerViewControllerDelegate-Protocol.h>
#import <GameCenterUI/GKAvatarContainerViewDelegate-Protocol.h>
#import <GameCenterUI/GKNicknameControllerDelegate-Protocol.h>

@class GKAvatarContainerView, GKNicknameController, GKReachability, NSLayoutConstraint, NSString, OBBoldTrayButton, UIActivityIndicatorView, UIImageView, UILabel, UIStackView, UITextField, UIView, UIVisualEffectView;

@interface GKDefaultNicknameViewController : UIViewController <GKAvatarContainerViewDelegate, CNPhotoPickerViewControllerDelegate, GKNicknameControllerDelegate>
{
    GKAvatarContainerView *_editAvatarView;
    UIView *_avatarContainer;
    UIVisualEffectView *_visualEffectView;
    UIStackView *_mainStackView;
    UITextField *_nickname;
    UIView *_buttonContainer;
    UIImageView *_bubbleImageView;
    OBBoldTrayButton *_continueButton;
    NSLayoutConstraint *_mainStackViewTrailingConstraint;
    NSLayoutConstraint *_mainStackViewLeadingConstraint;
    NSLayoutConstraint *_continueButtonEqualMainStackViewWidthConstraint;
    NSLayoutConstraint *_continueButtonWidthConstraint;
    NSLayoutConstraint *_continueButtonBottomConstraint;
    NSLayoutConstraint *_topMargin;
    UIStackView *_middleStackView;
    UILabel *_message;
    UIActivityIndicatorView *_activityIndicator;
    UILabel *_mainTitle;
    NSLayoutConstraint *_avatarContainerLandscapeHeight;
    GKReachability *_reachability;
    GKNicknameController *_nicknameController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GKNicknameController *nicknameController; // @synthesize nicknameController=_nicknameController;
@property(retain, nonatomic) GKReachability *reachability; // @synthesize reachability=_reachability;
@property(retain, nonatomic) NSLayoutConstraint *avatarContainerLandscapeHeight; // @synthesize avatarContainerLandscapeHeight=_avatarContainerLandscapeHeight;
@property(retain, nonatomic) UILabel *mainTitle; // @synthesize mainTitle=_mainTitle;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) UILabel *message; // @synthesize message=_message;
@property(retain, nonatomic) UIStackView *middleStackView; // @synthesize middleStackView=_middleStackView;
@property(retain, nonatomic) NSLayoutConstraint *topMargin; // @synthesize topMargin=_topMargin;
@property(retain, nonatomic) NSLayoutConstraint *continueButtonBottomConstraint; // @synthesize continueButtonBottomConstraint=_continueButtonBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *continueButtonWidthConstraint; // @synthesize continueButtonWidthConstraint=_continueButtonWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *continueButtonEqualMainStackViewWidthConstraint; // @synthesize continueButtonEqualMainStackViewWidthConstraint=_continueButtonEqualMainStackViewWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *mainStackViewLeadingConstraint; // @synthesize mainStackViewLeadingConstraint=_mainStackViewLeadingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *mainStackViewTrailingConstraint; // @synthesize mainStackViewTrailingConstraint=_mainStackViewTrailingConstraint;
@property(retain, nonatomic) OBBoldTrayButton *continueButton; // @synthesize continueButton=_continueButton;
@property(retain, nonatomic) UIImageView *bubbleImageView; // @synthesize bubbleImageView=_bubbleImageView;
@property(retain, nonatomic) UIView *buttonContainer; // @synthesize buttonContainer=_buttonContainer;
@property(retain, nonatomic) UITextField *nickname; // @synthesize nickname=_nickname;
@property(retain, nonatomic) UIStackView *mainStackView; // @synthesize mainStackView=_mainStackView;
@property(retain, nonatomic) UIVisualEffectView *visualEffectView; // @synthesize visualEffectView=_visualEffectView;
@property(retain, nonatomic) UIView *avatarContainer; // @synthesize avatarContainer=_avatarContainer;
@property(retain, nonatomic) GKAvatarContainerView *editAvatarView; // @synthesize editAvatarView=_editAvatarView;
- (void)settingsPressed:(id)arg1;
- (void)dismiss:(id)arg1;
- (void)refreshAvatarImage;
- (void)presentDeleteAvatarImageAlert;
- (void)photoPicker:(id)arg1 didUpdatePhotoForContact:(id)arg2 withContactImage:(id)arg3;
- (void)photoPickerDidCancel:(id)arg1;
- (void)presentAvatarPicker;
- (void)avatarView:(id)arg1 didSelectImageWithEditingEnabled:(_Bool)arg2;
- (void)addEditAvatarContainerView;
- (void)animateNicknameTextFieldIntoView:(id)arg1;
- (long long)getTopMargin;
- (void)nicknameUpdateAvatarImage:(id)arg1;
- (void)nicknameTextDidChangeWithMessage:(id)arg1;
- (void)nicknameUpdateRequestCompletedWithStatus:(id)arg1 error:(id)arg2;
- (void)nicknameDidResignFirstResponder;
- (void)nicknameDidBecomeFirstResponder;
- (_Bool)nicknameShouldBeginEditing;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)cancelPressed:(id)arg1;
- (void)fadeNonEssentialViews:(_Bool)arg1;
- (void)enableOrDisableNicknameEditing;
@property(readonly, nonatomic) _Bool isAvatarEditingSupported;
- (void)reachabilityDidChange:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateUIBasedOnTraitCollection;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)setupNavigationBar;
- (void)updateLeftBarButtonWithTitle:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
