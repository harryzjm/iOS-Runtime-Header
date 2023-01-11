//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CAShapeLayer.h>

@interface AKBoxLayer : CAShapeLayer
{
    double _borderWidthScale;
    double _boxCornerRadius;
    double _nominalBorderWidth;
}

@property double nominalBorderWidth; // @synthesize nominalBorderWidth=_nominalBorderWidth;
@property double boxCornerRadius; // @synthesize boxCornerRadius=_boxCornerRadius;
- (void)_updateBoxPath;
@property(nonatomic) double borderWidthScale;
- (void)setBounds:(struct CGRect)arg1;
- (id)initWithBorderWidth:(double)arg1 cornerRadius:(double)arg2;

@end
