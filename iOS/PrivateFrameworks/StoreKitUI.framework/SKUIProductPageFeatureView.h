//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, SKUIColorScheme, UIImage, UIImageView, UILabel;

@interface SKUIProductPageFeatureView : UIView
{
    UIImageView *_iconView;
    UILabel *_subtitleLabel;
    UILabel *_titleLabel;
    SKUIColorScheme *_colorScheme;
}

@property(retain, nonatomic) SKUIColorScheme *colorScheme; // @synthesize colorScheme=_colorScheme;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSString *subtitle;
@property(copy, nonatomic) UIImage *icon;

@end
