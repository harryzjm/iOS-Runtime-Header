//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface GQDScalarPath
{
    int mType;
    double mScalar;
    struct CGSize mSize;
}

- (struct CGPath *)createBezierPath;
- (struct CGSize)size;
- (int)type;
- (double)scalar;
- (_Bool)isRect;
- (_Bool)isRectangular;
- (int)readAttributesFromReader:(struct _xmlTextReader *)arg1 processor:(id)arg2;

@end
