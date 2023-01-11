//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface SignpostSupportMachTimeTranslator : NSObject
{
    _Bool _isMonitoringSleepWake;
    NSMutableArray *_translationRanges;
    NSMutableArray *_startMachAbsoluteTimes;
    NSMutableArray *_startMachContinuousTimes;
    unsigned long long _maxEntries;
    NSObject<OS_dispatch_queue> *_synchronizationQueue;
}

- (void).cxx_destruct;
@property _Bool isMonitoringSleepWake; // @synthesize isMonitoringSleepWake=_isMonitoringSleepWake;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *synchronizationQueue; // @synthesize synchronizationQueue=_synchronizationQueue;
@property(nonatomic) unsigned long long maxEntries; // @synthesize maxEntries=_maxEntries;
@property(readonly, nonatomic) NSMutableArray *startMachContinuousTimes; // @synthesize startMachContinuousTimes=_startMachContinuousTimes;
@property(readonly, nonatomic) NSMutableArray *startMachAbsoluteTimes; // @synthesize startMachAbsoluteTimes=_startMachAbsoluteTimes;
@property(readonly, nonatomic) NSMutableArray *translationRanges; // @synthesize translationRanges=_translationRanges;
- (unsigned long long)machContinuousTimeForMachAbsoluteTime:(unsigned long long)arg1;
- (unsigned long long)machAbsoluteTimeForMachContinuousTime:(unsigned long long)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)addTimestampPairWithMachAbsoluteTime:(unsigned long long)arg1 machContinuousTime:(unsigned long long)arg2;
- (id)serializableDictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithDataRepresentation:(id)arg1;
- (id)dataRepresentation;
@property(readonly, nonatomic) _Bool containsContinuousTimeJumps;
- (id)init;

@end
