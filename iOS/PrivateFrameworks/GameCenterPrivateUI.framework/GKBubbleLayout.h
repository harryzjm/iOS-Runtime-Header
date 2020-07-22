//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSArray, NSSet;

@interface GKBubbleLayout : NSObject
{
    double _radius;
    NSSet *_visibleBubbleSet;
    NSArray *_bubbleViews;
    NSArray *_bubbleLocations;
    struct CGPoint _center;
}

@property(retain, nonatomic) NSArray *bubbleLocations; // @synthesize bubbleLocations=_bubbleLocations;
@property(retain, nonatomic) NSArray *bubbleViews; // @synthesize bubbleViews=_bubbleViews;
@property(retain, nonatomic) NSSet *visibleBubbleSet; // @synthesize visibleBubbleSet=_visibleBubbleSet;
@property(nonatomic) double radius; // @synthesize radius=_radius;
@property(nonatomic) struct CGPoint center; // @synthesize center=_center;
- (void)performLayout;
- (void)showBubble:(id)arg1 withSize:(struct CGSize)arg2 atAngle:(double)arg3;
- (void)dealloc;

@end

