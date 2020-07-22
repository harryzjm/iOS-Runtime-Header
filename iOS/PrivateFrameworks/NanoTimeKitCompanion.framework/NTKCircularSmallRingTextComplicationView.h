//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NTKColoringLabel;

@interface NTKCircularSmallRingTextComplicationView
{
    NTKColoringLabel *_label;
}

+ (_Bool)supportsComplicationFamily:(long long)arg1;
+ (_Bool)handlesComplicationTemplate:(id)arg1;
+ (void)load;
- (void).cxx_destruct;
- (void)_enumerateForegroundColoringViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)_updateForTemplateChange;
- (void)_updateLabelWithTextProvider:(id)arg1;
- (void)updateLabelWithString:(id)arg1;
- (void)layoutSubviews;
- (_Bool)_wantsPlatter;
- (void)_updateLabelsForFontChange;
- (id)initWithFrame:(struct CGRect)arg1;

@end
