//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface UITextMagnifierTimeWeightedPoint : NSObject
{
    int m_index;
    struct {
        struct CGPoint point;
        double time;
    } m_points[16];
}

- (struct CGPoint)diffFromLastPoint;
- (_Bool)isPlacedCarefully;
- (float)distanceCoveredInInterval:(double)arg1 priorTo:(double)arg2;
- (struct CGSize)displacementInInterval:(double)arg1 priorTo:(double)arg2;
- (struct CGSize)displacementInInterval:(double)arg1;
- (float)distanceCoveredInInterval:(double)arg1;
- (_Bool)historyCovers:(double)arg1;
@property(readonly, nonatomic) struct CGPoint weightedPoint;
- (void)addPoint:(struct CGPoint)arg1;
- (void)clearHistory;

@end
