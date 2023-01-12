//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UserNotificationsUIKit/NCNotificationSummaryContentProviding-Protocol.h>

@class NSArray, NSDate, NSString;

@interface NCNotificationSummaryContentProvider : NSObject <NCNotificationSummaryContentProviding>
{
    _Bool _iconViewLeading;
    NSString *_summaryTitle;
    NSString *_summary;
    NSArray *_summaryIconViews;
    NSString *_summaryTitleFontName;
    NSDate *_summaryDate;
    NSString *_summaryIconSymbolName;
    NSArray *_titlesForSectionListsInSummary;
    NSArray *_notificationRequests;
}

+ (id)summaryContentProviderOfType:(unsigned long long)arg1 notificationRequests:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *notificationRequests; // @synthesize notificationRequests=_notificationRequests;
@property(copy, nonatomic) NSArray *titlesForSectionListsInSummary; // @synthesize titlesForSectionListsInSummary=_titlesForSectionListsInSummary;
@property(copy, nonatomic) NSString *summaryIconSymbolName; // @synthesize summaryIconSymbolName=_summaryIconSymbolName;
@property(copy, nonatomic) NSDate *summaryDate; // @synthesize summaryDate=_summaryDate;
@property(copy, nonatomic) NSString *summaryTitleFontName; // @synthesize summaryTitleFontName=_summaryTitleFontName;
@property(readonly, nonatomic, getter=isIconViewLeading) _Bool iconViewLeading; // @synthesize iconViewLeading=_iconViewLeading;
@property(copy, nonatomic) NSString *summaryTitle; // @synthesize summaryTitle=_summaryTitle;
- (id)_summaryStringForCommunicationNotificationRequest:(id)arg1;
- (id)_communicationAvatarForNotificationRequest:(id)arg1;
- (id)_iconViewForNotificationRequest:(id)arg1;
- (id)_summaryIconViewForNotificationRequest:(id)arg1;
- (id)_summaryStringForNotificationRequest:(id)arg1;
@property(readonly, nonatomic) NSArray *summaryIconViews; // @synthesize summaryIconViews=_summaryIconViews;
@property(readonly, copy, nonatomic) NSString *summary; // @synthesize summary=_summary;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
