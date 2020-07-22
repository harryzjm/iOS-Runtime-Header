//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIColor;

@interface SKUISizeToFitImageDataConsumer
{
    struct CGSize _constraintSize;
    _Bool _custom;
    UIColor *_gradientEndColor;
    double _gradientHeight;
}

+ (id)consumerWithConstraintSize2:(struct CGSize)arg1;
+ (id)consumerWithConstraintSize:(struct CGSize)arg1;
@property(nonatomic) double gradientHeight; // @synthesize gradientHeight=_gradientHeight;
@property(retain, nonatomic) UIColor *gradientEndColor; // @synthesize gradientEndColor=_gradientEndColor;
@property(nonatomic) struct CGSize constraintSize; // @synthesize constraintSize=_constraintSize;
- (void).cxx_destruct;
- (void)_drawGradientWithContext:(struct CGContext *)arg1 imageRect:(struct CGRect)arg2;
- (id)imageForImage:(id)arg1;

@end

