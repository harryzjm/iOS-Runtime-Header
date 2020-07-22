//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <PassKitUI/PKPaymentSetupPrivacyFooterViewDelegate-Protocol.h>

@class PKExplanationView;

@interface PKExplanationViewController : UIViewController <PKPaymentSetupPrivacyFooterViewDelegate>
{
    _Bool _showCancelButton;
    _Bool _showDoneButton;
    long long _context;
    PKExplanationView *_explanationView;
}

@property(readonly, nonatomic) PKExplanationView *explanationView; // @synthesize explanationView=_explanationView;
@property(nonatomic) _Bool showDoneButton; // @synthesize showDoneButton=_showDoneButton;
@property(nonatomic) _Bool showCancelButton; // @synthesize showCancelButton=_showCancelButton;
@property(readonly, nonatomic) long long context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)privacyFooterLinkTapped:(id)arg1;
- (void)_dismissViewController;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (id)pkui_navigationBarTintColor;
- (_Bool)pkui_prefersNavigationBarShadowHidden;
- (id)initWithContext:(long long)arg1;
- (id)init;

@end
