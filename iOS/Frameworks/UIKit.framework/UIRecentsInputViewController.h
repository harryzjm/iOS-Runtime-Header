//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSLayoutConstraint, NSString, UILexicon, UIView, UIViewController;
@protocol UIRecentsInputViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface UIRecentsInputViewController
{
    _Bool _canManageList;
    id <UIRecentsInputViewControllerDelegate> _recentInputDelegate;
    UILexicon *_recentInputs;
    long long _containingEffectStyle;
    UIView *_customHeaderView;
    NSLayoutConstraint *_widthConstraint;
    NSLayoutConstraint *_heightConstraint;
    NSString *_previouslyUsedString;
    NSString *_clearAllString;
    NSString *_enterNewString;
    UIView *_headerView;
    UIView *_headerContainerView;
    UIViewController *_headerContainerViewController;
}

@property(retain, nonatomic) UIViewController *headerContainerViewController; // @synthesize headerContainerViewController=_headerContainerViewController;
@property(retain, nonatomic) UIView *headerContainerView; // @synthesize headerContainerView=_headerContainerView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) NSString *enterNewString; // @synthesize enterNewString=_enterNewString;
@property(retain, nonatomic) NSString *clearAllString; // @synthesize clearAllString=_clearAllString;
@property(retain, nonatomic) NSString *previouslyUsedString; // @synthesize previouslyUsedString=_previouslyUsedString;
@property(retain, nonatomic) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *widthConstraint; // @synthesize widthConstraint=_widthConstraint;
@property(retain, nonatomic) UIView *customHeaderView; // @synthesize customHeaderView=_customHeaderView;
@property(nonatomic) _Bool canManageList; // @synthesize canManageList=_canManageList;
@property(nonatomic) long long containingEffectStyle; // @synthesize containingEffectStyle=_containingEffectStyle;
@property(retain, nonatomic) UILexicon *recentInputs; // @synthesize recentInputs=_recentInputs;
@property(nonatomic) __weak id <UIRecentsInputViewControllerDelegate> recentInputDelegate; // @synthesize recentInputDelegate=_recentInputDelegate;
- (void).cxx_destruct;
- (id)_uiktest_UnfocusedCellBackgroundView;
- (id)_uiktest_FocusedCellLabel;
- (id)_uiktest_UnfocusedCellLabel;
- (void)_overrideTraitCollectionForHeaderViewController;
- (void)_delete:(id)arg1;
- (void)scrollViewDidChangeContentSize:(id)arg1;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)tableView:(id)arg1 canFocusRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)indexPathForPreferredFocusedViewInTableView:(id)arg1;
- (id)preferredFocusedView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)updateTableViewWidth;
- (void)ensureConstraints;
- (void)didSelectButtonAtIndexPath:(id)arg1;

@end

