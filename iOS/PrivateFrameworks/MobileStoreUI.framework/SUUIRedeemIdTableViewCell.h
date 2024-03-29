//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class NSString, UITextField;
@protocol SUUIRedeemIdTableViewCellDelegate;

__attribute__((visibility("hidden")))
@interface SUUIRedeemIdTableViewCell : UITableViewCell
{
    id <SUUIRedeemIdTableViewCellDelegate> _delegate;
    UITextField *_textField;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(nonatomic) __weak id <SUUIRedeemIdTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_initializeTextField;
- (void)textFieldDidChange:(id)arg1;
- (_Bool)textFieldShouldClear:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)setAutoCapitalizationType:(long long)arg1;
- (void)setReturnKeyType:(long long)arg1;
- (void)setKeyboardType:(long long)arg1;
- (void)setPlaceholderText:(id)arg1;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

