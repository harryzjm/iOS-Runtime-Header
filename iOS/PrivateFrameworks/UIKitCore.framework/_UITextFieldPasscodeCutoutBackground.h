//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CAShapeLayer, UIBezierPath;

__attribute__((visibility("hidden")))
@interface _UITextFieldPasscodeCutoutBackground
{
    _Bool _hasCustomStrokeColor;
    _Bool _hasCustomFillColor;
    CAShapeLayer *_lighteningOutline;
    double _outlineAlpha;
    double _cornerRadius;
}

+ (id)_fillColor:(_Bool)arg1;
+ (id)_strokeColor:(_Bool)arg1;
+ (Class)layerClass;
- (void).cxx_destruct;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
- (id)_fillColor:(_Bool)arg1;
- (id)_strokeColor:(_Bool)arg1;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)setEnabled:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setActive:(_Bool)arg1;
- (void)_updatePath;
- (void)_updateLightingOutlinePath;
@property(readonly, nonatomic) UIBezierPath *customPath;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (double)lineWidth;
- (void)setLineWidth:(double)arg1;
- (void)setLineWidth:(double)arg1 updatePath:(_Bool)arg2;
- (id)fillColor;
- (void)setFillColor:(id)arg1;
- (id)strokeColor;
- (void)setStrokeColor:(id)arg1;
@property(nonatomic) double outlineAlpha;
- (double)_pathInset;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 active:(_Bool)arg2;
- (id)_shapeLayer;

@end

