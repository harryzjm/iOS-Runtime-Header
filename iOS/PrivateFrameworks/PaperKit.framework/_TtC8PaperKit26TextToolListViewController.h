//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC8PaperKit26TextToolListViewController : UIViewController
{
    MISSING_TYPE *stackView;
    MISSING_TYPE *contentSizeObserver;
    MISSING_TYPE *minimumItemHeight;
    MISSING_TYPE *minimumPreferredContentSizeWidth;
    MISSING_TYPE *delegate;
    MISSING_TYPE *autoFillFormListItemVisible;
    MISSING_TYPE *addShapeListItemVisible;
    MISSING_TYPE *$__lazy_storage_$_listItemViews;
    MISSING_TYPE *$__lazy_storage_$_addTextBoxListItemView;
    MISSING_TYPE *$__lazy_storage_$_autoFillFormListItemView;
    MISSING_TYPE *$__lazy_storage_$_addSignatureListItemView;
    MISSING_TYPE *$__lazy_storage_$_addShapeListItemView;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)didTapAddShapeListItemView:(id)arg1 forEvent:(id)arg2;
- (void)didTapAutoFillFormListItemView:(id)arg1 forEvent:(id)arg2;
- (void)didTapAddSignatureListItemView:(id)arg1 forEvent:(id)arg2;
- (void)didTapAddTextBoxListItemView:(id)arg1 forEvent:(id)arg2;
- (void)updatePreferredContentSize;
- (_Bool)_canShowWhileLocked;
- (void)viewDidLoad;

@end

