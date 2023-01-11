//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, OITSUBezierPath, OITSUColor;

__attribute__((visibility("hidden")))
@interface MFPPathGradientBrush
{
    OITSUColor *mCenterColor;
    struct CGPoint mCenterPoint;
    NSArray *mSurroundColors;
    OITSUBezierPath *mPath;
}

- (void).cxx_destruct;
- (id)endColor;
- (id)startColor;
- (void)createShading;
- (void)setPath:(id)arg1;
- (void)setSurroundColors:(id)arg1;
- (void)setCenterPoint:(struct CGPoint)arg1;
- (void)setCenterColor:(id)arg1;

@end
