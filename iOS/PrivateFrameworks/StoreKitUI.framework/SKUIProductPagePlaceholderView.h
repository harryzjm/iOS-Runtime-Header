//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIColor, UIImageView, UILabel;

@interface SKUIProductPagePlaceholderView : UIView
{
    UIImageView *_imageView;
    UILabel *_label;
    UIColor *_textColor;
}

@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (id)initWithPlaceholderString:(id)arg1 isPad:(_Bool)arg2;

@end
