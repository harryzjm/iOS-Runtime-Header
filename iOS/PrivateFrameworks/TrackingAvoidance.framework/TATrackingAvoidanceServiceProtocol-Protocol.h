//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TrackingAvoidance/NSObject-Protocol.h>

@protocol TAEventProtocol, TATrackingAvoidanceServiceObserver;

@protocol TATrackingAvoidanceServiceProtocol <NSObject>
- (void)ingestTAEvent:(id <TAEventProtocol>)arg1;
- (void)removeObserver:(id <TATrackingAvoidanceServiceObserver>)arg1;
- (void)addObserver:(id <TATrackingAvoidanceServiceObserver>)arg1;
@end
