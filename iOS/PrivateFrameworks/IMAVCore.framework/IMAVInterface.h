//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IMAVInterface : NSObject
{
    id _delegate;
}

+ (id)alloc;
+ (id)sharedInstance;
@property id delegate; // @synthesize delegate=_delegate;
- (void)updateAVChat:(id)arg1 withCallMetadata:(id)arg2 isFinalUpdate:(_Bool)arg3;
- (long long)_runPingTestForChat:(id)arg1;
- (long long)_checkNetworkForChat:(id)arg1 requiresWifi:(_Bool)arg2;
- (_Bool)_submitEndCallMetric:(id)arg1 forCallID:(long long)arg2;
- (_Bool)_submitLoggingInformation:(id)arg1 forChat:(id)arg2;
- (void)avChat:(id)arg1 setLocalLandscapeAspectRatio:(struct CGSize)arg2 localPortraitAspectRatio:(struct CGSize)arg3;
@property(nonatomic) _Bool shouldKeepCameraRunning;
- (void)persistentProperty:(id)arg1 changedTo:(id)arg2 from:(id)arg3;
@property(readonly, nonatomic) id _controller;
@property(readonly, nonatomic) id controller;
- (void)processRemoteIPChanged:(id)arg1 fromParticipant:(id)arg2;
- (void)handleRelayCancel:(id)arg1 fromParticipant:(id)arg2 callInfo:(id)arg3;
- (void)handleRelayUpdate:(id)arg1 fromParticipant:(id)arg2 callInfo:(id)arg3;
- (void)handleRelayInitate:(id)arg1 fromParticipant:(id)arg2 callInfo:(id)arg3;
@property(readonly, nonatomic) _Bool supportsRelay;
@property(nonatomic) unsigned int maxBitrate;
- (void)setRemoteVideoPresentationState:(unsigned int)arg1 forChat:(id)arg2;
- (void)setRemoteVideoPresentationSize:(struct CGSize)arg1 forChat:(id)arg2;
@property(nonatomic) void *localVideoBackLayer;
@property(nonatomic) void *localVideoLayer;
@property(readonly, nonatomic) _Bool supportsLayers;
- (id)avChat:(id)arg1 IPAndPortDataWithCallerIP:(id)arg2 callerSIPPort:(unsigned int)arg3 shouldFindExternalIP:(_Bool)arg4;
- (id)avChat:(id)arg1 IPAndPortDataWithCallerIPAndPortData:(id)arg2 shouldFindExternalIP:(_Bool)arg3;
- (id)natTypeForAVChat:(id)arg1;
- (id)getNatIPFromICEData:(id)arg1;
- (_Bool)avChat:(id)arg1 generateCallInfoForID:(id)arg2 service:(id)arg3 usingRelay:(_Bool)arg4 callInfo:(id)arg5;
- (void)avChat:(id)arg1 prepareConnectionWithCallInfo:(id)arg2;
- (void)cancelConferenceForAVChat:(id)arg1;
- (int)avChat:(id)arg1 endConferenceForUserID:(id)arg2;
- (void)endAVConferenceWithChat:(id)arg1 callID:(long long)arg2;
- (int)endConferenceForAVChat:(id)arg1;
- (_Bool)stopPreview;
- (_Bool)startPreviewWithError:(id *)arg1;
@property(readonly, nonatomic) unsigned long long capabilities;
@property(readonly, nonatomic) unsigned long long capabilitiesOfCPU;
@property(readonly, nonatomic) unsigned long long capabilitiesOfNetwork;
- (void)avChat:(id)arg1 setValidatedIdentity:(struct __SecIdentity *)arg2;
- (void)avChat:(id)arg1 setSendingVideo:(_Bool)arg2;
- (_Bool)isSendingVideoForAVChat:(id)arg1;
- (void)avChat:(id)arg1 setSendingAudio:(_Bool)arg2;
- (_Bool)isSendingAudioForAVChat:(id)arg1;
- (void)avChat:(id)arg1 setRemoteMute:(_Bool)arg2;
- (_Bool)isRemoteMuteForAVChat:(id)arg1;
- (void)avChat:(id)arg1 setPaused:(_Bool)arg2;
- (_Bool)isPausedForAVChat:(id)arg1;
- (void)avChat:(id)arg1 setMute:(_Bool)arg2;
- (_Bool)isMuteForAVChat:(id)arg1;
@property(readonly, nonatomic) _Bool systemSupportsBackFacingCamera;
@property(readonly, nonatomic) _Bool systemSupportsFrontFacingCamera;
@property(readonly, nonatomic) _Bool systemCanAudioChat;
@property(readonly, nonatomic) _Bool systemCanVideoChat;
- (void)unsetDelegate:(id)arg1;
@property(readonly, nonatomic) _Bool isAVInterfaceReady;
- (void)chatRelayedStatusChanged:(id)arg1;
- (void)chatStateUpdated;
@property(readonly, nonatomic) unsigned int overallChatState;
- (void)_notifyAboutPotentialCallForChat:(id)arg1;
- (void)_conferenceEnded:(id)arg1;
- (void)_conferenceWillStart:(id)arg1;
- (void)cleanupAVInterface;
- (void)initAVInterface;
- (void)_avChatDealloc:(id)arg1;
- (void)dealloc;

@end

