//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CalendarNotification/NSObject-Protocol.h>

@class NSDate, NSString;
@protocol CALNSnoozeUpdateTimerDelegate;

@protocol CALNSnoozeUpdateTimer <NSObject>
@property(nonatomic) __weak id <CALNSnoozeUpdateTimerDelegate> delegate;
- (void)setFireDate:(NSDate *)arg1 leeway:(double)arg2 forEventWithIdentifier:(NSString *)arg3;
@end

