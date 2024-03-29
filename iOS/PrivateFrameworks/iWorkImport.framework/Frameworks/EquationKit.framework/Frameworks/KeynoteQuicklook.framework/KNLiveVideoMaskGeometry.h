//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface KNLiveVideoMaskGeometry : NSObject
{
    double _scale;
    struct CGPoint _normalizedOffset;
    struct CGRect _maskBounds;
}

@property(readonly, nonatomic) struct CGPoint normalizedOffset; // @synthesize normalizedOffset=_normalizedOffset;
@property(readonly, nonatomic) double scale; // @synthesize scale=_scale;
@property(readonly, nonatomic) struct CGRect maskBounds; // @synthesize maskBounds=_maskBounds;
- (struct CGRect)videoTextureRectForNaturalSize:(struct CGSize)arg1;
- (struct CGRect)videoBoundsForNaturalSize:(struct CGSize)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithMaskBounds:(struct CGRect)arg1 scale:(double)arg2 normalizedOffset:(struct CGPoint)arg3;

@end

