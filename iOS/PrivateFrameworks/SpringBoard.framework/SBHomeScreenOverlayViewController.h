//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <SpringBoard/SBHOccludable-Protocol.h>
#import <SpringBoard/SBHWidgetSheetViewControllerPresenter-Protocol.h>
#import <SpringBoard/WGWidgetGroupViewControllerDelegate-Protocol.h>

@class MTMaterialView, NSLayoutConstraint, NSString, SBFTodayGestureSettings, SBHRootFolderVisualConfiguration, SBHRootSidebarController, SBTitledHomeScreenButton, UIViewFloatAnimatableProperty;
@protocol SBHOccludable, SBHomeScreenOverlayViewControllerDelegate;

@interface SBHomeScreenOverlayViewController : UIViewController <WGWidgetGroupViewControllerDelegate, SBHWidgetSheetViewControllerPresenter, SBHOccludable>
{
    _Bool _occluded;
    _Bool _fromLeading;
    _Bool _shouldUseReducedMotionAnimation;
    _Bool _suppressesExtraEditingButtons;
    _Bool _showsDoneButton;
    _Bool _showsAddWidgetButton;
    double _titledButtonsAlpha;
    id <SBHomeScreenOverlayViewControllerDelegate> _delegate;
    double _presentationProgress;
    SBHRootSidebarController *_contentViewController;
    UIViewController<SBHOccludable> *_leftSidebarViewController;
    UIViewController<SBHOccludable> *_rightSidebarViewController;
    MTMaterialView *_backgroundView;
    SBHRootFolderVisualConfiguration *_rootFolderVisualConfiguration;
    NSLayoutConstraint *_contentLeadingConstraint;
    NSLayoutConstraint *_contentWidthConstraint;
    SBTitledHomeScreenButton *_doneButton;
    SBTitledHomeScreenButton *_widgetButton;
    SBFTodayGestureSettings *_gestureSettings;
    UIViewFloatAnimatableProperty *_overlayPresentationFloatAnimatableProperty;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIViewFloatAnimatableProperty *overlayPresentationFloatAnimatableProperty; // @synthesize overlayPresentationFloatAnimatableProperty=_overlayPresentationFloatAnimatableProperty;
@property(retain, nonatomic) SBFTodayGestureSettings *gestureSettings; // @synthesize gestureSettings=_gestureSettings;
@property(nonatomic) _Bool showsAddWidgetButton; // @synthesize showsAddWidgetButton=_showsAddWidgetButton;
@property(nonatomic) _Bool showsDoneButton; // @synthesize showsDoneButton=_showsDoneButton;
@property(retain, nonatomic) SBTitledHomeScreenButton *widgetButton; // @synthesize widgetButton=_widgetButton;
@property(retain, nonatomic) SBTitledHomeScreenButton *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) NSLayoutConstraint *contentWidthConstraint; // @synthesize contentWidthConstraint=_contentWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *contentLeadingConstraint; // @synthesize contentLeadingConstraint=_contentLeadingConstraint;
@property(readonly, nonatomic) SBHRootFolderVisualConfiguration *rootFolderVisualConfiguration; // @synthesize rootFolderVisualConfiguration=_rootFolderVisualConfiguration;
@property(readonly, nonatomic) MTMaterialView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) _Bool suppressesExtraEditingButtons; // @synthesize suppressesExtraEditingButtons=_suppressesExtraEditingButtons;
@property(retain, nonatomic) UIViewController<SBHOccludable> *rightSidebarViewController; // @synthesize rightSidebarViewController=_rightSidebarViewController;
@property(retain, nonatomic) UIViewController<SBHOccludable> *leftSidebarViewController; // @synthesize leftSidebarViewController=_leftSidebarViewController;
@property(readonly, nonatomic) SBHRootSidebarController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(nonatomic) _Bool shouldUseReducedMotionAnimation; // @synthesize shouldUseReducedMotionAnimation=_shouldUseReducedMotionAnimation;
@property(nonatomic, getter=isFromLeading) _Bool fromLeading; // @synthesize fromLeading=_fromLeading;
@property(nonatomic) double presentationProgress; // @synthesize presentationProgress=_presentationProgress;
@property(nonatomic) __weak id <SBHomeScreenOverlayViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double titledButtonsAlpha; // @synthesize titledButtonsAlpha=_titledButtonsAlpha;
@property(nonatomic, getter=isOccluded) _Bool occluded; // @synthesize occluded=_occluded;
- (void)setSuppressesEditingStateForListView:(_Bool)arg1;
- (void)updateExtraButtonVisibilityAnimated:(_Bool)arg1;
- (unsigned long long)presenterType;
- (void)_updateLayoutForEditButtons;
- (void)_button:(id)arg1 disappearAnimated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_button:(id)arg1 appearAnimated:(_Bool)arg2;
- (void)widgetButtonTriggered:(id)arg1;
- (void)doneButtonTriggered:(id)arg1;
- (void)setShowsAddWidgetButton:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setShowsDoneButton:(_Bool)arg1 animated:(_Bool)arg2;
- (id)makeTitledButtonOfClass:(Class)arg1;
- (id)newHomeScreenButtonBackgroundView;
- (void)_updateConstraintsForPresentationProgress:(double)arg1;
- (void)_configureMatchMoveAnimationForBackgroundView:(id)arg1 withSourceView:(id)arg2;
- (struct CGSize)_suggestedTodayViewSizeForBounds:(struct CGRect)arg1;
- (struct CGSize)widgetGroupViewController:(id)arg1 sizeForInterfaceOrientation:(long long)arg2;
- (_Bool)_canShowWhileLocked;
@property(readonly, nonatomic, getter=isHeaderVisible) _Bool headerVisible;
- (void)setPresentationProgress:(double)arg1 withAnimationUpdateMode:(long long)arg2 overrideAnimationSettings:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)animatePresentationProgress:(double)arg1 withGestureLiftOffVelocity:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setPresentationProgress:(double)arg1 interactive:(_Bool)arg2 animated:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
@property(readonly, nonatomic) double layerPresentationProgress;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(_Bool)arg2;
- (_Bool)bs_endAppearanceTransition;
- (_Bool)bs_endAppearanceTransition:(_Bool)arg1;
- (_Bool)bs_beginAppearanceTransition:(_Bool)arg1 animated:(_Bool)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(readonly, nonatomic) struct CGRect contentRect;
- (double)contentWidthWithContainerWidth:(double)arg1;
@property(readonly, nonatomic) double contentWidth;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
