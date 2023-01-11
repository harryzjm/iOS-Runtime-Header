//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RemoteConfiguration/RCOperationRetrySignal-Protocol.h>

@class NSString;

@interface RCOperationDelayedRetrySignal : NSObject <RCOperationRetrySignal>
{
    unsigned long long _signalTime;
    double _delay;
}

@property(readonly, copy) NSString *description;
- (void)onQueue:(id)arg1 signal:(CDUnknownBlockType)arg2;
- (id)initWithDelay:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

