//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UICollectionViewController.h"

@class NSArray, NSMutableArray, UIAlertControllerVisualStyle, UICollectionViewFlowLayout;
@protocol _UIAlertControllerTextFieldViewControllerContaining;

__attribute__((visibility("hidden")))
@interface _UIAlertControllerTextFieldViewController : UICollectionViewController
{
    NSMutableArray *textFieldViews;
    NSMutableArray *textFields;
    _Bool _textFieldsCanBecomeFirstResponder;
    UIAlertControllerVisualStyle *_visualStyle;
    UICollectionViewFlowLayout *_collectionViewLayout;
    _Bool _hidden;
    id <_UIAlertControllerTextFieldViewControllerContaining> _container;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isHidden) _Bool hidden; // @synthesize hidden=_hidden;
@property(nonatomic) __weak id <_UIAlertControllerTextFieldViewControllerContaining> container; // @synthesize container=_container;
@property(readonly) NSArray *textFields; // @synthesize textFields;
- (_Bool)_canShowWhileLocked;
- (_Bool)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;
- (_Bool)resignFirstResponder;
- (void)updateTextFieldStyle;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
@property(nonatomic) _Bool textFieldsCanBecomeFirstResponder;
- (void)removeAllTextFields;
- (long long)numberOfTextFields;
- (id)textFieldContainerViews;
- (id)textFieldAtIndex:(long long)arg1;
- (void)_updatePreferredContentSize;
- (void)_returnKeyPressedInTextField:(id)arg1;
- (id)addTextFieldWithPlaceholder:(id)arg1;
- (double)_bottomMarginForTextFields;
@property(nonatomic) UIAlertControllerVisualStyle *visualStyle;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

@end

