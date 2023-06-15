//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class NSArray, NSDictionary, NSMutableArray, VUIAccessView_iOS, VUIAppSpinnerView;

__attribute__((visibility("hidden")))
@interface _VUIAccessViewController : UIViewController
{
    VUIAccessView_iOS *_accessView;
    VUIAppSpinnerView *_loadingView;
    NSArray *_channels;
    NSMutableArray *_bundleIDs;
    NSDictionary *_options;
    _Bool _hasCalledCompletion;
    NSArray *_appInfos;
    NSArray *_appChannels;
    NSMutableArray *_channelIds;
    _Bool _shouldDenyOnCancel;
    CDUnknownBlockType _completionHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (id)preferredFocusEnvironments;
- (id)cappedTraitCollection;
- (id)_watchListAppIcon;
- (void)_fetchRemoteAppInfo;
- (id)_imageForBundleID:(id)arg1;
- (void)_presentGenericErrorWithCompletion:(CDUnknownBlockType)arg1;
- (void)_toggleLoadingScreen;
- (void)_setupAccessViews;
- (void)_setupNavigationBar;
- (void)_completeWithStatus:(unsigned long long)arg1;
- (void)_handleNackButton:(id)arg1;
- (void)_handleMenuGesture:(id)arg1;
- (void)_handleSeeAllButton:(id)arg1;
- (void)_disallow:(id)arg1;
- (void)_allow:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)_init;
- (id)init;
- (id)initWithBundleIDs:(id)arg1 channels:(id)arg2 options:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end

