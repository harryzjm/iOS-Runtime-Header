//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface TSCHChartAxisTickMarksLayoutItem
{
}

- (struct CGAffineTransform)transformForRenderingOutElementSize:(struct CGSize *)arg1 outClipRect:(struct CGRect *)arg2;
- (struct CGRect)calcDrawingRect;
- (struct CGRect)p_effectiveRootedLayoutRect;
- (struct CGSize)calcMinSize;
- (int)location;
@property(readonly, nonatomic) float minorTickmarkLength;
@property(readonly, nonatomic) float majorTickmarkLength;
- (id)initWithParent:(id)arg1;

@end

