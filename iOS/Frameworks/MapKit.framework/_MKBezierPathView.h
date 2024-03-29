//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface _MKBezierPathView : UIView
{
    UIColor *_fillColor;
    UIColor *_strokeColor;
}

+ (struct CGPath *)_createSmoothTransitionPathForBalloonRadius:(double)arg1 tailLength:(double)arg2;
+ (struct CGPath *)_createPathForBalloonRadius:(double)arg1 tailLength:(double)arg2;
+ (Class)layerClass;
- (void).cxx_destruct;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)containsPoint:(struct CGPoint)arg1;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)setStrokeColor:(id)arg1 width:(double)arg2;
- (void)setFillColor:(id)arg1;
- (void)setPath:(struct CGPath *)arg1 duration:(double)arg2;
- (void)setPath:(struct CGPath *)arg1;
- (id)initWithOvalInSize:(struct CGSize)arg1;
- (id)initWithBalloonRadius:(double)arg1 tailLength:(double)arg2 smoothTailTransition:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

