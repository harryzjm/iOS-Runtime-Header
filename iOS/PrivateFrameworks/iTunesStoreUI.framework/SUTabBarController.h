//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITabBarController.h>

#import <iTunesStoreUI/SUOverlayBackgroundDelegate-Protocol.h>
#import <iTunesStoreUI/_UIBasicAnimationFactory-Protocol.h>

@class NSArray, NSMutableArray, NSString, SUClientInterface, SUNavigationBarBackgroundView, SUPreviewOverlayViewController, SUViewController, UIImage, UIViewController;
@protocol SUTabBarControllerDelegate;

@interface SUTabBarController : UITabBarController <SUOverlayBackgroundDelegate, _UIBasicAnimationFactory>
{
    SUClientInterface *_clientInterface;
    NSString *_moreListTitle;
    NSMutableArray *_overlayBackgroundViewControllers;
    UIViewController *_preTransientSelectedViewController;
    long long _reloadingUnderneathTransientControllerCount;
    NSArray *_sections;
    _Bool _ignoreTabReselection;
    UIImage *_moreListSelectedImage;
    UIImage *_moreListUnselectedImage;
    SUViewController *_preloadedViewController;
    NSString *_preloadedViewControllerIdentifier;
    NSString *_preloadedViewControllerKey;
    SUPreviewOverlayViewController *_previewOverlayViewController;
    long long _storeBarStyle;
    SUNavigationBarBackgroundView *_tabBarBackdropView;
}

+ (Class)_moreNavigationControllerClass;
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) NSString *moreListTitle; // @synthesize moreListTitle=_moreListTitle;
@property(readonly, nonatomic) SUClientInterface *clientInterface; // @synthesize clientInterface=_clientInterface;
- (id)_viewControllerForContext:(id)arg1;
- (void)_transitionSafeHandlePartnerChange:(id)arg1;
- (id)_sectionForType:(long long)arg1;
- (id)_sectionForIdentifier:(id)arg1;
- (_Bool)_saveTransientNavigationPathToDefaults;
- (_Bool)_saveNavigationPathToDefaults;
- (id)_rootViewControllerForSection:(id)arg1;
- (void)_restoreArchivedTransientContexts:(id)arg1;
- (void)_restoreOverlayContexts:(id)arg1;
- (void)_restoreArchivedContexts:(id)arg1;
- (void)_reloadViewControllersFromSections:(id)arg1 animated:(_Bool)arg2;
- (void)_moveView:(id)arg1 toView:(id)arg2;
- (void)_moveTransientViewController:(id)arg1 toSectionWithIdentifier:(id)arg2 asRoot:(_Bool)arg3;
- (void)_longPressAction:(id)arg1;
- (_Bool)_isReloadingUnderneathTransientViewController;
- (void)_fixupViewControllers;
- (void)_fixupTabBarSelection;
- (void)_endReloadingUnderneathTransientViewController;
- (void)_beginReloadingUnderneathTransientViewController;
- (id)_archivedContextsForViewController:(id)arg1;
- (void)_applyMoreListConfiguration;
- (void)_showPreviewOverlay:(id)arg1 animated:(_Bool)arg2;
- (void)_setStoreBarStyle:(long long)arg1;
@property(readonly, nonatomic, getter=_previewOverlayViewController) SUPreviewOverlayViewController *_previewOverlayViewController;
- (void)_hidePreviewOverlayAnimated:(_Bool)arg1;
- (void)_partnerChanged:(id)arg1;
- (void)_applicationDidChangeStatusBarFrame:(id)arg1;
- (id)_timingFunctionForAnimation;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (id)viewControllerForSectionType:(long long)arg1;
- (id)viewControllerForSectionIdentifier:(id)arg1;
@property(retain, nonatomic) NSString *selectedIdentifier;
- (unsigned long long)indexOfViewControllerWithSectionType:(long long)arg1;
- (void)scriptOverlayBackgroundDidDismiss:(id)arg1;
- (_Bool)presentOverlayBackgroundViewController:(id)arg1;
- (id)overlayBackgroundViewController;
- (void)dismissOverlayBackgroundViewController;
- (_Bool)window:(id)arg1 shouldAutorotateToInterfaceOrientation:(long long)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)cancelTransientViewController:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)tabBar:(id)arg1 willShowCustomizationSheet:(id)arg2 withNavigationBar:(id)arg3;
- (void)tabBar:(id)arg1 willEndCustomizingItems:(id)arg2 changed:(_Bool)arg3;
- (void)tabBar:(id)arg1 didEndCustomizingItems:(id)arg2 changed:(_Bool)arg3;
- (unsigned long long)supportedInterfaceOrientations;
- (void)setViewControllers:(id)arg1 animated:(_Bool)arg2;
- (void)setTransientViewController:(id)arg1 animated:(_Bool)arg2;
- (id)selectedViewController;
- (void)_setSelectedViewController:(id)arg1;
- (id)_sectionForViewController:(id)arg1;
- (id)rotatingHeaderView;
- (id)rotatingFooterView;
- (void)loadView;
- (long long)ITunesStoreUIBarStyle;
- (void)setTransientViewController:(id)arg1 onSectionWithIdentifier:(id)arg2;
- (void)setSectionOrdering:(id)arg1;
- (void)setMoreListSelectedImage:(id)arg1 unselectedImage:(id)arg2;
- (void)selectSectionOfType:(long long)arg1;
- (void)selectDefaultSection;
- (_Bool)saveToDefaults;
- (_Bool)saveOrderingToDefaults;
- (void)resetUserDefaults;
- (void)resetToSystemDefaults;
- (void)reloadSectionWithIdentifier:(id)arg1 URL:(id)arg2;
- (void)reloadSectionVisibilityAnimated:(_Bool)arg1;
- (void)pushTransientViewController:(id)arg1 onSectionWithIdentifier:(id)arg2;
- (_Bool)loadFromDefaults;
- (_Bool)loadFromDefaultsAndSetSections:(id)arg1;
- (void)dealloc;
- (id)initWithClientInterface:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) id <SUTabBarControllerDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

