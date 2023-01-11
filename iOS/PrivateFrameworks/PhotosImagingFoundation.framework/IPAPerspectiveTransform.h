//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol IPAQuadGeometry;

__attribute__((visibility("hidden")))
@interface IPAPerspectiveTransform
{
    struct Matrix4d _projectionTransform;
    struct Matrix4d _viewingTransform;
    id <IPAQuadGeometry> _intrinsicGeometry;
    _Bool _isInverse;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)canAlignToPixelsExactly;
- (id)intrinsicGeometry;
- (id)inverseTransform;
- (struct Vector2d)mapVector:(struct Vector2d)arg1;
- (id)initWithInputGeometry:(id)arg1 intrinsicGeometry:(id)arg2 projectionTransform:(const struct Matrix4d *)arg3 viewingTransform:(const struct Matrix4d *)arg4;

@end
