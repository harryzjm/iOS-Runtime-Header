//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface (null) (PromotedContentUI)
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (void)webProcessVideoAdJSODidCallExitFullScreenTapped:(float)arg1 volume:(float)arg2;
- (void)webProcessVideoAdJSODidCallFullScreenTapped:(float)arg1 volume:(float)arg2;
- (void)webProcessVideoAdJSODidCallSkipAdTapped:(float)arg1 volume:(float)arg2;
- (void)webProcessVideoAdJSODidCallVideoTapped:(float)arg1 volume:(float)arg2;
- (void)webProcessVideoAdJSODidCallMoreInfoTapped:(float)arg1 volume:(float)arg2;
- (void)webProcessVideoAdJSODidCallAudioUnmuted:(float)arg1 volume:(float)arg2;
- (void)webProcessVideoAdJSODidCallAudioMuted:(float)arg1;
- (void)webProcessVideoAdJSODidCallVolumeChanged:(float)arg1 playTime:(float)arg2;
- (void)webProcessVideoAdJSODidCallViewabilityChanged:(_Bool)arg1 playTime:(float)arg2 volume:(float)arg3;
- (void)webProcessVideoAdJSODidCallPlayCompletedWithVolume:(float)arg1;
- (void)webProcessVideoAdJSODidCallPlayProgressed:(float)arg1 volume:(float)arg2;
- (void)webProcessVideoAdJSODidCallPlayPaused:(float)arg1 volume:(float)arg2;
- (void)webProcessVideoAdJSODidCallPlayResumed:(float)arg1 volume:(float)arg2;
- (void)webProcessVideoAdJSODidCallPlayStarted:(float)arg1 volume:(float)arg2;
- (void)webProcessVideoAdJSOCreativeViewLoaded;
- (void)webProcessVideoAdJSOGetVideoInfo:(CDUnknownBlockType)arg1;
- (void)webProcessMRAIDJSODidCallOpen:(id)arg1;
- (void)webProcessMRAIDJSODidCallCreateCalendarEvent:(id)arg1;
- (void)webProcessMRAIDJSODidCallExpand:(id)arg1 withMaximumWidth:(double)arg2 andHeight:(double)arg3;
- (void)webProcessDiagnosticJSOStatusReported:(id)arg1 status:(id)arg2;
- (void)webProcessMRAIDJSODidCallClose;
- (void)webProcessPlugInBrowserContextControllerGlobalObjectIsAvailableForFrame;
- (void)webProcessPlugInWillDestroyBrowserContextController;
- (void)webProcessPlugInDidCreateBrowserContextController;
@end

