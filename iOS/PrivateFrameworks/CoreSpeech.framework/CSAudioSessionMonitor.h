//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSpeech/CSAudioSessionEventProvidingDelegate-Protocol.h>

@class NSString;

@interface CSAudioSessionMonitor <CSAudioSessionEventProvidingDelegate>
{
    unsigned long long _audioSessionState;
}

+ (id)sharedInstance;
@property(nonatomic, getter=getAudioSessionState) unsigned long long audioSessionState; // @synthesize audioSessionState=_audioSessionState;
- (void)audioSessionEventProvidingDidSetAudioSessionActive:(_Bool)arg1;
- (void)audioSessionEventProvidingWillSetAudioSessionActive:(_Bool)arg1;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
