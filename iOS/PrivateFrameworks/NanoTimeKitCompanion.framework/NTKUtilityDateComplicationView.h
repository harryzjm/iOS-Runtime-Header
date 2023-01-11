//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NTKDateComplicationLabel;

@interface NTKUtilityDateComplicationView
{
    NTKDateComplicationLabel *_label;
    unsigned long long _dateStyle;
}

@property(readonly, nonatomic) unsigned long long dateStyle; // @synthesize dateStyle=_dateStyle;
- (void).cxx_destruct;
- (id)foregroundColor;
- (void)setForegroundColor:(id)arg1;
- (id)accentColor;
- (void)setAccentColor:(id)arg1;
- (void)_invalidateLabelSize;
- (double)_widthThatFits;
- (void)setFont:(id)arg1;
- (void)setDateComplicationText:(id)arg1 withDayRange:(struct _NSRange)arg2 forDateStyle:(unsigned long long)arg3;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

