//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol CSIndexQueuableItem, OS_dispatch_queue, OS_dispatch_source;

@interface CSIndexingQueue : NSObject
{
    _Bool _timerArmed;
    long long _mode;
    double _idleTime;
    double _idleTimeLeeway;
    unsigned long long _maximumBatchSize;
    NSMutableDictionary *_queuedItems;
    NSObject<OS_dispatch_queue> *_coalescingQueue;
    NSObject<OS_dispatch_source> *_coalescingTimer;
    CDUnknownBlockType _notifyBlock;
    double _lastPush;
    id <CSIndexQueuableItem> _lastPushedItem;
}

@property(retain, nonatomic) id <CSIndexQueuableItem> lastPushedItem; // @synthesize lastPushedItem=_lastPushedItem;
@property double lastPush; // @synthesize lastPush=_lastPush;
@property _Bool timerArmed; // @synthesize timerArmed=_timerArmed;
@property(copy) CDUnknownBlockType notifyBlock; // @synthesize notifyBlock=_notifyBlock;
@property(retain) NSObject<OS_dispatch_source> *coalescingTimer; // @synthesize coalescingTimer=_coalescingTimer;
@property(retain) NSObject<OS_dispatch_queue> *coalescingQueue; // @synthesize coalescingQueue=_coalescingQueue;
@property(retain) NSMutableDictionary *queuedItems; // @synthesize queuedItems=_queuedItems;
@property unsigned long long maximumBatchSize; // @synthesize maximumBatchSize=_maximumBatchSize;
@property double idleTimeLeeway; // @synthesize idleTimeLeeway=_idleTimeLeeway;
@property double idleTime; // @synthesize idleTime=_idleTime;
@property long long mode; // @synthesize mode=_mode;
- (void).cxx_destruct;
- (void)flush;
- (void)_flushWithAppResigned:(_Bool)arg1 forced:(_Bool)arg2;
- (void)queueItem:(id)arg1;
- (void)_pushLastItem:(id)arg1 time:(double)arg2;
- (void)queueItems:(id)arg1;
- (void)_queueItems:(id)arg1;
- (void)_applicationWillResign:(id)arg1;
- (void)dealloc;
- (id)initWithIdleTime:(double)arg1 idleTimeLeeway:(double)arg2 maximumBatchSize:(unsigned long long)arg3 mode:(long long)arg4 notifyBlock:(CDUnknownBlockType)arg5;
- (id)initWithMode:(long long)arg1 notifyBlock:(CDUnknownBlockType)arg2;

@end

