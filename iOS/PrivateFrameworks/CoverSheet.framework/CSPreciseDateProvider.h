//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoverSheet/SBFDateProviding-Protocol.h>

@class NSString, SBUIPreciseClockTimer;

@interface CSPreciseDateProvider : NSObject <SBFDateProviding>
{
    SBUIPreciseClockTimer *_preciseClockTimer;
}

- (void).cxx_destruct;
- (void)removeMinuteUpdateHandler:(id)arg1;
- (id)observeMinuteUpdatesWithHandler:(CDUnknownBlockType)arg1;
- (id)date;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
