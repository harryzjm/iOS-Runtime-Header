//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, UITextField;

@interface _SFBookmarkTextEntryTableViewCell : UITableViewCell
{
    NSLayoutConstraint *_leadingConstraint;
    UITextField *_textField;
}

@property(readonly, nonatomic) UITextField *editableTextField; // @synthesize editableTextField=_textField;
- (void).cxx_destruct;
- (void)setSeparatorInset:(struct UIEdgeInsets)arg1;
- (void)updateConstraints;
- (id)initWithText:(id)arg1 autocapitalizationType:(long long)arg2 autocorrectionType:(long long)arg3;

@end
