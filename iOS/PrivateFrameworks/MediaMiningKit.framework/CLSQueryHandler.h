//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLSGeoServiceThread;
@protocol CLSQueryPerformerProtocol, OS_dispatch_queue, OS_dispatch_source, OS_os_log;

@interface CLSQueryHandler : NSObject
{
    id <CLSQueryPerformerProtocol> _query;
    double _internalProgressTimeInterval;
    NSObject<OS_dispatch_source> *_timer;
    unsigned long long _retryLevel;
    double _nextRetryTime;
    _Bool _alreadyLaunched;
    _Bool _didQueryFinish;
    NSObject<OS_dispatch_queue> *_timerQueue;
    NSObject<OS_os_log> *_loggingConnection;
    _Bool _simulatesTimeout;
    CDUnknownBlockType _progressBlock;
    CDUnknownBlockType _completionBlock;
    CLSGeoServiceThread *_geoServiceThread;
    double _timeoutInterval;
    unsigned long long _numberOfRetries;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long numberOfRetries; // @synthesize numberOfRetries=_numberOfRetries;
@property(nonatomic) double timeoutInterval; // @synthesize timeoutInterval=_timeoutInterval;
@property(nonatomic, getter=isSimulatingTimeout) _Bool simulatesTimeout; // @synthesize simulatesTimeout=_simulatesTimeout;
@property(retain, nonatomic) CLSGeoServiceThread *geoServiceThread; // @synthesize geoServiceThread=_geoServiceThread;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
- (unsigned long long)_cacheMapItems:(id)arg1;
- (void)cancel;
- (void)_cancel;
- (void)_handleError:(id)arg1 numberOfItems:(unsigned long long)arg2;
- (void)_heartBeat;
- (void)_startQuery;
- (void)_handleQueryResultsForQuery:(id)arg1 items:(id)arg2 error:(id)arg3;
- (void)_forwardToGeoThread;
- (void)cacheItems;
- (id)initWithQueryPerformer:(id)arg1 geoServiceThread:(id)arg2 loggingConnection:(id)arg3;

@end
