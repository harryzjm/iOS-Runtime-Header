//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;
@protocol AssetCacheServicesReporterDelegate, OS_dispatch_queue, OS_os_log;

@interface AssetCacheServicesReporter : NSObject
{
    id <AssetCacheServicesReporterDelegate> _weakDelegate;
    NSObject<OS_dispatch_queue> *_weakDelegateQueue;
    NSObject<OS_os_log> *_logHandle;
    NSMutableDictionary *_results;
    NSMutableSet *_allServerHostPorts;
}

@property(retain) NSMutableSet *allServerHostPorts; // @synthesize allServerHostPorts=_allServerHostPorts;
@property(retain) NSMutableDictionary *results; // @synthesize results=_results;
@property(retain) NSObject<OS_os_log> *logHandle; // @synthesize logHandle=_logHandle;
@property __weak NSObject<OS_dispatch_queue> *weakDelegateQueue; // @synthesize weakDelegateQueue=_weakDelegateQueue;
@property __weak id <AssetCacheServicesReporterDelegate> weakDelegate; // @synthesize weakDelegate=_weakDelegate;
- (void).cxx_destruct;
- (id)sortedHostPorts:(id)arg1 usingSortInfo:(id)arg2;
- (id)serverSortInfoForHostPort:(id)arg1 rank:(id)arg2;
- (void)didFinishWithResults:(id)arg1;
- (void)didGatherResults:(id)arg1 forKeyPath:(id)arg2;
- (void)willStartGatheringResultsForKeyPath:(id)arg1;
- (id)keyPath:(id)arg1 byAppendingKey:(id)arg2;
- (void)reportReachability;
- (void)reportPublicIPAddressRangesWithKeyPath:(id)arg1;
- (id)locateServersWithOptions:(id)arg1;
- (void)reportServersWithKeyPath:(id)arg1 generateOptions:(CDUnknownBlockType)arg2;
- (void)reportFreshServersWithKeyPath:(id)arg1;
- (void)reportCachedServersWithKeyPath:(id)arg1;
- (void)reportMightHaveWithKeyPath:(id)arg1;
- (void)reportPublicIPAddress;
- (id)sortedHostPorts:(id)arg1;
- (_Bool)doRanges:(id)arg1 containAddress:(id)arg2;
- (id)prettyRanges:(id)arg1;
- (void)start;
- (id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2;

@end

