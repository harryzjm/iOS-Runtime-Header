//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <AuthKitUI/AKIDPHandlerDelegate-Protocol.h>
#import <AuthKitUI/AKIDPPresentationController-Protocol.h>

@class AKIDPHandler, NSString, UIImageView, UILabel, UIStackView, WKWebView;

@interface AKIDPProvidedSignInViewController : UIViewController <AKIDPHandlerDelegate, AKIDPPresentationController>
{
    WKWebView *_webView;
    AKIDPHandler *_idpHandler;
    UIImageView *_secureIconView;
    UILabel *_titleLabel;
    UIStackView *_titleStackView;
}

@property(retain, nonatomic) UIStackView *titleStackView; // @synthesize titleStackView=_titleStackView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *secureIconView; // @synthesize secureIconView=_secureIconView;
@property(retain, nonatomic) AKIDPHandler *idpHandler; // @synthesize idpHandler=_idpHandler;
@property(readonly, nonatomic) WKWebView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (void)IDPHandler:(id)arg1 didStartLoadingPageInWebView:(id)arg2;
- (void)IDPHandler:(id)arg1 didFinishLoadingPageInWebView:(id)arg2;
- (void)_setNavigationTitle:(id)arg1;
- (void)setupTitleView;
- (void)_cancelBarButtonPressed:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithIDPHandler:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
