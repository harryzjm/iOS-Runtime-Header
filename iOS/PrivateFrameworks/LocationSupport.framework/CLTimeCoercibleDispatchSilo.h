//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray;

@interface CLTimeCoercibleDispatchSilo
{
    NSMutableArray *_timerHolders;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableArray *timerHolders; // @synthesize timerHolders=_timerHolders;
- (id)newTimer;
- (void)afterInterval:(double)arg1 async:(CDUnknownBlockType)arg2;
- (void)updateLatchedAbsoluteTimestamp;
- (void)setLatchedAbsoluteTimestamp:(double)arg1;
- (id)initWithUnderlyingQueue:(id)arg1;
- (id)initWithIdentifier:(id)arg1;

@end
