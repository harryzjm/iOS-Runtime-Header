//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface BLRetouchBlurLayer
{
    _Bool _sharpen;
    int _radius;
    double _radiusScale;
}

+ (id)layerWithBlur:(int)arg1;
+ (id)layerWithSharpen:(int)arg1;
@property(nonatomic) _Bool sharpen; // @synthesize sharpen=_sharpen;
@property(nonatomic) double radiusScale; // @synthesize radiusScale=_radiusScale;
@property(nonatomic) int radius; // @synthesize radius=_radius;
- (struct CGContext *)newContextForRect:(struct CGRect)arg1 inDestRect:(struct CGRect)arg2 andScale:(double)arg3;
- (int)radiusToApply;
- (_Bool)hasAmount;
- (struct CGContext *)newContextWithEffect:(struct CGContext *)arg1;

@end

