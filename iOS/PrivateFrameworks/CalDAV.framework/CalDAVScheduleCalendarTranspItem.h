//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVItemWithNoChildren;

@interface CalDAVScheduleCalendarTranspItem : CoreDAVItem
{
    CoreDAVItemWithNoChildren *_transparent;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *transparent; // @synthesize transparent=_transparent;
- (id)copyParseRules;
@property(readonly, nonatomic) _Bool isScheduleTransparent;
- (id)init;

@end
