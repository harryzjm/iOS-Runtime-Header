//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UILabel.h>

@class UIColor, UIImageView;

@interface CKLabel : UILabel
{
    UIImageView *_titleIconImageView;
    long long _titleIconImageType;
    UIColor *_titleIconImageColor;
}

@property(retain, nonatomic) UIColor *titleIconImageColor; // @synthesize titleIconImageColor=_titleIconImageColor;
@property(nonatomic) long long titleIconImageType; // @synthesize titleIconImageType=_titleIconImageType;
@property(retain, nonatomic) UIImageView *titleIconImageView; // @synthesize titleIconImageView=_titleIconImageView;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)drawTextInRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)init;

@end
