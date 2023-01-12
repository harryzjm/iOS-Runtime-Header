//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AWSampleLogger;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AWAttentionSampler : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _nextDeadline;
    _Bool _lastFaceMetadataValid;
    _Bool _unitTestSampling;
    int _currentState;
    AWSampleLogger *_sampleLogger;
    CDUnknownBlockType _stateChangedCallback;
    unsigned long long _samplingSuppressedMask;
    unsigned long long _lastTriggerTime;
    unsigned long long _lastPositiveDetectTime;
    unsigned long long _lastPollTimeoutTime;
    double _lastPitch;
    double _lastYaw;
    double _lastRoll;
    unsigned long long _lastOrientation;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool unitTestSampling; // @synthesize unitTestSampling=_unitTestSampling;
@property(nonatomic) unsigned long long lastOrientation; // @synthesize lastOrientation=_lastOrientation;
@property(nonatomic) double lastRoll; // @synthesize lastRoll=_lastRoll;
@property(nonatomic) double lastYaw; // @synthesize lastYaw=_lastYaw;
@property(nonatomic) double lastPitch; // @synthesize lastPitch=_lastPitch;
@property(nonatomic) _Bool lastFaceMetadataValid; // @synthesize lastFaceMetadataValid=_lastFaceMetadataValid;
@property(nonatomic) unsigned long long lastPollTimeoutTime; // @synthesize lastPollTimeoutTime=_lastPollTimeoutTime;
@property(nonatomic) unsigned long long lastPositiveDetectTime; // @synthesize lastPositiveDetectTime=_lastPositiveDetectTime;
@property(nonatomic) unsigned long long lastTriggerTime; // @synthesize lastTriggerTime=_lastTriggerTime;
@property(nonatomic) unsigned long long samplingSuppressedMask; // @synthesize samplingSuppressedMask=_samplingSuppressedMask;
@property(nonatomic) int currentState; // @synthesize currentState=_currentState;
@property(copy) CDUnknownBlockType stateChangedCallback; // @synthesize stateChangedCallback=_stateChangedCallback;
@property(retain, nonatomic) AWSampleLogger *sampleLogger; // @synthesize sampleLogger=_sampleLogger;
- (id)initWithMask:(unsigned long long)arg1;
- (void)setSmartCoverClosed:(_Bool)arg1;
- (void)shouldSample:(_Bool)arg1 withDeadline:(unsigned long long)arg2 withOptions:(union)arg3;
- (unsigned long long)minimumAttentionSamplerErrorRetryTime;
- (unsigned long long)nextSampleTimeForSamplingInterval:(unsigned long long)arg1;
- (void)finishDeadlineComputationWithOptions:(union)arg1;
- (void)updateSamplingDeadline:(unsigned long long)arg1 forClient:(id)arg2;
- (void)startDeadlineComputation;
- (void)setUnitTestMode;
- (id)description;
- (id)init;

@end

