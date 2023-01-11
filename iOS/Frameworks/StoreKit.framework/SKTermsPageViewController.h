//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <StoreKit/UINavigationBarDelegate-Protocol.h>

@class NSString, UINavigationBar, UIToolbar, UIWebView;
@protocol SKTermsPageViewControllerDelegate;

@interface SKTermsPageViewController : UIViewController <UINavigationBarDelegate>
{
    UINavigationBar *_navbar;
    NSString *_terms;
    UIToolbar *_toolbar;
    UIWebView *_webview;
    id <SKTermsPageViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SKTermsPageViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_markupTermsWithHTML:(id)arg1;
- (void)_loadSubviews;
- (void)_dismissViewControllerAnimated:(_Bool)arg1 withAcceptance:(_Bool)arg2;
- (void)_dismissViewControllerAnimated:(_Bool)arg1;
- (void)_buttonDecline:(id)arg1;
- (void)_buttonAccept:(id)arg1;
- (void)_dismissViewController;
- (long long)positionForBar:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (unsigned long long)edgesForExtendedLayout;
- (id)initWithTerms:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
