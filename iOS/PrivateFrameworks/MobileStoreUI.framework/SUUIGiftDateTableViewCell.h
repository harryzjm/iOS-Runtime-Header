//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class NSDate, NSString, SUUIGiftConfiguration, UIDatePicker, UIImageView, UILabel, UIView;
@protocol SUUIGiftDateTableViewCellDelegate;

__attribute__((visibility("hidden")))
@interface SUUIGiftDateTableViewCell : UITableViewCell
{
    UIView *_bottomBorderView;
    _Bool _checked;
    UIImageView *_checkmarkView;
    UIDatePicker *_datePicker;
    UILabel *_labelLabel;
    UILabel *_placeholderLabel;
    UIView *_topBorderView;
    _Bool _leftToRight;
    id <SUUIGiftDateTableViewCellDelegate> _delegate;
    SUUIGiftConfiguration *_giftConfiguration;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool leftToRight; // @synthesize leftToRight=_leftToRight;
@property(retain, nonatomic) SUUIGiftConfiguration *giftConfiguration; // @synthesize giftConfiguration=_giftConfiguration;
@property(nonatomic) __weak id <SUUIGiftDateTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isChecked) _Bool checked; // @synthesize checked=_checked;
- (id)_newLabel;
- (id)_labelForDate:(id)arg1;
- (id)_labelColor;
- (void)_datePickerEditingDidBegin;
- (void)_datePickerDateDidChange;
- (void)layoutSubviews;
@property(copy, nonatomic) NSString *placeholder;
@property(copy, nonatomic) NSString *label;
@property(retain, nonatomic) NSDate *date;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

