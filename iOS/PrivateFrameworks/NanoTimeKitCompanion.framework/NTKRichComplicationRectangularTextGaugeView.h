//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NTKColoringLabel, NTKRichComplicationLineProgressView, UIImageView;

@interface NTKRichComplicationRectangularTextGaugeView
{
    UIImageView *_headerImageView;
    NTKColoringLabel *_headerLabel;
    NTKColoringLabel *_line1Label;
    NTKRichComplicationLineProgressView *_progressView;
}

+ (_Bool)supportsComplicationFamily:(long long)arg1;
+ (_Bool)handlesComplicationTemplate:(id)arg1;
+ (void)load;
- (void).cxx_destruct;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (void)layoutSubviews;
- (id)init;

@end

