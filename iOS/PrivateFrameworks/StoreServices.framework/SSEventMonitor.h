//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SSXPCConnection;
@protocol OS_dispatch_queue, SSEventMonitorDelegate;

@interface SSEventMonitor : NSObject
{
    id <SSEventMonitorDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    SSXPCConnection *_eventConnection;
}

- (void)_handleMessage:(id)arg1 fromServerConnection:(id)arg2;
- (void)_connectEventConnection;
@property id <SSEventMonitorDelegate> delegate;
- (void)dealloc;
- (id)init;

@end
