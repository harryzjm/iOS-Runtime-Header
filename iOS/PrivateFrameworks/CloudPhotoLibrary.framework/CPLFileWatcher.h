//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL;
@protocol CPLFileWatcherDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface CPLFileWatcher : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_nodeSource;
    NSObject<OS_dispatch_source> *_parentSource;
    unsigned long long _nodeInode;
    NSURL *_fileURL;
    id <CPLFileWatcherDelegate> _delegate;
}

@property(nonatomic) __weak id <CPLFileWatcherDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
- (void).cxx_destruct;
- (void)stopWatching;
- (void)startWatching;
- (void)_stopWatchingParent;
- (void)_startWatchingParent;
- (void)_updateWatchingNode;
- (void)_stopWatchingNode;
- (void)_startWatchingNode;
- (void)_forceRefreshWatchingNode;
- (id)initWithFileURL:(id)arg1 delegate:(id)arg2 queue:(id)arg3;

@end

