//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKDevicePearl, BKFaceDetectOperation, NSString;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface AWPearlAttentionStreamer : NSObject
{
    BKDevicePearl *_pearlDevice;
    BKFaceDetectOperation *_pendingPresenceOperation;
    BKFaceDetectOperation *_finishingPresenceOperation;
    CDUnknownBlockType _callbackBlock;
    CDUnknownBlockType _notificationBlock;
    _Bool _attentionStreamerRunning;
    _Bool _unitTest;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _eyeReliefStarted;
    int _attentionAwareFeaturesEnabledNotification;
    _Bool _isAttentionAwareFeaturesEnabled;
    int _displayNotifyToken;
    _Bool _displayOn;
    _Bool _smartCoverClosed;
    NSObject<OS_dispatch_semaphore> *_sem;
}

- (void).cxx_destruct;
- (id)unitTestDevice;
- (void)operation:(id)arg1 finishedWithReason:(long long)arg2;
- (void)operation:(id)arg1 faceDetectStateChanged:(id)arg2;
- (void)setDisplayState:(_Bool)arg1;
- (void)setDisplayStateFromNotification;
- (void)setSmartCoverState:(_Bool)arg1;
- (void)sendNotification:(unsigned long long)arg1;
- (_Bool)isAttentionAwareFeaturesEnabled;
- (void)setIsAttentionAwareFeaturesEnabled:(_Bool)arg1;
- (_Bool)attentionStreamerRunning;
- (CDStruct_3d581f42)getStreamerOptions;
- (id)cancelEventStream;
- (id)streamEventWithBlock:(CDUnknownBlockType)arg1 options:(CDStruct_3d581f42)arg2;
- (void)setNotificationHandler:(CDUnknownBlockType)arg1;
- (id)initForUnitTest:(_Bool)arg1 queue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

