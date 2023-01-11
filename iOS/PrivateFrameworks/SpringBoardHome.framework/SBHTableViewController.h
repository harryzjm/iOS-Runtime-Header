//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@class NSArray, UIView;

@interface SBHTableViewController : UITableViewController
{
    long long _styleBeforeShowingNoResults;
    struct CGRect _keyboardFrame;
    NSArray *_centerNoResultsFoundLabelConstraints;
    _Bool _showNoResultsView;
    UIView *_noResultsView;
}

+ (Class)tableViewClass;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *noResultsView; // @synthesize noResultsView=_noResultsView;
@property(nonatomic) _Bool showNoResultsView; // @synthesize showNoResultsView=_showNoResultsView;
- (void)_resetNoResultsView;
- (void)_reloadNoResultsFoundLabelForKeyboardNotification:(id)arg1;
- (void)_keyboardWillResize:(id)arg1;
- (void)_keyboardWillDismiss:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)_removeAutolayoutConstraintsForNoResultsFoundLabel;
- (double)_calculateVerticalMultiplierForKeyboard;
- (void)_addAutolayoutConstraintsForNoResultsFoundLabel;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;

@end
