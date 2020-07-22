//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMDCameraIDSDeviceConnectionSenderDelegate-Protocol.h>
#import <HomeKitDaemon/HMDCameraIDSSessionInitiatorDelegate-Protocol.h>
#import <HomeKitDaemon/HMDCameraStreamControlManagerProtocol-Protocol.h>
#import <HomeKitDaemon/HMDStreamingManagerDelegate-Protocol.h>

@class HMDCameraMediaConfigGenerator, HMDCameraStreamMetrics, HMDCameraSupportedConfigurationCache, HMDLocalStreamSession, NSString;

@interface HMDCameraLocalStreamControlManager <HMDStreamingManagerDelegate, HMDCameraIDSSessionInitiatorDelegate, HMDCameraIDSDeviceConnectionSenderDelegate, HMDCameraStreamControlManagerProtocol>
{
    HMDLocalStreamSession *_streamSession;
    HMDCameraMediaConfigGenerator *_configGenerator;
    HMDCameraSupportedConfigurationCache *_supportedConfigCache;
}

+ (id)logCategory;
@property(retain, nonatomic) HMDCameraSupportedConfigurationCache *supportedConfigCache; // @synthesize supportedConfigCache=_supportedConfigCache;
@property(retain, nonatomic) HMDCameraMediaConfigGenerator *configGenerator; // @synthesize configGenerator=_configGenerator;
@property(retain, nonatomic) HMDLocalStreamSession *streamSession; // @synthesize streamSession=_streamSession;
- (void).cxx_destruct;
- (void)_sendUpdatedConfiguration;
- (void)_reconfigureStreams;
- (void)streamingManagerDidUpdateConfiguration:(id)arg1;
- (void)streamingManagerDidNetworkDeteriorate:(id)arg1;
- (void)streamingManagerDidNetworkImprove:(id)arg1;
- (void)streamingManagerDidStopStream:(id)arg1 error:(id)arg2;
- (void)streamingManager:(id)arg1 didStartRelay:(id)arg2;
- (void)streamingManagerDidReceiveFirstFrame:(id)arg1 audioStreamSetting:(unsigned long long)arg2 aspectRatio:(id)arg3 slotIdentifier:(id)arg4;
- (void)streamingManager:(id)arg1 didStartStream:(id)arg2 slotIdentifier:(id)arg3;
- (void)deviceConnectionSender:(id)arg1 didEndSession:(id)arg2;
- (void)deviceConnectionSender:(id)arg1 didSetup:(id)arg2;
- (void)sessionInitiator:(id)arg1 didEndSession:(id)arg2;
- (void)sessionInitiator:(id)arg1 didSetup:(id)arg2;
- (void)_streamStarted;
- (void)_cleanUpStreamSession:(id)arg1;
- (void)_writeStopConfig:(id)arg1;
- (void)_writeSelectConfig:(id)arg1 reconfigure:(_Bool)arg2;
- (void)_writeReselectConfig;
- (void)_writeStartConfig;
- (void)_stopCurrentStreamSession:(id)arg1;
- (void)stopStream:(id)arg1;
- (void)_reconfigureStream:(id)arg1;
- (void)reconfigureStream:(id)arg1;
- (void)_startStreamingManager;
- (id)_calculateMTU;
- (void)_startStream:(id)arg1;
- (void)startStream:(id)arg1;
- (_Bool)_validateSetupEndPointReadWithWrite;
- (void)_handleSetupEndPointRead:(id)arg1;
- (void)_sendSetupEndPointRead;
- (void)_writeSetupEndPoint;
- (void)_handleSupportedParameters:(id)arg1;
- (void)_getSupportedConfigurations;
- (void)_negotiateStream;
- (void)negotiateStream;
- (void)updateAudioSetting:(unsigned long long)arg1;
- (void)remoteSetup:(id)arg1;
- (void)dealloc;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 streamSnapshotHandler:(id)arg3 reachabilityPath:(unsigned long long)arg4 destinationID:(id)arg5 delegate:(id)arg6 delegateQueue:(id)arg7 accessory:(id)arg8 streamManagementService:(id)arg9 remoteCapabilities:(id)arg10 supportedConfigCache:(id)arg11 streamPreference:(id)arg12;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) HMDCameraStreamMetrics *streamMetrics;
@property(readonly) Class superclass;

@end

