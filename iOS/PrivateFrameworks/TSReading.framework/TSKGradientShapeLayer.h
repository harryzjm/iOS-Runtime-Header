//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CAShapeLayer.h>

@class CAGradientLayer, NSArray, NSString;

@interface TSKGradientShapeLayer : CAShapeLayer
{
    CAGradientLayer *_gradient;
    CAShapeLayer *_shapeMask;
}

@property(retain, nonatomic) CAShapeLayer *shapeMask; // @synthesize shapeMask=_shapeMask;
@property(retain, nonatomic) CAGradientLayer *gradient; // @synthesize gradient=_gradient;
- (void)p_flatten;
- (void)p_createGradientTreeIfNeeded;
- (_Bool)isGradientTree;
@property(copy) NSString *type;
@property struct CGPoint endPoint;
@property struct CGPoint startPoint;
@property(copy) NSArray *locations;
@property(copy) NSArray *colors;
- (void)setLineDashPattern:(id)arg1;
- (void)setLineDashPhase:(double)arg1;
- (void)setLineJoin:(id)arg1;
- (void)setLineCap:(id)arg1;
- (void)setMiterLimit:(double)arg1;
- (void)setLineWidth:(double)arg1;
- (void)setStrokeEnd:(double)arg1;
- (void)setStrokeStart:(double)arg1;
- (void)setStrokeColor:(struct CGColor *)arg1;
- (void)setFillRule:(id)arg1;
- (void)setFillColor:(struct CGColor *)arg1;
- (void)setPath:(struct CGPath *)arg1;
- (void)setDelegate:(id)arg1;
- (void)dealloc;

@end

