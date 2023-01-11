//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CalendarNotification/CALNCalendarIconIdentifierProvider-Protocol.h>
#import <CalendarNotification/CALNNotificationIconProvider-Protocol.h>

@class NSString;

@interface CALNNullIconProvider : NSObject <CALNNotificationIconProvider, CALNCalendarIconIdentifierProvider>
{
}

+ (id)sharedInstance;
- (id)identifierForIconWithDate:(id)arg1 inCalendar:(id)arg2;
- (id)pngDataForIconWithIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
