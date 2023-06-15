//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCQoSMonitorManager
{
    NSMutableArray *_monitors;
    NSMutableDictionary *_sources;
    NSObject<OS_dispatch_queue> *_xpcCommandQueue;
    long long _reportingInterval;
    NSMutableArray *_moitors;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) NSMutableArray *moitors; // @synthesize moitors=_moitors;
- (_Bool)doesQoSSourceExistForStreamToken:(id)arg1;
- (void)deregisterBlocksForService;
- (void)registerBlocksForService;
- (void)updateEventDrivenQoSReport:(id)arg1 toClientsWithToken:(long long)arg2;
- (void)updateQoSReport:(id)arg1 toClientsWithToken:(long long)arg2;
- (void)unregisterQoSReportingSourceForToken:(long long)arg1;
- (void)registerQoSReportingSourceForToken:(long long)arg1;
- (void)dealloc;
- (id)init;

@end

