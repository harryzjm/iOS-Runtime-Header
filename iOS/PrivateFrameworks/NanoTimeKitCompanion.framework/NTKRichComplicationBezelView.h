//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIBezierPath, UIColor;
@protocol NTKRichComplicationBezelViewDelegate;

@interface NTKRichComplicationBezelView
{
    UIBezierPath *_hitTestPath;
    struct CGRect _hitTestBounds;
    long long _hitTestShape;
    struct CGRect _hitTestShapeFrame;
    UIColor *_platterTextColor;
    double _bezelTextWidthInRadius;
    double _bezelTextAlpha;
    id <NTKRichComplicationBezelViewDelegate> _delegate;
}

+ (id)_createHitTestPathWithViewBounds:(struct CGRect)arg1 shape:(long long)arg2 shapeFrame:(struct CGRect)arg3 forDevice:(id)arg4;
+ (void)startDataAnimationFromEarlierView:(id)arg1 laterView:(id)arg2 isForward:(_Bool)arg3 bezelTextUpdateHandler:(CDUnknownBlockType)arg4 completionBlock:(CDUnknownBlockType)arg5;
+ (id)viewWithLegacyComplicationType:(unsigned long long)arg1;
+ (struct CGAffineTransform)transformForState:(long long)arg1;
+ (id)layoutRuleForState:(long long)arg1 faceBounds:(struct CGRect)arg2 dialDiameter:(double)arg3 forDevice:(id)arg4;
+ (id)keylineViewForDevice:(id)arg1;
+ (id)keylineImageWithFilled:(_Bool)arg1 forDevice:(id)arg2;
@property(nonatomic) __weak id <NTKRichComplicationBezelViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double bezelTextAlpha; // @synthesize bezelTextAlpha=_bezelTextAlpha;
@property(nonatomic) double bezelTextWidthInRadius; // @synthesize bezelTextWidthInRadius=_bezelTextWidthInRadius;
@property(retain, nonatomic) UIColor *platterTextColor; // @synthesize platterTextColor=_platterTextColor;
- (void).cxx_destruct;
- (void)_setLayoutTransformToView:(id)arg1 origin:(struct CGPoint)arg2 rotationInDegree:(double)arg3 centerScale:(double)arg4;
- (void)_updateHitTestShape:(long long)arg1 frame:(struct CGRect)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFamily:(long long)arg1;
- (id)init;

@end

