//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface UITintColor
{
}

- (id)colorSpaceName;
- (_Bool)_isDeepColor;
- (_Bool)isPatternColor;
- (double)alphaComponent;
- (struct CGColor *)CGColor;
- (_Bool)getRed:(double *)arg1 green:(double *)arg2 blue:(double *)arg3 alpha:(double *)arg4;
- (_Bool)getHue:(double *)arg1 saturation:(double *)arg2 brightness:(double *)arg3 alpha:(double *)arg4;
- (_Bool)getWhite:(double *)arg1 alpha:(double *)arg2;
- (void)setStroke;
- (void)setFill;
- (void)set;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)_resolvedColorWithTraitCollection:(id)arg1;
- (_Bool)_isDynamicTintColor;
- (id)init;

@end

