//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface TSCH3DChartPieResizer
{
    tvec2_01ee4891 _directions;
}

+ (float)perspectiveness;
+ (tvec2_84d5962d)adjustLabelWrapSize:(void *)arg1;
- (id).cxx_construct;
- (tvec2_84d5962d)updateResizerFromRequestedSize:(void *)arg1 startingSize:(void *)arg2;
- (tvec2_84d5962d)updateDirectionsFromRequestedSize:(void *)arg1 startingSize:(void *)arg2;
- (tvec2_84d5962d)squareSize:(const void *)arg1;
- (tvec3_17f03ce0)adjust:(void *)arg1 by:(float)arg2;
- (void)setScale:(void *)arg1;
- (tvec2_01ee4891)canImprove;

@end

