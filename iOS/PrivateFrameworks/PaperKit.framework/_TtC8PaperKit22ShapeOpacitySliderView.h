//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UISlider.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC8PaperKit22ShapeOpacitySliderView : UISlider
{
    MISSING_TYPE *gradient;
    MISSING_TYPE *trackImage;
    MISSING_TYPE *axis;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGRect)thumbRectForBounds:(struct CGRect)arg1 trackRect:(struct CGRect)arg2 value:(float)arg3;
- (struct CGRect)trackRectForBounds:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (id)initWithCoder:(id)arg1;

@end

