//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CalendarNotification/CALNNotificationSource-Protocol.h>

@class NSArray, NSString;
@protocol CALNCalendarIconIdentifierProvider, CALNNotificationManager, CALNSharedCalendarInvitationResponseNotificationDataSource, CALNSourceEventRepresentationProvider;

@interface CALNSharedCalendarInvitationResponseNotificationSource : NSObject <CALNNotificationSource>
{
    id <CALNSharedCalendarInvitationResponseNotificationDataSource> _dataSource;
    id <CALNNotificationManager> _notificationManager;
    id <CALNCalendarIconIdentifierProvider> _iconIdentifierProvider;
    id <CALNSourceEventRepresentationProvider> _sourceEventRepresentationProvider;
}

@property(readonly, nonatomic) id <CALNSourceEventRepresentationProvider> sourceEventRepresentationProvider; // @synthesize sourceEventRepresentationProvider=_sourceEventRepresentationProvider;
@property(readonly, nonatomic) id <CALNCalendarIconIdentifierProvider> iconIdentifierProvider; // @synthesize iconIdentifierProvider=_iconIdentifierProvider;
@property(readonly, nonatomic) __weak id <CALNNotificationManager> notificationManager; // @synthesize notificationManager=_notificationManager;
@property(readonly, nonatomic) id <CALNSharedCalendarInvitationResponseNotificationDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)didReceiveResponse:(id)arg1;
- (id)contentForNotificationWithInfo:(id)arg1;
- (id)contentForNotificationWithSourceClientIdentifier:(id)arg1;
- (void)refreshNotifications:(id)arg1;
@property(readonly, nonatomic) NSArray *categories;
@property(readonly, nonatomic) NSString *sourceIdentifier;
- (id)initWithDataSource:(id)arg1 notificationManager:(id)arg2 iconIdentifierProvider:(id)arg3 sourceEventRepresentationProvider:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
