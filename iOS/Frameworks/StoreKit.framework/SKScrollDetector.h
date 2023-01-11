//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol SKScreenTrackingDelegate;

@interface SKScrollDetector : NSObject
{
    id <SKScreenTrackingDelegate> _screenTrakingDelegate;
    NSMutableArray *_subscribedScrollers;
}

@property(retain, nonatomic) NSMutableArray *subscribedScrollers; // @synthesize subscribedScrollers=_subscribedScrollers;
@property(nonatomic) __weak id <SKScreenTrackingDelegate> screenTrakingDelegate; // @synthesize screenTrakingDelegate=_screenTrakingDelegate;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)stopListeningForScrollingOfView:(id)arg1;
- (void)findAndListenForScrollingOfView:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithDelegate:(id)arg1;

@end
