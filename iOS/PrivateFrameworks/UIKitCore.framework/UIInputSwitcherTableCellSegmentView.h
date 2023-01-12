//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class UIImageView, UIInputSwitcherTableCellBackgroundView, UILabel;

__attribute__((visibility("hidden")))
@interface UIInputSwitcherTableCellSegmentView : UIView
{
    _Bool _selected;
    _Bool _usesDarkTheme;
    UILabel *_label;
    UIImageView *_imageView;
    UIInputSwitcherTableCellBackgroundView *_backgroundView;
}

+ (id)_fontForBiasLabel;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIInputSwitcherTableCellBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
@property(nonatomic) _Bool usesDarkTheme; // @synthesize usesDarkTheme=_usesDarkTheme;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

