//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@interface TSDBezierSegment : NSObject
{
    struct CGPoint mA;
    struct CGPoint mOut;
    struct CGPoint mIn;
    struct CGPoint mB;
}

+ (id)segmentFromPoint:(struct CGPoint)arg1 outPoint:(struct CGPoint)arg2 inPoint:(struct CGPoint)arg3 toPoint:(struct CGPoint)arg4;
- (struct CGPoint)closestPointToPoint:(struct CGPoint)arg1;
- (struct CGPoint)pointAtParametricValue:(double)arg1;
- (void)splitAtParametricValue:(double)arg1 left:(id *)arg2 right:(id *)arg3;
- (double)parametricValueForPoint:(struct CGPoint)arg1;
@property(readonly, nonatomic) struct CGPoint outPoint;
@property(readonly, nonatomic) struct CGPoint inPoint;
@property(readonly, nonatomic) struct CGPoint toPoint;
@property(readonly, nonatomic) struct CGPoint fromPoint;
- (id)initFromPoint:(struct CGPoint)arg1 outPoint:(struct CGPoint)arg2 inPoint:(struct CGPoint)arg3 toPoint:(struct CGPoint)arg4;
@property(readonly, nonatomic) _Bool bogusSegment;
- (id)description;

@end

