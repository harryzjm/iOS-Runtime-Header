//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UITouchObservation : NSObject
{
    struct {
        int phase;
        struct CGPoint position;
        double timestamp;
        double azimuth;
        double altitude;
        double pressure;
    } _observedTouches[8];
    unsigned long long _observedTouchCount;
    unsigned long long _observedTouchOffset;
}

- (void)enumerateTouchesWithBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)touchCount;
- (void)reset;
- (void)observeTouch:(id)arg1;
- (void)dealloc;

@end
