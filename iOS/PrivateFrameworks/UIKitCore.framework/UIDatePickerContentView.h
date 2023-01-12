//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class UILabel, _UIDatePickerMode;

__attribute__((visibility("hidden")))
@interface UIDatePickerContentView : UIView
{
    struct {
        unsigned int isAmPm:1;
        unsigned int useDigitFont:1;
    } _datePickerContentViewFlags;
    UILabel *_titleLabel;
    double _titleLabelMaxX;
    long long _titleAlignment;
    _UIDatePickerMode *_mode;
}

- (void).cxx_destruct;
@property(retain, nonatomic) _UIDatePickerMode *mode; // @synthesize mode=_mode;
@property(nonatomic) long long titleAlignment; // @synthesize titleAlignment=_titleAlignment;
@property(nonatomic) double titleLabelMaxX; // @synthesize titleLabelMaxX=_titleLabelMaxX;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)layoutSubviews;
@property(nonatomic) _Bool useDigitFont;
@property(nonatomic) _Bool isAmPm;
- (_Bool)_canBeReusedInPickerView;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithMode:(id)arg1;

@end

