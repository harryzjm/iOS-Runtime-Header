//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface _PKInkAttributesOpacityLabel : UIView
{
    double _opacityValue;
    UILabel *_titleLabel;
    UILabel *_valueLabel;
}

@property(retain, nonatomic) UILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) double opacityValue; // @synthesize opacityValue=_opacityValue;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (_Bool)isRTLLanguage;
- (id)initWithFrame:(struct CGRect)arg1;

@end

