//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface NUImageTransformScale
{
    CDStruct_1e2b2e48 _scale;
}

@property(readonly) CDStruct_912cb5d2 scale; // @synthesize scale=_scale;
- (id)inverseTransform;
- (_Bool)isIdentityImageTransform;
- (id)initWithScale:(CDStruct_912cb5d2)arg1;
- (id)initWithAffineTransform:(struct CGAffineTransform)arg1;

@end
