//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CAMFilterScrubberView, PUApertureSlider;

@interface CAMUtilityBar : UIView
{
    CAMFilterScrubberView *_filterScrubberView;
    PUApertureSlider *_apertureSlider;
    unsigned long long _visibleContent;
}

@property(nonatomic) unsigned long long visibleContent; // @synthesize visibleContent=_visibleContent;
@property(retain, nonatomic) PUApertureSlider *apertureSlider; // @synthesize apertureSlider=_apertureSlider;
@property(retain, nonatomic) CAMFilterScrubberView *filterScrubberView; // @synthesize filterScrubberView=_filterScrubberView;
- (void).cxx_destruct;
- (void)_layoutPortraitApertureSlider;
- (void)_layoutFilterScrubberView;
- (void)layoutSubviews;
- (void)_updateVisibleViewAnimated:(_Bool)arg1;
- (void)setVisibleContent:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)_updateVisibilityForUpdatedContent:(unsigned long long)arg1 contentView:(id)arg2;

@end

