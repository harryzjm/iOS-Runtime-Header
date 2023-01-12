//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Recap/RCPChildEventStream-Protocol.h>

@class NSArray, NSMutableArray, NSString, RCPEventEnvironment, RCPEventSenderProperties;

@interface BaseScrollEventStream : NSObject <RCPChildEventStream>
{
    NSMutableArray *_processingEventBuffer;
    _Bool _hasCreatedBeginEvent;
    RCPEventSenderProperties *_senderProperties;
    RCPEventEnvironment *_environment;
    double _frequency;
    double _currentTimeOffset;
}

- (void).cxx_destruct;
@property(nonatomic) double currentTimeOffset; // @synthesize currentTimeOffset=_currentTimeOffset;
@property(nonatomic) double frequency; // @synthesize frequency=_frequency;
@property(retain, nonatomic) RCPEventEnvironment *environment; // @synthesize environment=_environment;
@property(retain, nonatomic) RCPEventSenderProperties *senderProperties; // @synthesize senderProperties=_senderProperties;
- (unsigned long long)_currentMachTime;
- (void)didAppendFinalEvent:(struct __IOHIDEvent *)arg1;
- (void)willAppendInitialEvent:(struct __IOHIDEvent *)arg1;
- (void)addToBuffer:(struct __IOHIDEvent *)arg1;
- (struct __IOHIDEvent *)eventToScrollBy:(struct CGVector)arg1;
- (void)updateAmplitudeBy:(struct CGVector)arg1;
- (void)advanceByDelta:(struct CGVector)arg1 duration:(double)arg2;
- (void)advanceTime:(double)arg1;
@property(readonly, retain, nonatomic) NSArray *processingEventBuffer;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
