//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVErrorItem, CoreDAVItemWithHrefChildItem, CoreDAVLeafItem, ICSDocument, NSString;

@interface CalDAVScheduleResponseDetailsItem : CoreDAVItem
{
    CoreDAVItemWithHrefChildItem *_recipientHREF;
    CoreDAVLeafItem *_requestStatus;
    ICSDocument *_calendarData;
    CoreDAVErrorItem *_topLevelErrorItem;
    NSString *_responseDescription;
}

@property(retain, nonatomic) NSString *responseDescription; // @synthesize responseDescription=_responseDescription;
@property(retain, nonatomic) CoreDAVErrorItem *topLevelErrorItem; // @synthesize topLevelErrorItem=_topLevelErrorItem;
@property(retain, nonatomic) ICSDocument *calendarData; // @synthesize calendarData=_calendarData;
@property(retain, nonatomic) CoreDAVLeafItem *requestStatus; // @synthesize requestStatus=_requestStatus;
@property(retain, nonatomic) CoreDAVItemWithHrefChildItem *recipientHREF; // @synthesize recipientHREF=_recipientHREF;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) NSString *recipientString;
- (id)copyParseRules;
- (void)_setCalendarDataWithLeafItem:(id)arg1;

@end

