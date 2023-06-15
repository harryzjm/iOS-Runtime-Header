//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class CNContact;
@protocol CNPosterOnboardingWelcomeViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface CNPosterOnboardingWelcomeViewController : UIViewController
{
    _Bool _hasOptionToSkip;
    _Bool _hasExistingNickname;
    CNContact *_contact;
    id <CNPosterOnboardingWelcomeViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <CNPosterOnboardingWelcomeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool hasExistingNickname; // @synthesize hasExistingNickname=_hasExistingNickname;
@property(nonatomic) _Bool hasOptionToSkip; // @synthesize hasOptionToSkip=_hasOptionToSkip;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
- (void)onboardingWelcomeViewDidTapCancel;
- (void)onboardingWelcomeViewDidTapContinue;
- (void)viewDidLoad;
- (id)initWithContact:(id)arg1;

@end

