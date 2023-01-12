//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSArray, NSLayoutConstraint, NSMutableArray, NSMutableIndexSet, NSString, UIControl, UIScrollView, UISelectionFeedbackGenerator, UIStackView, UIView, _SFSettingsAlertController, _SFSettingsAlertItem;

__attribute__((visibility("hidden")))
@interface _SFSettingsAlertContentController : UIViewController
{
    NSMutableArray *_items;
    NSMutableIndexSet *_groupStartIndices;
    UIScrollView *_scrollView;
    UIStackView *_stackView;
    NSArray *_focusedItemConstraints;
    NSArray *_stackViewTopBottomConstraints;
    NSLayoutConstraint *_stackViewWidthConstraint;
    UIView *_lastViewForAlignment;
    UIControl *_controlHighlightedForPan;
    UISelectionFeedbackGenerator *_feedbackGenerator;
    _Bool _updatePreferredContentSizeAfterLayout;
    _Bool _updateScrollPositionAfterLayout;
    _Bool _usesReverseOrder;
    _SFSettingsAlertController *_alertController;
    _SFSettingsAlertItem *_focusedItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) _SFSettingsAlertItem *focusedItem; // @synthesize focusedItem=_focusedItem;
@property(nonatomic) _Bool usesReverseOrder; // @synthesize usesReverseOrder=_usesReverseOrder;
@property(nonatomic) __weak _SFSettingsAlertController *alertController; // @synthesize alertController=_alertController;
- (void)alertItemViewContentSizeDidChange:(id)arg1;
- (void)_panRecognized:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)_updateSeparators;
- (void)_tappedItemView:(id)arg1;
- (void)_stepperValueChanged:(id)arg1;
- (id)_createViewForItem:(id)arg1;
- (void)_alignButtonImageView:(id)arg1;
- (void)_addViewForItem:(id)arg1;
- (void)_addGroupSeparatorIfNeededBeforeItemAtIndex:(unsigned long long)arg1;
- (void)addDivider;
- (void)addItem:(id)arg1;
- (void)_updateFocusedItemConstraints;
@property(readonly, nonatomic) NSArray *items;
- (_Bool)canBecomeFirstResponder;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_scrollToBottomIfNeeded;
- (void)_updatePreferredContentSize;
- (void)loadView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

