//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileTimer/NSObject-Protocol.h>

@class MTTimer, MTTimerDuration, NSArray;

@protocol MTTimerClient <NSObject>
- (void)latestTimerDurationUpdated:(MTTimerDuration *)arg1;
- (void)favoriteTimerDurationsUpdated:(NSArray *)arg1;
- (void)recentTimerDurationsUpdated:(NSArray *)arg1;
- (void)nextTimerChanged:(MTTimer *)arg1;
- (void)timerDismissed:(MTTimer *)arg1;
- (void)timerFired:(MTTimer *)arg1;
- (void)timersRemoved:(NSArray *)arg1;
- (void)timersUpdated:(NSArray *)arg1;
- (void)timersAdded:(NSArray *)arg1;
@end

