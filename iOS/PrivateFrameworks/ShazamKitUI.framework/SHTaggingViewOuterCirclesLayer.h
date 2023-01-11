//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

@class CAMediaTimingFunction, NSArray;

__attribute__((visibility("hidden")))
@interface SHTaggingViewOuterCirclesLayer : CALayer
{
    NSArray *_outerCircleLayers;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *outerCircleLayers; // @synthesize outerCircleLayers=_outerCircleLayers;
@property(readonly, nonatomic) CAMediaTimingFunction *linearTimingFunction;
@property(readonly, nonatomic) CAMediaTimingFunction *inOutQuartTimingFunction;
@property(readonly, nonatomic) CAMediaTimingFunction *inOutSineTimingFunction;
- (id)outerCircleCoreScaleAnimation;
- (id)outerCircleCoreBorderWidthAnimation;
- (id)outerCircleCoreSizeAnimation;
- (id)scaleNullAnimation;
- (void)addCoreAnimationToOuterCircleLayer:(id)arg1 withStartOffset:(double)arg2;
- (void)addScaleAnimationToCircleLayer:(id)arg1;
- (void)startTaggingAnimation;
- (void)layoutSublayers;
- (id)buildOuterCircleLayers;
- (void)setupSublayers;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
