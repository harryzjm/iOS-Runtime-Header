//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol VCAudioPowerLevelMonitorDelegate;

__attribute__((visibility("hidden")))
@interface VCAudioPowerLevelMonitor : NSObject
{
    unsigned int startDetectRemoteAudioLowPowerTime;
    float audioPowerThreshold;
    unsigned int audioLowPowerTimeInterval;
    _Bool isAudioPowerBelowThreshold;
    _Bool isAudioPowerMovingAverage;
    float audioPowerMovingAverageCoefficient;
    float currentAudioAverage;
    NSObject<VCAudioPowerLevelMonitorDelegate> *delegate;
}

@property(nonatomic) NSObject<VCAudioPowerLevelMonitorDelegate> *delegate; // @synthesize delegate;
- (void)detectRemoteAveragePowerLevel:(float)arg1 timestamp:(unsigned int)arg2;
- (id)init;

@end

