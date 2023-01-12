//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface AMDPerfContainer : NSObject
{
    _Bool _isEnabled;
    BOOL _level;
    NSMutableDictionary *_memoryUsage;
    NSMutableDictionary *_timeUsage;
    NSMutableDictionary *_samples;
    double _timeConversionFactor;
}

+ (float)getMemoryUsage:(id)arg1 logType:(id)arg2 timeDelta:(double)arg3;
- (void).cxx_destruct;
@property(nonatomic) double timeConversionFactor; // @synthesize timeConversionFactor=_timeConversionFactor;
@property(nonatomic) BOOL level; // @synthesize level=_level;
@property(nonatomic) _Bool isEnabled; // @synthesize isEnabled=_isEnabled;
@property(retain, nonatomic) NSMutableDictionary *samples; // @synthesize samples=_samples;
@property(retain, nonatomic) NSMutableDictionary *timeUsage; // @synthesize timeUsage=_timeUsage;
@property(retain, nonatomic) NSMutableDictionary *memoryUsage; // @synthesize memoryUsage=_memoryUsage;
- (double)getTime;
- (id)initWithSwitch:(_Bool)arg1 atLevel:(BOOL)arg2;

@end
