//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface HUCheckmarkAccessoryView : UIView
{
    _Bool _checked;
    _Bool _disabled;
    UIImageView *_checkmarkImageView;
}

+ (id)grayBorderColor;
+ (double)borderWidth;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *checkmarkImageView; // @synthesize checkmarkImageView=_checkmarkImageView;
@property(nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
@property(nonatomic) _Bool checked; // @synthesize checked=_checked;
- (void)_updateColors;
- (void)tintColorDidChange;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
