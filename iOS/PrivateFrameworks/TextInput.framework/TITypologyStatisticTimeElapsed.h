//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TITypologyTimer;

@interface TITypologyStatisticTimeElapsed
{
    TITypologyTimer *_timer;
    TITypologyTimer *_adjustedTimer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TITypologyTimer *adjustedTimer; // @synthesize adjustedTimer=_adjustedTimer;
@property(retain, nonatomic) TITypologyTimer *timer; // @synthesize timer=_timer;
- (void)visitRecordKeyboardInput:(id)arg1;
@property(readonly, nonatomic) double adjustedElapsedTime;
@property(readonly, nonatomic) double elapsedTime;
- (id)aggregateReport;
- (id)structuredReport;
- (id)init;

@end
