//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class UITextField;
@protocol UITextFieldDelegate;

@interface MSCLSettingsTextFieldTableViewCell : UITableViewCell
{
    _Bool _enabled;
    long long _layoutStyle;
    UITextField *_textField;
    id <UITextFieldDelegate> _delegate;
    double _labelWidth;
}

@property(nonatomic) double labelWidth; // @synthesize labelWidth=_labelWidth;
@property(nonatomic) __weak id <UITextFieldDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(nonatomic) long long layoutStyle; // @synthesize layoutStyle=_layoutStyle;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

