//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSNumber;

__attribute__((visibility("hidden")))
@interface MKLaneDirectionCollisionCalculator : NSObject
{
    NSMutableDictionary *_collisionsForDirection;
    NSMutableArray *_directions;
    NSNumber *_directionWithMostCollisions;
    _Bool _hasCollisions;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool hasCollisions; // @synthesize hasCollisions=_hasCollisions;
- (void)removeDirectionWithCollisionsLeastSimilarToDirection:(int)arg1;
- (void)removeNextDirectionWithCollisions;
@property(readonly, nonatomic) _Bool hasDirectionWithMaxCollisions;
- (void)_recalculateCollisions;
@property(readonly, nonatomic) NSArray *directions;
- (id)initWithDirections:(id)arg1;

@end
