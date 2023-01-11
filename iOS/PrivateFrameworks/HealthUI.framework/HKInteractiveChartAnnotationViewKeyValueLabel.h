//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIStackView.h>

@class HKSelectedRangeLabel, UIColor;

@interface HKInteractiveChartAnnotationViewKeyValueLabel : UIStackView
{
    HKSelectedRangeLabel *_keyLabel;
    HKSelectedRangeLabel *_valueLabel;
    UIColor *_textColor;
}

@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(readonly, nonatomic) HKSelectedRangeLabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(readonly, nonatomic) HKSelectedRangeLabel *keyLabel; // @synthesize keyLabel=_keyLabel;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end
