//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreSpeech/CSVoiceTriggerXPCClientDelegate-Protocol.h>

@class CSVoiceTriggerXPCClient, NSString;
@protocol OS_dispatch_queue;

@interface CSVoiceTriggerXPCService : NSObject <CSVoiceTriggerXPCClientDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    CSVoiceTriggerXPCClient *_xpcClient;
}

+ (id)sharedService;
- (void).cxx_destruct;
@property(retain, nonatomic) CSVoiceTriggerXPCClient *xpcClient; // @synthesize xpcClient=_xpcClient;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)_teardownXPCClientIfNeeded;
- (void)voiceTriggerXPCClient:(id)arg1 didDisconnect:(_Bool)arg2;
- (id)_createXPCClientConnectionIfNeeded:(id)arg1;
- (void)notifyVoiceTriggeredSiriSessionCancelled;
- (id)fetchVoiceTriggerDailyStats;
- (void)notifyVoiceTriggeredSiriSessionCancelledWithXpcClient:(id)arg1;
- (void)setRaiseToSpeakBypassing:(_Bool)arg1 timeout:(double)arg2;
- (void)setRaiseToSpeakBypassing:(_Bool)arg1 timeout:(double)arg2 xpcClient:(id)arg3;
- (void)setPhraseSpotterBypassing:(_Bool)arg1 timeout:(double)arg2;
- (void)setPhraseSpotterBypassing:(_Bool)arg1 timeout:(double)arg2 xpcClient:(id)arg3;
- (void)enableVoiceTrigger:(_Bool)arg1 withAssertion:(id)arg2;
- (void)enableVoiceTrigger:(_Bool)arg1 withAssertion:(id)arg2 xpcClient:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
