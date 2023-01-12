//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PXRateLimitingEventCoalescer
{
    double _lastSignalTime;
    _Bool _waitingForCallback;
    _Bool _cancelled;
    double _rate;
}

@property(readonly, nonatomic) double rate; // @synthesize rate=_rate;
- (void)cancel;
- (void)inputEvent;
- (void)_handleTimer;
- (void)signalObservers;
- (id)initWithRate:(double)arg1;
- (id)init;

@end
