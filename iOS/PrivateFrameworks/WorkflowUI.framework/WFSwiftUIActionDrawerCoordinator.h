//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WorkflowUI/UIPopoverPresentationControllerDelegate-Protocol.h>
#import <WorkflowUI/WFActionDrawerDelegate-Protocol.h>

@class NSString, UIViewController, WFActionDrawerResultsController, WFDrawerController, WFEditorDrawerViewController;
@protocol WFSwiftUIActionDrawerCoordinatorDelegate;

@interface WFSwiftUIActionDrawerCoordinator : NSObject <WFActionDrawerDelegate, UIPopoverPresentationControllerDelegate>
{
    WFActionDrawerResultsController *_resultsController;
    id <WFSwiftUIActionDrawerCoordinatorDelegate> _delegate;
    unsigned long long _presentationMode;
    WFEditorDrawerViewController *_drawerViewController;
    UIViewController *_inspectorPaneContainerViewController;
    UIViewController *_visibleInspectorPaneContentViewController;
    WFDrawerController *_drawerController;
    UIViewController *_presentedPopover;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIViewController *presentedPopover; // @synthesize presentedPopover=_presentedPopover;
@property(readonly, nonatomic) WFDrawerController *drawerController; // @synthesize drawerController=_drawerController;
@property(readonly, nonatomic) UIViewController *visibleInspectorPaneContentViewController; // @synthesize visibleInspectorPaneContentViewController=_visibleInspectorPaneContentViewController;
@property(readonly, nonatomic) UIViewController *inspectorPaneContainerViewController; // @synthesize inspectorPaneContainerViewController=_inspectorPaneContainerViewController;
@property(readonly, nonatomic) WFEditorDrawerViewController *drawerViewController; // @synthesize drawerViewController=_drawerViewController;
@property(readonly, nonatomic) unsigned long long presentationMode; // @synthesize presentationMode=_presentationMode;
@property(nonatomic) __weak id <WFSwiftUIActionDrawerCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) WFActionDrawerResultsController *resultsController; // @synthesize resultsController=_resultsController;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)presentDrawerViewController:(id)arg1 inPopover:(_Bool)arg2 withSourceRect:(struct CGRect)arg3;
- (void)expandDrawer;
- (void)collapseDrawer;
- (void)appendAction:(id)arg1;
- (void)setInspectorPaneViewController:(id)arg1;
- (void)configureAsNavigationStackInParentViewController:(id)arg1;
- (void)configureAsBottomSheetInParentViewController:(id)arg1 belowSubview:(id)arg2;
- (id)newDrawerViewControllerWithStyle:(unsigned long long)arg1;
- (void)responderDidBeginEditing:(id)arg1;
- (void)unsubscribeFromTextEditingNotifications;
- (void)subscribeForTextEditingNotifications;
- (void)dealloc;
- (id)initWithResultsController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
