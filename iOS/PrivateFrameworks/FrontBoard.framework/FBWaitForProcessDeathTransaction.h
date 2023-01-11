//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FrontBoard/FBProcessManagerObserver-Protocol.h>

@class BSWatchdog, FBProcess, NSString;

@interface FBWaitForProcessDeathTransaction <FBProcessManagerObserver>
{
    FBProcess *_process;
    double _timeout;
    BSWatchdog *_watchdog;
}

@property(readonly, nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(readonly, nonatomic) FBProcess *process; // @synthesize process=_process;
- (void).cxx_destruct;
- (void)processManager:(id)arg1 didRemoveProcess:(id)arg2;
- (void)processManager:(id)arg1 didAddProcess:(id)arg2;
- (id)_customizedDescriptionProperties;
- (void)_didComplete;
- (_Bool)_canBeInterrupted;
- (void)_begin;
- (id)initWithProcess:(id)arg1 timeout:(double)arg2;
- (id)initWithProcess:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

