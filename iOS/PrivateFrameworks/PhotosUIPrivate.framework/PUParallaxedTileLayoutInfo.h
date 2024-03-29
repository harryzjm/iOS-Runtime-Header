//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PUTileLayoutInfo.h"

__attribute__((visibility("hidden")))
@interface PUParallaxedTileLayoutInfo : PUTileLayoutInfo
{
    struct CGPoint _parallaxOffset;
}

@property(readonly, nonatomic) struct CGPoint parallaxOffset; // @synthesize parallaxOffset=_parallaxOffset;
- (id)clone;
- (_Bool)isGeometryEqualToLayoutInfo:(id)arg1;
- (id)initWithTileIdentifier:(id)arg1 center:(struct CGPoint)arg2 size:(struct CGSize)arg3 alpha:(double)arg4 cornerRadius:(double)arg5 cornerCurve:(id)arg6 cornerMask:(unsigned long long)arg7 transform:(struct CGAffineTransform)arg8 zPosition:(double)arg9 parallaxOffset:(struct CGPoint)arg10 contentsRect:(struct CGRect)arg11 coordinateSystem:(id)arg12;
- (id)initWithTileIdentifier:(id)arg1 center:(struct CGPoint)arg2 size:(struct CGSize)arg3 alpha:(double)arg4 transform:(struct CGAffineTransform)arg5 zPosition:(double)arg6 parallaxOffset:(struct CGPoint)arg7 contentsRect:(struct CGRect)arg8 coordinateSystem:(id)arg9;
- (id)initWithTileIdentifier:(id)arg1 center:(struct CGPoint)arg2 size:(struct CGSize)arg3 alpha:(double)arg4 transform:(struct CGAffineTransform)arg5 zPosition:(double)arg6 parallaxOffset:(struct CGPoint)arg7 coordinateSystem:(id)arg8;
- (id)initWithTileIdentifier:(id)arg1 center:(struct CGPoint)arg2 size:(struct CGSize)arg3 alpha:(double)arg4 transform:(struct CGAffineTransform)arg5 zPosition:(double)arg6 coordinateSystem:(id)arg7;

@end

