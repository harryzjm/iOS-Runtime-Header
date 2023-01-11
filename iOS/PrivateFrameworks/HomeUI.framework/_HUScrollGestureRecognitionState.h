//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIGestureRecognizer;
@protocol NACancelable;

@interface _HUScrollGestureRecognitionState : NSObject
{
    UIGestureRecognizer *_gestureRecognizer;
    id <NACancelable> _activationTimer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <NACancelable> activationTimer; // @synthesize activationTimer=_activationTimer;
@property(readonly, nonatomic) UIGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
- (id)initWithGestureRecognizer:(id)arg1;

@end
