//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FrontBoardServices/BSWatchdog.h>

@class FBTransaction;

@interface FBTransactionWatchdog : BSWatchdog
{
    FBTransaction *_transaction;
}

@property(readonly, nonatomic) FBTransaction *transaction; // @synthesize transaction=_transaction;
- (void).cxx_destruct;
- (void)_dumpDebugInfo;
- (void)_watchdogTimerFired;
- (void)invalidate;
- (id)initWithTransaction:(id)arg1;

@end

