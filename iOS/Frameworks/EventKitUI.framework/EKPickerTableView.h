//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIDatePicker, UITableView;
@protocol EKPickerTableViewDelegate;

__attribute__((visibility("hidden")))
@interface EKPickerTableView : UIView
{
    UIDatePicker *_datePicker;
    UITableView *_tableView;
    _Bool _showsDatePicker;
    _Bool _usesKeyboard;
    id <EKPickerTableViewDelegate> _delegate;
}

@property(nonatomic) _Bool usesKeyboard; // @synthesize usesKeyboard=_usesKeyboard;
@property(nonatomic) _Bool showsDatePicker; // @synthesize showsDatePicker=_showsDatePicker;
@property(nonatomic) __weak id <EKPickerTableViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(readonly, nonatomic) UIDatePicker *datePicker; // @synthesize datePicker=_datePicker;
- (void).cxx_destruct;
- (void)_datePickerDoubleTapped:(id)arg1;
- (id)inputView;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (double)heightWithDatePickerAndTableHeight:(double)arg1;
- (void)setShowsDatePicker:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)canBecomeFirstResponder;
@property(nonatomic) _Bool usesBlackDatePicker;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 tableViewController:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_updateTableContentInsetForKeyboard:(id)arg1;
- (struct CGRect)_frameForDatePicker;
- (double)_heightForDatePicker;
- (void)_updateTableContentInset;

@end

