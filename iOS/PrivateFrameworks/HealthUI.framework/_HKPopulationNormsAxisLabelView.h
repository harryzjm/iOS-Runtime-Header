//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class HKPopulationNormsAxisLabel, UIColor, UIFont, UILabel;

@interface _HKPopulationNormsAxisLabelView : UIView
{
    UILabel *_rangeStartLabel;
    UILabel *_rangeSeparatorLabel;
    UILabel *_rangeEndLabel;
    HKPopulationNormsAxisLabel *_axisLabel;
    UIColor *_textColor;
    UIFont *_font;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(readonly, nonatomic) HKPopulationNormsAxisLabel *axisLabel; // @synthesize axisLabel=_axisLabel;
- (void)layoutSubviews;
- (id)initWithLabel:(id)arg1;

@end
