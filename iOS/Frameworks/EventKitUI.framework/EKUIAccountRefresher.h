//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class CalendarModel, NSDate, NSSet;
@protocol EKUIAccountRefresherDelegate;

@interface EKUIAccountRefresher : NSObject
{
    CalendarModel *_model;
    _Bool _sourcesCurrentlySyncing;
    NSDate *_refreshStartDate;
    _Bool _refreshing;
    id <EKUIAccountRefresherDelegate> _delegate;
    NSSet *_refreshingSources;
}

@property(readonly, nonatomic) NSSet *refreshingSources; // @synthesize refreshingSources=_refreshingSources;
@property(readonly, nonatomic) _Bool refreshing; // @synthesize refreshing=_refreshing;
@property(nonatomic) __weak id <EKUIAccountRefresherDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool allAccountsOffline;
- (_Bool)sourceFinishedRefreshing:(id)arg1;
- (void)_syncCompleted;
- (void)_cancelMaximumTimeElapsedTimeout;
- (void)_beginMaximumTimeElapsedTimeout;
- (void)_cancelSyncStartTimeout;
- (void)_beginSyncStartTimeout;
- (void)_syncStartTimeoutExpired;
- (void)_refreshControlMaximumVisibleTimeElapsed;
- (void)refresh;
- (_Bool)_areAnySourcesCurrentlySyncing;
- (_Bool)_allSourcesRefreshed;
- (void)_syncDidEnd;
- (void)_syncDidStart;
- (void)_eventStoreChanged:(id)arg1;
- (id)initWithCalendarModel:(id)arg1;

@end

