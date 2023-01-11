//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SSXPCConnection;
@protocol OS_dispatch_queue, SSDownloadMonitorDelegate;

@interface SSDownloadMonitor : NSObject
{
    SSXPCConnection *_connection;
    id <SSDownloadMonitorDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

- (void)_reloadForChangeNotification;
- (id)_copyItemsWithReply:(id)arg1 error:(id *)arg2;
- (id)_connection;
@property id <SSDownloadMonitorDelegate> delegate;
- (void)resumeMonitorItem:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)prioritizeMonitorItem:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)pauseMonitorItem:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)getMonitorItemsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end
