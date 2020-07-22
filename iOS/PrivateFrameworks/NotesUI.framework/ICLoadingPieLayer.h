//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

@class CAShapeLayer, NSProgress;

@interface ICLoadingPieLayer : CALayer
{
    _Bool _removeOnCompletion;
    double _progress;
    NSProgress *_observedProgress;
    CAShapeLayer *_pieLayer;
    CAShapeLayer *_backgroundLayer;
}

@property(retain, nonatomic) CAShapeLayer *backgroundLayer; // @synthesize backgroundLayer=_backgroundLayer;
@property(retain, nonatomic) CAShapeLayer *pieLayer; // @synthesize pieLayer=_pieLayer;
@property(nonatomic) _Bool removeOnCompletion; // @synthesize removeOnCompletion=_removeOnCompletion;
@property(retain, nonatomic) NSProgress *observedProgress; // @synthesize observedProgress=_observedProgress;
@property(readonly, nonatomic) double progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setProgress:(double)arg1;
- (struct CGPath *)newPathForProgress:(double)arg1;
- (id)init;
- (void)dealloc;

@end
