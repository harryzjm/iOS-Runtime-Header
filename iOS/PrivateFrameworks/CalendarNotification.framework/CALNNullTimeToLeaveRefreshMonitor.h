//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CalendarNotification/CALNTimeToLeaveRefreshMonitor-Protocol.h>

@protocol CALNTimeToLeaveRefreshMonitorDelegate;

@interface CALNNullTimeToLeaveRefreshMonitor : NSObject <CALNTimeToLeaveRefreshMonitor>
{
    id <CALNTimeToLeaveRefreshMonitorDelegate> _delegate;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) __weak id <CALNTimeToLeaveRefreshMonitorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)removeRefreshTimerForEventExternalURL:(id)arg1;
- (void)setUpRefreshTimerWithTriggerDate:(id)arg1 eventExternalURL:(id)arg2;

@end
