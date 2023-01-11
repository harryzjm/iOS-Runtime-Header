//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class NSString, UIColor, UILabel;

@interface PKTransactionStatusCell : UITableViewCell
{
    UILabel *_primaryLabel;
    UILabel *_secondaryTitleLabel;
    UILabel *_secondaryValueLabel;
    _Bool _templateLayout;
    _Bool _isBridge;
    NSString *_primaryText;
    NSString *_secondaryTitle;
    NSString *_secondaryValue;
    UIColor *_primaryTextOverrideColor;
}

@property(nonatomic) _Bool isBridge; // @synthesize isBridge=_isBridge;
@property(retain, nonatomic) UIColor *primaryTextOverrideColor; // @synthesize primaryTextOverrideColor=_primaryTextOverrideColor;
@property(copy, nonatomic) NSString *secondaryValue; // @synthesize secondaryValue=_secondaryValue;
@property(copy, nonatomic) NSString *secondaryTitle; // @synthesize secondaryTitle=_secondaryTitle;
@property(copy, nonatomic) NSString *primaryText; // @synthesize primaryText=_primaryText;
- (void).cxx_destruct;
- (struct UIEdgeInsets)_effectiveLayoutMargins;
- (struct CGSize)_layoutWithBounds:(struct CGRect)arg1;
- (void)_updateTextColors;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
