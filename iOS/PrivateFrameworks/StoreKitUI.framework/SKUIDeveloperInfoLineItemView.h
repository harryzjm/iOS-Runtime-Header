//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface SKUIDeveloperInfoLineItemView : UIView
{
    struct UIEdgeInsets _contentInset;
    UILabel *_labelLabel;
    UIView *_separatorView;
    UILabel *_valueLabel;
}

@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (id)initWithLabel:(id)arg1 value:(id)arg2;

@end
