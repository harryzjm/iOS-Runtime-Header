//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NTKRichComplicationImageView;

@interface NTKRichComplicationBaseCircularImageView
{
    NTKRichComplicationImageView *_imageView;
}

+ (_Bool)supportsComplicationFamily:(long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NTKRichComplicationImageView *imageView; // @synthesize imageView=_imageView;
- (void)_updatePlatterColor;
- (void)updateMonochromeColor;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)setPaused:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFamily:(long long)arg1;

@end
