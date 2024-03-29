//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhysicsKit/PKPhysicsBody.h>

__attribute__((visibility("hidden")))
@interface PKExtendedPhysicsBody : PKPhysicsBody
{
    long long _associations;
    double _areaFactor;
}

+ (id)bodyWithBodies:(id)arg1;
+ (id)bodyWithEdgeLoopFromPath:(struct CGPath *)arg1;
+ (id)bodyWithEdgeChainFromPath:(struct CGPath *)arg1;
+ (id)bodyWithPolygonFromPath:(struct CGPath *)arg1;
+ (id)bodyWithEdgeFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;
+ (id)bodyWithRectangleOfSize:(struct CGSize)arg1 center:(struct CGPoint)arg2;
+ (id)bodyWithRectangleOfSize:(struct CGSize)arg1;
+ (id)bodyWithCircleOfRadius:(double)arg1;
+ (id)bodyWithEllipseInRect:(struct CGRect)arg1;
- (_Bool)dissociate;
- (void)associate;
- (id)description;
- (id)initWithRectangleOfSize:(struct CGSize)arg1;
@property(nonatomic) double normalizedDensity;
- (id)init;

@end

