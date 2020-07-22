//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSString, UIActivityIndicatorView, UIBarButtonItem, UILabel, UITextView;
@protocol MusicTermsAgreementViewControllerDelegate;

@interface MusicTermsAgreementViewController : UIViewController
{
    UIBarButtonItem *_acceptingBarButtonItem;
    UIBarButtonItem *_agreeBarButtonItem;
    UIBarButtonItem *_cancelBarButtonItem;
    UILabel *_loadingLabel;
    UIActivityIndicatorView *_loadingActivityIndicatorView;
    UIBarButtonItem *_sendEmailBarButtonItem;
    UITextView *_termsTextView;
    _Bool _accepting;
    _Bool _loading;
    id <MusicTermsAgreementViewControllerDelegate> _delegate;
    NSString *_termsText;
}

@property(copy, nonatomic) NSString *termsText; // @synthesize termsText=_termsText;
@property(nonatomic, getter=isLoading) _Bool loading; // @synthesize loading=_loading;
@property(nonatomic) __weak id <MusicTermsAgreementViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isAccepting) _Bool accepting; // @synthesize accepting=_accepting;
- (void).cxx_destruct;
- (void)_updateViewState;
- (void)_updateBarButtonItems;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_sendEmailBarButtonItemAction:(id)arg1;
- (void)_cancelBarButtonItemAction:(id)arg1;
- (void)_agreeBarButtonItemAction:(id)arg1;
- (id)contentScrollView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

