//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UISlider.h>

@class NSMutableArray, UIColor;

@interface AXHAStepSlider : UISlider
{
    _Bool _restrictsValuesToTicks;
    _Bool _supportsVibrancy;
    unsigned long long _segmentCount;
    UIColor *_tickColor;
    NSMutableArray *_ticks;
}

@property(retain, nonatomic) NSMutableArray *ticks; // @synthesize ticks=_ticks;
@property(retain, nonatomic) UIColor *tickColor; // @synthesize tickColor=_tickColor;
@property(nonatomic) _Bool supportsVibrancy; // @synthesize supportsVibrancy=_supportsVibrancy;
@property(nonatomic) _Bool restrictsValuesToTicks; // @synthesize restrictsValuesToTicks=_restrictsValuesToTicks;
@property(nonatomic) unsigned long long segmentCount; // @synthesize segmentCount=_segmentCount;
- (void).cxx_destruct;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (struct CGRect)trackRectForBounds:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)traitCollection;
- (void)setValue:(float)arg1 animated:(_Bool)arg2;
- (float)offsetBetweenTicksForNumberOfTicks:(unsigned long long)arg1;
- (unsigned long long)numberOfTicks;
- (void)sliderTapped:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
