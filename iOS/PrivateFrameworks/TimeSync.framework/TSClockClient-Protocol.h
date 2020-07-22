//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TimeSync/NSObject-Protocol.h>

@class TSClock;

@protocol TSClockClient <NSObject>

@optional
- (void)didProcessSync:(TSClock *)arg1;
- (void)didEndClockGrandmasterChangeForClock:(TSClock *)arg1;
- (void)didBeginClockGrandmasterChangeForClock:(TSClock *)arg1;
- (void)didChangeLockStateTo:(int)arg1 forClock:(TSClock *)arg2;
- (void)didChangeClockMasterForClock:(TSClock *)arg1;
- (void)didResetClock:(TSClock *)arg1;
@end
