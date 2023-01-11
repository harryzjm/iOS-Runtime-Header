//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CALayer, CAReplicatorLayer;

@interface NTKRichComplicationDialView : UIView
{
    CAReplicatorLayer *_largeTicksReplicatorLayer;
    CALayer *_largeTickLayer;
    double _largeTickPositionY;
    CAReplicatorLayer *_smallTicksReplicatorLayer;
    CALayer *_smallTickLayer;
    double _smallTickPositionY;
    long long _largeTickCount;
    long long _smallTickCountPerLargeTick;
    double _largeTicksTransformAngle;
    float _progress;
    float _progressDirection;
}

- (void).cxx_destruct;
@property(nonatomic) float progressDirection; // @synthesize progressDirection=_progressDirection;
@property(nonatomic) float progress; // @synthesize progress=_progress;
@property(readonly, nonatomic) CALayer *smallTickLayer; // @synthesize smallTickLayer=_smallTickLayer;
@property(readonly, nonatomic) CALayer *largeTickLayer; // @synthesize largeTickLayer=_largeTickLayer;
- (void)layoutSubviews;
- (void)_updateTicksRotationTransform;
- (void)setLargeTicksTransformAngle:(double)arg1;
- (id)initWithTickCount:(long long)arg1 tickSize:(struct CGSize)arg2 dialRange:(double)arg3 startAngle:(double)arg4;
- (id)initWithLargeTickCount:(long long)arg1 smallTickCountPerLargeTick:(long long)arg2 largeTickSize:(struct CGSize)arg3 smallTickSize:(struct CGSize)arg4 dialRange:(double)arg5 startAngle:(double)arg6;

@end
