//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableSet;
@protocol OS_dispatch_queue;

@interface DVTFilePathEventWatcher : NSObject
{
    struct __FSEventStream *_streamRef;
    NSObject<OS_dispatch_queue> *_watcherQueue;
    double _latency;
    unsigned long long _lastEventHandled;
    NSMutableSet *_watchedFilePaths;
    NSMapTable *_watchedFileMap;
}

+ (id)sharedFilePathEventWatcher;
+ (void)initialize;
- (void).cxx_destruct;
- (void)handleEventsForStream:(struct __FSEventStream *)arg1 numEvents:(unsigned long long)arg2 eventPaths:(const char **)arg3 eventFlags:(const unsigned int *)arg4 eventIds:(const unsigned long long *)arg5;
- (void)stop;
- (void)run;
- (void)_resetStream;
- (void)_teardownStream;
- (void)_setupStream;
- (void)watchFilePath:(id)arg1;
- (_Bool)_shouldWatchWholeVolumes;
@property double eventLatency;
- (void)dealloc;
- (id)init;
- (id)_initPrivate;

@end
