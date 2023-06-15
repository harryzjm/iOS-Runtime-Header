//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PUTileLayoutInfo.h"

__attribute__((visibility("hidden")))
@interface PUBadgeTileLayoutInfo : PUTileLayoutInfo
{
    _Bool _isOverContent;
    double _contentWidth;
    double _leadingContentWidth;
}

@property(readonly, nonatomic) double leadingContentWidth; // @synthesize leadingContentWidth=_leadingContentWidth;
@property(readonly, nonatomic) double contentWidth; // @synthesize contentWidth=_contentWidth;
@property(readonly, nonatomic) _Bool isOverContent; // @synthesize isOverContent=_isOverContent;
- (id)clone;
- (_Bool)isGeometryEqualToLayoutInfo:(id)arg1;
- (id)initWithTileIdentifier:(id)arg1 center:(struct CGPoint)arg2 size:(struct CGSize)arg3 alpha:(double)arg4 transform:(struct CGAffineTransform)arg5 zPosition:(double)arg6 hitTestOutset:(struct UIEdgeInsets)arg7 coordinateSystem:(id)arg8 isOverContent:(_Bool)arg9 contentWidth:(double)arg10 leadingContentWidth:(double)arg11;
- (id)initWithTileIdentifier:(id)arg1 center:(struct CGPoint)arg2 size:(struct CGSize)arg3 alpha:(double)arg4 transform:(struct CGAffineTransform)arg5 zPosition:(double)arg6 coordinateSystem:(id)arg7;

@end

