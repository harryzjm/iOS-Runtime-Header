//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, NSString, SSVPlayActivityController;
@protocol OS_dispatch_queue;

@interface MPCJinglePlayActivityReportingController
{
    NSObject<OS_dispatch_queue> *_accessSerialQueue;
    double _nonCatalogAggregatePlayDuration;
    double _nonCatalogAggregateStartTime;
    NSString *_nonCatalogDeviceName;
    _Bool _nonCatalogOffline;
    _Bool _nonCatalogSBEnabled;
    unsigned long long _nonCatalogSourceType;
    unsigned long long _nonCatalogStoreAccountID;
    NSString *_nonCatalogStoreFrontID;
    _Bool _shouldReportAggregateTimePlayActivityEvents;
    _Bool _shouldReportPlayActivityEvents;
    SSVPlayActivityController *_playActivityController;
}

@property(nonatomic) _Bool shouldReportPlayActivityEvents; // @synthesize shouldReportPlayActivityEvents=_shouldReportPlayActivityEvents;
@property(nonatomic) _Bool shouldReportAggregateTimePlayActivityEvents; // @synthesize shouldReportAggregateTimePlayActivityEvents=_shouldReportAggregateTimePlayActivityEvents;
@property(readonly, nonatomic) SSVPlayActivityController *playActivityController; // @synthesize playActivityController=_playActivityController;
- (void).cxx_destruct;
- (void)_clearNonCatalogAggregatePlayActivityEventData;
- (id)_captureNonCatalogAggregatePlayActivityEventWithNonCatalogAggregateEndTime:(double)arg1;
- (void)_applicationWillTerminateNotification:(id)arg1;
- (void)completePendingPlayActivityEvents:(id)arg1 forSessionToken:(unsigned long long)arg2 withResult:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)acquirePendingPlayActivityEventsForStoreAccountID:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_recordReportingEvents:(id)arg1;
- (void)dealloc;
- (id)initWithWritingStyle:(unsigned long long)arg1;
- (id)init;

@end

