//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GCPhysicalInputProfile, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _GCWebKitUserIntentRecognizer : NSObject
{
    GCPhysicalInputProfile *_physicalInputProfile;
    NSMutableDictionary *_trackedInputs;
    NSMutableDictionary *_timers;
    double _slidingWindowTotalDuration;
    double _slidingWindowSegmentDuration;
    double _deadzoneSquared;
    int _distanceThreshold;
    CDUnknownBlockType _thumbstickUserIntentHandler;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) CDUnknownBlockType thumbstickUserIntentHandler; // @synthesize thumbstickUserIntentHandler=_thumbstickUserIntentHandler;
- (void)processChangedElements:(id)arg1 atTimestamp:(unsigned long long)arg2;
- (id)initWithPhysicalInputProfile:(id)arg1 thumbstickUserIntentHandler:(CDUnknownBlockType)arg2 slidingWindowTotalDuration:(double)arg3 slidingWindowSegmentDuration:(double)arg4 deadzone:(double)arg5 sensitivity:(int)arg6;
- (id)initWithPhysicalInputProfile:(id)arg1 thumbstickUserIntentHandler:(CDUnknownBlockType)arg2;

@end

