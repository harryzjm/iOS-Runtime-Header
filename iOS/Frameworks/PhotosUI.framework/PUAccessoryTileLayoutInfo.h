//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface PUAccessoryTileLayoutInfo
{
    double _minimumVisibleHeight;
    struct CGRect _untransformedContentFrame;
    struct UIEdgeInsets _contentInsets;
}

@property(readonly, nonatomic) double minimumVisibleHeight; // @synthesize minimumVisibleHeight=_minimumVisibleHeight;
@property(readonly, nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(readonly, nonatomic) struct CGRect untransformedContentFrame; // @synthesize untransformedContentFrame=_untransformedContentFrame;
- (id)clone;
- (_Bool)isGeometryEqualToLayoutInfo:(id)arg1;
- (id)initWithTileIdentifier:(id)arg1 center:(struct CGPoint)arg2 size:(struct CGSize)arg3 alpha:(double)arg4 transform:(struct CGAffineTransform)arg5 zPosition:(double)arg6 coordinateSystem:(id)arg7 untransformedContentFrame:(struct CGRect)arg8 contentInsets:(struct UIEdgeInsets)arg9 minimumVisibleHeight:(double)arg10;
- (id)initWithTileIdentifier:(id)arg1 center:(struct CGPoint)arg2 size:(struct CGSize)arg3 alpha:(double)arg4 transform:(struct CGAffineTransform)arg5 zPosition:(double)arg6 coordinateSystem:(id)arg7;

@end
