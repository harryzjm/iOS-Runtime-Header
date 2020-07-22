//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PKPhysicsBody;

@interface SKUICircleRepellor : NSObject
{
    double _bufferSize;
    struct CGPoint _center;
    PKPhysicsBody *_physicsBody;
    double _radius;
}

@property(nonatomic) double radius; // @synthesize radius=_radius;
@property(retain, nonatomic) PKPhysicsBody *physicsBody; // @synthesize physicsBody=_physicsBody;
@property(nonatomic) struct CGPoint center; // @synthesize center=_center;
@property(nonatomic) double bufferSize; // @synthesize bufferSize=_bufferSize;
- (void).cxx_destruct;
- (id)description;

@end
