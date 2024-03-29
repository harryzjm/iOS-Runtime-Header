//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol BLSHWatchdogAbortContext, BLSHWatchdogDelegate;

__attribute__((visibility("hidden")))
@interface BLSHWatchdogAbortParameters : NSObject
{
    _Bool _isPotentialHang;
    _Bool _hasSleepBeenRequested;
    _Bool _sleepImminent;
    _Bool _sleepImminentSinceScheduled;
    id <BLSHWatchdogDelegate> _delegate;
    id <BLSHWatchdogAbortContext> _abortContext;
    double _timeInSleepImminent;
    NSString *_explanation;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *explanation; // @synthesize explanation=_explanation;
@property(nonatomic) double timeInSleepImminent; // @synthesize timeInSleepImminent=_timeInSleepImminent;
@property(nonatomic) _Bool sleepImminentSinceScheduled; // @synthesize sleepImminentSinceScheduled=_sleepImminentSinceScheduled;
@property(nonatomic) _Bool sleepImminent; // @synthesize sleepImminent=_sleepImminent;
@property(nonatomic) _Bool hasSleepBeenRequested; // @synthesize hasSleepBeenRequested=_hasSleepBeenRequested;
@property(nonatomic) _Bool isPotentialHang; // @synthesize isPotentialHang=_isPotentialHang;
@property(retain, nonatomic) id <BLSHWatchdogAbortContext> abortContext; // @synthesize abortContext=_abortContext;
@property(nonatomic) __weak id <BLSHWatchdogDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithDelegate:(id)arg1 abortContext:(id)arg2 isPotentialHang:(_Bool)arg3 hasSleepBeenRequested:(_Bool)arg4 sleepImminent:(_Bool)arg5 sleepImminentSinceScheduled:(_Bool)arg6 timeInSleepImminent:(double)arg7 explanation:(id)arg8;

@end

