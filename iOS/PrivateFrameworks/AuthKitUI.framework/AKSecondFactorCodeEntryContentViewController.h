//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <AuthKitUI/AKSecondFactorCodeEntry-Protocol.h>
#import <AuthKitUI/CAAnimationDelegate-Protocol.h>

@class AKAppleIDAuthenticationContext, AKBasicLoginContentViewController, AKCodeEntryView, NSArray, NSString;

@interface AKSecondFactorCodeEntryContentViewController : UIViewController <CAAnimationDelegate, AKSecondFactorCodeEntry>
{
    AKCodeEntryView *_codeGeneratorView;
    AKBasicLoginContentViewController *_titleHeaderViewController;
    AKAppleIDAuthenticationContext *_authenticationContext;
    NSArray *_activeConstraints;
}

@property(retain, nonatomic) NSArray *activeConstraints; // @synthesize activeConstraints=_activeConstraints;
@property(retain, nonatomic) AKAppleIDAuthenticationContext *authenticationContext; // @synthesize authenticationContext=_authenticationContext;
@property(retain, nonatomic) AKBasicLoginContentViewController *titleHeaderViewController; // @synthesize titleHeaderViewController=_titleHeaderViewController;
@property(retain, nonatomic) AKCodeEntryView *codeGeneratorView; // @synthesize codeGeneratorView=_codeGeneratorView;
- (void).cxx_destruct;
- (void)setPasscodeFieldDisabled:(_Bool)arg1;
- (void)clearSecondFactorEntry;
- (void)jiggleAView;
@property(readonly, nonatomic) NSString *generatedCode;
@property(copy, nonatomic) NSString *reason;
- (void)_updateFontContstraints:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (void)updateViewConstraints;
- (void)_configureCodeGenView;
- (void)_configureTitleHeaderView;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

