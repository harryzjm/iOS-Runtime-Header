//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSTimer, UIView;
@protocol OFUIWindowDraggingAutoscroll;

@interface OFUIWindowDraggingAutoscroll : NSObject
{
    UIView<OFUIWindowDraggingAutoscroll> *_autoscrollView;
    NSTimer *_autoscrollTimer;
    float _autoscrollDistance;
}

@property float autoscrollDistance; // @synthesize autoscrollDistance=_autoscrollDistance;
@property(retain, nonatomic) NSTimer *autoscrollTimer; // @synthesize autoscrollTimer=_autoscrollTimer;
@property(retain) UIView<OFUIWindowDraggingAutoscroll> *autoscrollView; // @synthesize autoscrollView=_autoscrollView;
- (void)stopAutoscroll;
- (void)maybeStartAutoscrollForDraggingSession:(id)arg1;
- (void)_autoscrollTimerFired:(id)arg1;
- (id)_hitAutoscrollViewWithDraggingSession:(id)arg1;
- (id)_hitAutoscrollViewInSuperview:(id)arg1;
- (void)dealloc;
- (id)init;

@end

