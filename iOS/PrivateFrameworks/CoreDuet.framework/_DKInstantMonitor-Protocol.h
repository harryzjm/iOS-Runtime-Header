//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreDuet/_DKMonitor-Protocol.h>

@class _DKEvent;

@protocol _DKInstantMonitor <_DKMonitor>
@property(readonly, nonatomic) _DKEvent *currentEvent;
@property(copy, nonatomic) CDUnknownBlockType instantHandler;
- (void)synchronouslyReflectCurrentValue;
- (void)stop;
- (void)start;
- (void)setCurrentEvent:(_DKEvent *)arg1 inferHistoricalState:(_Bool)arg2;
@end

