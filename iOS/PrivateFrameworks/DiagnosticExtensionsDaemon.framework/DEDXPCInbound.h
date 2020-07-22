//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DiagnosticExtensionsDaemon/DEDXPCProtocol-Protocol.h>

@class DEDController, NSString;
@protocol OS_os_log;

@interface DEDXPCInbound : NSObject <DEDXPCProtocol>
{
    NSObject<OS_os_log> *_log;
    DEDController *_delegate;
}

@property __weak DEDController *delegate; // @synthesize delegate=_delegate;
@property(retain) NSObject<OS_os_log> *log; // @synthesize log=_log;
- (void).cxx_destruct;
- (void)didCancelSession:(id)arg1;
- (void)cancelSession:(id)arg1;
- (void)didCommitSession:(id)arg1;
- (void)commitSession:(id)arg1;
- (void)uploadProgress:(unsigned long long)arg1 total:(long long)arg2 session:(id)arg3;
- (void)didAdoptFilesWithError:(id)arg1 forSession:(id)arg2;
- (void)adoptFiles:(id)arg1 forSession:(id)arg2;
- (void)hasCollected:(id)arg1 isCollecting:(id)arg2 inSession:(id)arg3;
- (void)getSessionStatusWithSession:(id)arg1;
- (void)terminateExtension:(id)arg1 info:(id)arg2 session:(id)arg3;
- (void)finishedDiagnosticWithIdentifier:(id)arg1 result:(id)arg2 session:(id)arg3;
- (void)startDiagnosticWithIdentifier:(id)arg1 parameters:(id)arg2 session:(id)arg3;
- (void)deviceSupportsDiagnosticExtensions:(id)arg1 session:(id)arg2;
- (void)listAvailableExtensionsForSession:(id)arg1;
- (void)pongSession:(id)arg1;
- (void)pingSession:(id)arg1;
- (void)didStartBugSessionWithInfo:(id)arg1;
- (void)startBugSessionWithIdentifier:(id)arg1 configuration:(id)arg2 caller:(id)arg3 target:(id)arg4;
- (void)successPINForDevice:(id)arg1;
- (void)tryPIN:(id)arg1 forDevice:(id)arg2;
- (void)promptPINForDevice:(id)arg1;
- (void)startPairSetupForDevice:(id)arg1;
- (void)gotDeviceUpdate:(id)arg1;
- (void)didDiscoverDevices:(id)arg1;
- (void)stopDeviceDiscovery;
- (void)discoverAllAvailableDevices;
- (void)pong;
- (void)ping;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
