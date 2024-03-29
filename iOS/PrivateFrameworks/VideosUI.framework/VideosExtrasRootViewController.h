//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class IKAppContext, NSArray, NSLayoutConstraint, NSObject, NSString, UIButton, UINavigationController, UIStackView, UITraitCollection, UIView, VideosExtrasArtworkDataSource, VideosExtrasContext, VideosExtrasFeatureContainerViewController, VideosExtrasMainTemplateViewController, VideosExtrasNavigationController;
@protocol IKAppDataStoring, IKAppUserDefaultsStoring, OS_dispatch_queue, VideosExtrasRootViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface VideosExtrasRootViewController : UIViewController
{
    NSLayoutConstraint *_bottomConstraint;
    VideosExtrasNavigationController *_navigationController;
    NSObject<OS_dispatch_queue> *_imageRequestQueue;
    _Bool _didAttemptRestartAfterAppContextFailure;
    _Bool _showsMenuBar;
    _Bool _showsBuiltInNavigationControls;
    VideosExtrasMainTemplateViewController *_mainTemplateViewController;
    UIView *_extrasMenuBarView;
    VideosExtrasContext *_context;
    id <VideosExtrasRootViewControllerDelegate> _delegate;
    VideosExtrasFeatureContainerViewController *_featureContainer;
    IKAppContext *_applicationContext;
    NSArray *_lastSelectedSnapshotViewControllers;
    UIStackView *_extrasMenuButtonsStackView;
    UIButton *_backButton;
    NSLayoutConstraint *_extrasScrollViewLeadingConstraint;
    id <IKAppDataStoring> _localStorage;
    id <IKAppDataStoring> _vendorStorage;
    id <IKAppUserDefaultsStoring> _userDefaultsStorage;
    VideosExtrasArtworkDataSource *_artworkDataSource;
    struct CGSize _initialPresentationSize;
}

+ (id)currentController;
- (void).cxx_destruct;
@property(retain, nonatomic) VideosExtrasArtworkDataSource *artworkDataSource; // @synthesize artworkDataSource=_artworkDataSource;
@property(retain, nonatomic) id <IKAppUserDefaultsStoring> userDefaultsStorage; // @synthesize userDefaultsStorage=_userDefaultsStorage;
@property(retain, nonatomic) id <IKAppDataStoring> vendorStorage; // @synthesize vendorStorage=_vendorStorage;
@property(retain, nonatomic) id <IKAppDataStoring> localStorage; // @synthesize localStorage=_localStorage;
@property(retain, nonatomic) NSLayoutConstraint *extrasScrollViewLeadingConstraint; // @synthesize extrasScrollViewLeadingConstraint=_extrasScrollViewLeadingConstraint;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) UIStackView *extrasMenuButtonsStackView; // @synthesize extrasMenuButtonsStackView=_extrasMenuButtonsStackView;
@property(retain, nonatomic) NSArray *lastSelectedSnapshotViewControllers; // @synthesize lastSelectedSnapshotViewControllers=_lastSelectedSnapshotViewControllers;
@property(retain, nonatomic) IKAppContext *applicationContext; // @synthesize applicationContext=_applicationContext;
@property(retain, nonatomic) VideosExtrasFeatureContainerViewController *featureContainer; // @synthesize featureContainer=_featureContainer;
@property(nonatomic) _Bool showsBuiltInNavigationControls; // @synthesize showsBuiltInNavigationControls=_showsBuiltInNavigationControls;
@property(nonatomic) _Bool showsMenuBar; // @synthesize showsMenuBar=_showsMenuBar;
@property(nonatomic) __weak id <VideosExtrasRootViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct CGSize initialPresentationSize; // @synthesize initialPresentationSize=_initialPresentationSize;
@property(readonly, nonatomic) __weak VideosExtrasContext *context; // @synthesize context=_context;
@property(retain, nonatomic) UIView *extrasMenuBarView; // @synthesize extrasMenuBarView=_extrasMenuBarView;
@property(retain, nonatomic) VideosExtrasMainTemplateViewController *mainTemplateViewController; // @synthesize mainTemplateViewController=_mainTemplateViewController;
@property(readonly, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
- (void)_showExtrasBar:(_Bool)arg1;
- (_Bool)shouldExtrasBeVisibleForViewSize:(struct CGSize)arg1;
- (void)_playbackWillEndNotification:(id)arg1;
- (_Bool)_areExtrasVisible;
- (void)_adjustExtrasVisibilityForViewSize:(struct CGSize)arg1;
@property(readonly, nonatomic) UIView *mainMenuBar;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)detectMainDocument:(id)arg1;
- (_Bool)_setMainDocumentWithViewController:(id)arg1;
- (void)_extrasMenuItemSelected:(id)arg1;
- (void)_backButtonPressed:(id)arg1;
- (id)_extrasMenuBarViewForElements:(id)arg1;
- (void)_setNavigationController:(id)arg1;
- (id)_createDataStorageForIdentifier:(id)arg1;
- (id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (_Bool)shouldAutorotate;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)prefersStatusBarHidden;
- (id)storeFrontCountryCode;
- (id)systemLanguage;
- (id)timeZone;
- (_Bool)isTimeZoneSet;
- (struct CGSize)screenSize;
- (unsigned long long)preferredVideoPreviewFormat;
- (unsigned long long)preferredVideoFormat;
- (void)appContext:(id)arg1 didStopWithOptions:(id)arg2;
- (void)appContext:(id)arg1 didFailWithError:(id)arg2;
- (void)_attemptRestart;
- (void)appContext:(id)arg1 didStartWithOptions:(id)arg2;
- (void)appContext:(id)arg1 evaluateAppJavaScriptInContext:(id)arg2;
- (id)navigationControllerForContext:(id)arg1;
- (id)deviceConfigForContext:(id)arg1;
- (id)viewElementRegistry;
- (_Bool)appUsesDefaultStyleSheets;
- (id)appLaunchParams;
- (id)vendorIdentifier;
- (id)appIdentifier;
- (_Bool)shouldIgnoreJSValidation;
- (id)appJSURL;
- (_Bool)appIsTrusted;
- (void)showExtrasMenuBarInFrame:(struct CGRect)arg1;
- (void)updateMenuButtonForSelectionAtIndex:(unsigned long long)arg1 deselectedIndex:(unsigned long long)arg2;
- (void)setClearsStackOnNextPush;
@property(readonly, nonatomic) NSArray *mainMenuItemElements;
- (void)popToFeatureOrMain;
- (void)start;
- (void)_stopOldContextIfNeeded;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (void)dealloc;
- (id)initWithContext:(id)arg1;
- (void)_setUpForApplication;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) UITraitCollection *overrideTraitCollection; // @dynamic overrideTraitCollection;
@property(readonly) Class superclass;

@end

