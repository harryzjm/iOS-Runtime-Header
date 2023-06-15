//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UIImageViewAnimationProperties : NSObject
{
    NSArray *_animationImages;
    NSArray *_highlightedAnimationImages;
    double _animationDuration;
    long long _animationRepeatCount;
}

- (void).cxx_destruct;
@property(nonatomic) long long animationRepeatCount; // @synthesize animationRepeatCount=_animationRepeatCount;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(retain, nonatomic) NSArray *highlightedAnimationImages; // @synthesize highlightedAnimationImages=_highlightedAnimationImages;
@property(retain, nonatomic) NSArray *animationImages; // @synthesize animationImages=_animationImages;

@end

