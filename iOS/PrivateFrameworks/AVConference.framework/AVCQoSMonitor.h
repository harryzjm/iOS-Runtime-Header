//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVConferenceXPCClient, NSArray, NSMutableArray, NSMutableDictionary;
@protocol AVCQoSMonitorDelegate, OS_dispatch_queue;

@interface AVCQoSMonitor : NSObject
{
    NSObject<OS_dispatch_queue> *_stateQueue;
    id <AVCQoSMonitorDelegate> _delegate;
    AVConferenceXPCClient *_connection;
    NSMutableArray *_registeredStreamTokens;
    NSMutableDictionary *_reportingIntervals;
}

@property(readonly, nonatomic) NSArray *streamTokens; // @synthesize streamTokens=_registeredStreamTokens;
- (_Bool)generateInvalidStreamTokenWithError:(id *)arg1;
- (void)registerBlocksForNotifications;
- (void)deregisterBlocksForNotifications;
- (void)terminateConnection;
- (long long)reportingIntervalForStreamToken:(long long)arg1;
- (id)registerStreamToken:(long long)arg1;
- (void)requestQoSReport;
@property(nonatomic) __weak id <AVCQoSMonitorDelegate> delegate;
- (void)dealloc;
- (id)initWithStreamToken:(long long)arg1 queue:(id)arg2 error:(id *)arg3;

@end
