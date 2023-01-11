//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSArray, NSDictionary, OBPrivacyLinkController, WLKUIAccessView_iOS, WLKUISpinnerView;

@interface _WLKUIAccessViewController : UIViewController
{
    WLKUIAccessView_iOS *_accessView;
    WLKUISpinnerView *_loadingView;
    OBPrivacyLinkController *_privacyController;
    NSArray *_bundleIDs;
    NSDictionary *_options;
    _Bool _hasCalledCompletion;
    NSArray *_appInfos;
    NSArray *_appChannels;
    _Bool _hasOptedIn;
    _Bool _shouldDenyOnCancel;
    _Bool _suppressWelcomeVideoAddOnOptIn;
    CDUnknownBlockType _completionHandler;
}

+ (_Bool)_isHostedInRemoteViewService;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void).cxx_destruct;
- (id)preferredFocusEnvironments;
- (id)cappedTraitCollection;
- (id)_watchListAppIcon;
- (void)_fetchRemoteAppInfo;
- (id)_imageForBundleID:(id)arg1;
- (void)_presentGenericErrorWithCompletion:(CDUnknownBlockType)arg1;
- (void)_toggleLoadingScreen;
- (void)_setupAccessViews;
- (void)_handleNackButton:(id)arg1;
- (void)_handleMenuGesture:(id)arg1;
- (void)_handleSeeAllButton:(id)arg1;
- (void)_disallow:(id)arg1;
- (void)_allow:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)_init;
- (id)init;
- (void)dealloc;
- (id)initWithBundleIDs:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

