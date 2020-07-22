//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVHrefItem, CoreDAVLeafItem;

@interface CalDAVCalendarServerOrganizerItem : CoreDAVItem
{
    CoreDAVHrefItem *_href;
    CoreDAVLeafItem *_commonName;
}

@property(retain, nonatomic) CoreDAVLeafItem *commonName; // @synthesize commonName=_commonName;
@property(retain, nonatomic) CoreDAVHrefItem *href; // @synthesize href=_href;
- (void).cxx_destruct;
- (id)copyParseRules;
- (id)init;

@end

