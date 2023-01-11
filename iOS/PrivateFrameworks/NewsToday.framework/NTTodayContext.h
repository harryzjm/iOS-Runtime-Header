//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsToday/FCNetworkReachabilityObserving-Protocol.h>
#import <NewsToday/NTTodayContext-Protocol.h>

@class NSString, NTSourceAvailabilityManager;
@protocol FCContentContext, NTReadablePrivateDataStorage, NTTodayResultsSource, NTWritablePrivateDataStorage, OS_dispatch_queue;

@interface NTTodayContext : NSObject <FCNetworkReachabilityObserving, NTTodayContext>
{
    CDUnknownBlockType _newResultsHandler;
    id <FCContentContext> _contentContext;
    CDUnknownBlockType _sessionProvider;
    id <NTReadablePrivateDataStorage> _readablePrivateDataStorage;
    id <NTWritablePrivateDataStorage> _writablePrivateDataStorage;
    NTSourceAvailabilityManager *_sourceAvailabilityManager;
    id <NTTodayResultsSource> _todayResultsSource;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) id <NTTodayResultsSource> todayResultsSource; // @synthesize todayResultsSource=_todayResultsSource;
@property(retain, nonatomic) NTSourceAvailabilityManager *sourceAvailabilityManager; // @synthesize sourceAvailabilityManager=_sourceAvailabilityManager;
@property(retain, nonatomic) id <NTWritablePrivateDataStorage> writablePrivateDataStorage; // @synthesize writablePrivateDataStorage=_writablePrivateDataStorage;
@property(retain, nonatomic) id <NTReadablePrivateDataStorage> readablePrivateDataStorage; // @synthesize readablePrivateDataStorage=_readablePrivateDataStorage;
@property(copy, nonatomic) CDUnknownBlockType sessionProvider; // @synthesize sessionProvider=_sessionProvider;
@property(retain, nonatomic) id <FCContentContext> contentContext; // @synthesize contentContext=_contentContext;
@property(copy, nonatomic) CDUnknownBlockType newResultsHandler; // @synthesize newResultsHandler=_newResultsHandler;
- (void).cxx_destruct;
- (void)_setupTodayResultsSource;
- (void)userDidReadHeadlineWithAnalyticsElement:(id)arg1 atDate:(id)arg2;
- (void)userDidSeeHeadlinesWithAnalyticsElements:(id)arg1 atDate:(id)arg2;
- (void)fetchLatestResultsWithOperationInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)networkReachabilityDidChange:(id)arg1;
- (id)initWithContentHostDirectory:(id)arg1 processVariant:(unsigned long long)arg2 queue:(id)arg3 sessionProvider:(CDUnknownBlockType)arg4;
- (id)initWithContentContext:(id)arg1 processVariant:(unsigned long long)arg2 queue:(id)arg3 sessionProvider:(CDUnknownBlockType)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

