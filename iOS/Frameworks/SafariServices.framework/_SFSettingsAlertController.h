//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <SafariServices/UIGestureRecognizerDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSString, UIControl, UIScrollView, UISelectionFeedbackGenerator, UIStackView, UIView, _SFSettingsAlertItem;

@interface _SFSettingsAlertController : UIViewController <UIGestureRecognizerDelegate>
{
    NSMutableArray *_items;
    NSMutableArray *_flattenedItems;
    UIScrollView *_scrollView;
    UIStackView *_stackView;
    NSArray *_focusedItemConstraints;
    NSArray *_stackViewTopBottomConstraints;
    UIView *_lastViewForAlignment;
    UIControl *_controlHighlightedForPan;
    UISelectionFeedbackGenerator *_feedbackGenerator;
    _SFSettingsAlertItem *_focusedItem;
}

@property(retain, nonatomic) _SFSettingsAlertItem *focusedItem; // @synthesize focusedItem=_focusedItem;
- (void).cxx_destruct;
- (void)_panRecognized:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)_updateSeparators;
- (void)_tappedItemView:(id)arg1;
- (void)_stepperValueChanged:(id)arg1;
- (id)_createViewForItem:(id)arg1;
- (void)_alignButtonImageView:(id)arg1;
- (void)_addViewForItem:(id)arg1;
- (void)addItem:(id)arg1;
- (void)_updateFocusedItemConstraints;
@property(readonly, nonatomic) NSArray *items;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
