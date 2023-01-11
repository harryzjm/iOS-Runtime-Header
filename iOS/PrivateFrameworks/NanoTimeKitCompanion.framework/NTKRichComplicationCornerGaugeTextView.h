//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NTKCurvedColoringLabel;

@interface NTKRichComplicationCornerGaugeTextView
{
    NTKCurvedColoringLabel *_outerLabel;
}

+ (_Bool)supportsComplicationFamily:(long long)arg1;
+ (_Bool)handlesComplicationTemplate:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NTKCurvedColoringLabel *outerLabel; // @synthesize outerLabel=_outerLabel;
- (void)updateMonochromeColor;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)_editingDidEnd;
- (void)_enumerateLabelsWithBlock:(CDUnknownBlockType)arg1;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (void)layoutSubviews;
- (id)init;

@end
