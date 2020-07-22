//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface TSTLayoutDynamicResizeInfoUnify
{
    double mTargetWidth;
    double mTargetHeight;
}

@property(readonly, nonatomic) double targetHeight; // @synthesize targetHeight=mTargetHeight;
@property(readonly, nonatomic) double targetWidth; // @synthesize targetWidth=mTargetWidth;
- (_Bool)applyFixedWidth:(double)arg1;
- (_Bool)applyFixedHeight:(double)arg1;
- (void)captureNewMinimumRowHeights:(id)arg1;
- (double)applyResizeWidthFactor:(double)arg1;
- (double)applyResizeHeightFactor:(double)arg1;
- (_Bool)p_applyUnifyFixedSize:(double)arg1 region:(id)arg2 direction:(long long)arg3 count:(unsigned short)arg4 currentArray:(double *)arg5 minimumArray:(double *)arg6;
- (double)p_applyUnifyResizeFactor:(double)arg1 region:(id)arg2 direction:(long long)arg3 totalOfCaptured:(double)arg4 count:(unsigned short)arg5 capturedArray:(double *)arg6 currentArray:(double *)arg7 minimumArray:(double *)arg8;

@end

