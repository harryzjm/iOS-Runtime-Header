//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

@interface OKProgressArcLayer : CALayer
{
    double _radius;
    double _startAngle;
    double _endAngle;
    double _lineWidth;
}

@property(nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
@property(nonatomic) double endAngle; // @synthesize endAngle=_endAngle;
@property(nonatomic) double startAngle; // @synthesize startAngle=_startAngle;
@property(nonatomic) double radius; // @synthesize radius=_radius;
- (void)drawInContext:(struct CGContext *)arg1;
- (id)init;

@end

