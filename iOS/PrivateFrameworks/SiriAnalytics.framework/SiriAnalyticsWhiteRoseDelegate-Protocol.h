//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriAnalytics/NSObject-Protocol.h>

@class SiriAnalyticsDerivativeClock, SiriAnalyticsRootClock, SiriAnalyticsWhiteRose;

@protocol SiriAnalyticsWhiteRoseDelegate <NSObject>
- (void)whiteRose:(SiriAnalyticsWhiteRose *)arg1 derivativeClockCreated:(SiriAnalyticsDerivativeClock *)arg2 rootClock:(SiriAnalyticsRootClock *)arg3;
- (void)whiteRose:(SiriAnalyticsWhiteRose *)arg1 rootClockDestroyed:(SiriAnalyticsRootClock *)arg2 reason:(unsigned long long)arg3 completion:(void (^)(void))arg4;
- (void)whiteRose:(SiriAnalyticsWhiteRose *)arg1 rootClockCreated:(SiriAnalyticsRootClock *)arg2 trailingRootClock:(SiriAnalyticsRootClock *)arg3;
- (void)whiteRose:(SiriAnalyticsWhiteRose *)arg1 willCreateRootClock:(SiriAnalyticsRootClock *)arg2 completion:(void (^)(void))arg3;
@end

