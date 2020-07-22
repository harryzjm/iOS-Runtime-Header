//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface GEONavigationMatchInfo : NSObject
{
    double routeMatchScore;
    double distanceFromRoute;
    double maxDistance;
    double distanceMatchScore;
    double distanceWeight;
    double courseDelta;
    double maxCourseDelta;
    double courseMatchScore;
    double courseWeight;
    double roadWidthOnRoute;
    double distanceFromRoad;
    double roadCourseDelta;
    double distanceFromNearestJunction;
}

@property(nonatomic) double distanceFromNearestJunction; // @synthesize distanceFromNearestJunction;
@property(nonatomic) double roadCourseDelta; // @synthesize roadCourseDelta;
@property(nonatomic) double distanceFromRoad; // @synthesize distanceFromRoad;
@property(nonatomic) double roadWidthOnRoute; // @synthesize roadWidthOnRoute;
@property(nonatomic) double courseWeight; // @synthesize courseWeight;
@property(nonatomic) double courseMatchScore; // @synthesize courseMatchScore;
@property(nonatomic) double maxCourseDelta; // @synthesize maxCourseDelta;
@property(nonatomic) double courseDelta; // @synthesize courseDelta;
@property(nonatomic) double distanceWeight; // @synthesize distanceWeight;
@property(nonatomic) double distanceMatchScore; // @synthesize distanceMatchScore;
@property(nonatomic) double maxDistance; // @synthesize maxDistance;
@property(nonatomic) double distanceFromRoute; // @synthesize distanceFromRoute;
@property(nonatomic) double routeMatchScore; // @synthesize routeMatchScore;
- (id)description;

@end

