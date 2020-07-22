//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/HMFMessageReceiver-Protocol.h>

@class NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface _HMCameraStream <HMFMessageReceiver>
{
    unsigned long long _audioStreamSetting;
}

- (void)_handleAudioStreamSettingUpdate:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2 error:(id)arg3;
- (void)_issueUpdateAudioStreamSettingRequest:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_updateAudioStreamSetting:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateAudioStreamSetting:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(nonatomic) unsigned long long audioStreamSetting; // @synthesize audioStreamSetting=_audioStreamSetting;
- (void)dealloc;
- (id)initWithSessionID:(id)arg1 slotIdentifier:(id)arg2 clientQueue:(id)arg3 delegateCaller:(id)arg4 msgDispatcher:(id)arg5 profileUniqueIdentifier:(id)arg6 aspectRatio:(id)arg7 audioStreamSetting:(unsigned long long)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
@property(readonly) Class superclass;

@end
