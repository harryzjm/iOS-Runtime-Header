//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ChatKit/NSObject-Protocol.h>

@class EKCalendar, EKEventEditViewController;

@protocol EKEventEditViewDelegate <NSObject>
- (void)eventEditViewController:(EKEventEditViewController *)arg1 didCompleteWithAction:(long long)arg2;

@optional
- (EKCalendar *)eventEditViewControllerDefaultCalendarForNewEvents:(EKEventEditViewController *)arg1;
@end

