//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NTKColoringLabel;

@interface NTKRichComplicationBaseCircularStackTextView
{
    NTKColoringLabel *_line1Label;
    NTKColoringLabel *_line2Label;
    unsigned long long _highlightMode;
}

+ (_Bool)supportsComplicationFamily:(long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long highlightMode; // @synthesize highlightMode=_highlightMode;
@property(retain, nonatomic) NTKColoringLabel *line2Label; // @synthesize line2Label=_line2Label;
@property(retain, nonatomic) NTKColoringLabel *line1Label; // @synthesize line1Label=_line1Label;
- (long long)_line2FilterStyle;
- (long long)_line1FilterStyle;
- (void)updateMonochromeColor;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)_editingDidEnd;
- (void)layoutSubviews;
- (id)_desiredFontForLabel:(id)arg1;
- (id)_createAndAddLabel;
- (id)initWithFamily:(long long)arg1;

@end
