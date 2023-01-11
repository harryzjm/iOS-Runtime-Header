//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SCRCGestureFinger;

@interface SCRCGestureEvent : NSObject
{
    unsigned long long _deviceIdentifier;
    SCRCGestureFinger *_finger[8];
    unsigned long long _fingerCount;
    struct CGPoint _averageLocation;
    double _time;
}

- (void).cxx_destruct;
@property(nonatomic) double time; // @synthesize time=_time;
- (struct CGPoint)magneticLocation;
- (_Bool)isCancelEvent;
- (struct CGPoint)balancedLocation;
- (struct CGPoint)averageLocation;
- (struct CGRect)fingerFrame;
- (id)fingers;
- (id)fingerWithoutIdentifier:(unsigned long long)arg1;
- (id)fingerWithIdentifier:(unsigned long long)arg1;
- (id)fingerAtIndex:(unsigned long long)arg1;
- (unsigned long long)fingerCount;
- (void)removeFingerWithIdentifier:(unsigned long long)arg1;
- (void)addStylusWithIdentifier:(unsigned long long)arg1 location:(struct CGPoint)arg2 pressure:(double)arg3 altitude:(double)arg4 azimuth:(double)arg5;
- (void)addFingerWithIdentifier:(unsigned long long)arg1 location:(struct CGPoint)arg2 pressure:(double)arg3;
- (unsigned long long)deviceIdentifier;
- (id)description;
- (void)dealloc;
- (id)initWithDeviceIdentifier:(unsigned long long)arg1;

@end
