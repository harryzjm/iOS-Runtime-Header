//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileTimer/NSObject-Protocol.h>

@class MTAlarm, NSDate;
@protocol MTBedtimeSession, MTBedtimeSessionTrackerDelegate;

@protocol MTBedtimeSessionTracker <NSObject>
+ (_Bool)_trackingEnabledForSleepAlarm:(MTAlarm *)arg1;
@property(readonly, nonatomic) _Bool trackingEnabled;
@property(nonatomic) __weak id <MTBedtimeSessionTrackerDelegate> bedtimeSessionTrackerDelegate;
- (void)endSessionWithDate:(NSDate *)arg1 reason:(unsigned long long)arg2;
- (void)startSession;
- (Class)sessionClass;

@optional
- (id <MTBedtimeSession>)processedSessionForSession:(id <MTBedtimeSession>)arg1;
@end
