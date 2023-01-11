//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface NUImageTransformAffine
{
    struct CGAffineTransform _transformInv;
    struct CGAffineTransform _transform;
}

@property(readonly) struct CGAffineTransform transform; // @synthesize transform=_transform;
- (void)nu_updateDigest:(id)arg1;
- (_Bool)isEqualToGeometryTransformAffine:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)transformByRotateZ:(double)arg1;
- (id)transformByTranslateX:(double)arg1 translateY:(double)arg2;
- (id)transformByScaleX:(double)arg1 scaleY:(double)arg2;
- (CDStruct_14d5dc5e)transformMatrix:(CDStruct_14d5dc5e)arg1;
- (_Bool)isIdentityImageTransform;
- (struct CGPoint)transformPoint:(struct CGPoint)arg1;
- (id)inverseTransform;
- (id)init;
- (id)initWithAffineTransform:(struct CGAffineTransform)arg1;

@end
