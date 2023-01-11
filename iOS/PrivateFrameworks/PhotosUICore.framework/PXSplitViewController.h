//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UISplitViewController.h>

#import <PhotosUICore/UISplitViewControllerDelegate-Protocol.h>

@class NSHashTable, UIViewController;

@interface PXSplitViewController : UISplitViewController <UISplitViewControllerDelegate>
{
    _Bool _inViewWillTransitionToSize;
    long long _originalPreferredDisplayMode;
    NSHashTable *_changeObservers;
    _Bool _wantsSidebarHidden;
    UIViewController *_sidebarViewController;
    UIViewController *_contentViewController;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(nonatomic) _Bool wantsSidebarHidden; // @synthesize wantsSidebarHidden=_wantsSidebarHidden;
@property(readonly, nonatomic) UIViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(readonly, nonatomic) UIViewController *sidebarViewController; // @synthesize sidebarViewController=_sidebarViewController;
- (long long)splitViewController:(id)arg1 displayModeForExpandingToProposedDisplayMode:(long long)arg2;
- (void)splitViewController:(id)arg1 willChangeToDisplayMode:(long long)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)dismissPrimaryColumnIfOverlay;
- (void)toggleSidebarVisibilityAnimated;
@property(readonly, nonatomic) _Bool isSidebarVisible;
- (void)unregisterChangeObserver:(id)arg1;
- (void)registerChangeObserver:(id)arg1;
- (_Bool)_isDisplayModeAllVisibleAllowed;
- (id)keyCommands;
- (id)_deepestUnambiguousResponder;
- (id)initWithCoder:(id)arg1;
- (id)initWithSidebarNavigationController:(id)arg1 contentViewController:(id)arg2;
- (id)px_endPointForTransition:(id)arg1;

@end
