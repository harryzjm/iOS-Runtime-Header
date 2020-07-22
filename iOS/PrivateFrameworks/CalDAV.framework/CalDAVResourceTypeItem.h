//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreDAV/CoreDAVResourceTypeItem.h>

@class CoreDAVItemWithNoChildren;

@interface CalDAVResourceTypeItem : CoreDAVResourceTypeItem
{
    CoreDAVItemWithNoChildren *_calendar;
    CoreDAVItemWithNoChildren *_scheduleInbox;
    CoreDAVItemWithNoChildren *_scheduleOutbox;
    CoreDAVItemWithNoChildren *_notification;
    CoreDAVItemWithNoChildren *_subscribed;
    CoreDAVItemWithNoChildren *_sharedOwner;
    CoreDAVItemWithNoChildren *_isFamilyCalendar;
}

@property(retain, nonatomic) CoreDAVItemWithNoChildren *isFamilyCalendar; // @synthesize isFamilyCalendar=_isFamilyCalendar;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *sharedOwner; // @synthesize sharedOwner=_sharedOwner;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *subscribed; // @synthesize subscribed=_subscribed;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *notification; // @synthesize notification=_notification;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *scheduleOutbox; // @synthesize scheduleOutbox=_scheduleOutbox;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *scheduleInbox; // @synthesize scheduleInbox=_scheduleInbox;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *calendar; // @synthesize calendar=_calendar;
- (void).cxx_destruct;
- (void)write:(id)arg1;
- (id)copyParseRules;

@end

