//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject;
@protocol OS_dispatch_queue;

@interface CSMediaPlayingMonitor
{
    long long _mediaIsPlaying;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (long long)mediaPlayingState;
- (void)_notifyObserver:(id)arg1 mediaIsPlayingState:(long long)arg2;
- (void)_notePossiblePlayPausedStateChange:(id)arg1;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)initializeMediaPlayingState;
- (id)init;

@end
