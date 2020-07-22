//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TSCH3DChartBoundsLayout, TSCH3DChartResizerHelper;

__attribute__((visibility("hidden")))
@interface TSCH3DSageGeometryHelperLimitingSeriesUpgrader
{
    TSCH3DChartResizerHelper *mResizerHelper;
    TSCH3DChartBoundsLayout *mBoundsLayout;
}

@property(readonly, nonatomic) TSCH3DChartBoundsLayout *boundsLayout; // @synthesize boundsLayout=mBoundsLayout;
@property(readonly, nonatomic) TSCH3DChartResizerHelper *resizerHelper; // @synthesize resizerHelper=mResizerHelper;
- (id)boundsLayoutByResizingToLayoutSize:(const tvec2_84d5962d *)arg1;
- (id)containingViewportByResizingScene:(id)arg1 toResizingFrame:(struct CGRect)arg2;
- (struct CGRect)oldResizingFrame;
- (id)sceneResetWithLayoutSettings:(CDStruct_44ada6bf)arg1;
- (void)dealloc;

@end
