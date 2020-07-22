//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface OADOuterShadowEffect
{
    float mXScale;
    float mYScale;
    float mXSkew;
    float mYSkew;
    int mAlignment;
    _Bool mRotateWithShape;
}

- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)setRotateWithShape:(_Bool)arg1;
- (_Bool)rotateWithShape;
- (void)setAlignment:(int)arg1;
- (int)alignment;
- (void)setYSkew:(float)arg1;
- (float)ySkew;
- (void)setXSkew:(float)arg1;
- (float)xSkew;
- (void)setYScale:(float)arg1;
- (float)yScale;
- (void)setXScale:(float)arg1;
- (float)xScale;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
