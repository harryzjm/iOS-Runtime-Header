//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreSpeech/CSVoiceTriggerDelegate-Protocol.h>

@class NSHashTable, NSString;
@protocol OS_dispatch_queue;

@interface CSVoiceTriggerEventNotifier : NSObject <CSVoiceTriggerDelegate>
{
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _isContinuousRunningMode;
}

@property(nonatomic) _Bool isContinuousRunningMode; // @synthesize isContinuousRunningMode=_isContinuousRunningMode;
- (void).cxx_destruct;
- (void)_notifyKeywordDetect;
- (void)_notifyTwoShotDetectionAt:(double)arg1;
- (void)_notifySpeakerReject:(id)arg1;
- (void)_notifyNearMissEvent:(id)arg1;
- (void)_notifyTriggerEvent:(id)arg1;
- (void)keywordDetectorDidDetectKeyword;
- (void)voiceTriggerDidDetectTwoShotAtTime:(double)arg1;
- (void)voiceTriggerDidDetectSpeakerReject:(id)arg1;
- (void)voiceTriggerDidDetectNearMiss:(id)arg1;
- (void)voiceTriggerDidDetectKeyword:(id)arg1;
- (void)unregisterObserver:(id)arg1;
- (void)registerObserver:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
