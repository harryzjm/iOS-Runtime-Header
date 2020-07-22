//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DiagnosticExtensionsDaemon/DEDClientProtocol-Protocol.h>
#import <DiagnosticExtensionsDaemon/DEDWorkerProtocol-Protocol.h>

@class DEDIDSConnection, NSString;
@protocol OS_os_log;

@interface DEDIDSOutbound : NSObject <DEDWorkerProtocol, DEDClientProtocol>
{
    DEDIDSConnection *_connection;
    NSString *_deviceAddress;
    NSString *_sessionID;
    NSObject<OS_os_log> *_log;
}

+ (id)sessionWithID:(id)arg1 withDeviceAtAddress:(id)arg2 connection:(id)arg3;
@property(retain) NSObject<OS_os_log> *log; // @synthesize log=_log;
@property(retain) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(retain) NSString *deviceAddress; // @synthesize deviceAddress=_deviceAddress;
@property __weak DEDIDSConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (void)didCancelSession:(id)arg1;
- (void)cancelSession:(id)arg1;
- (void)didCommitSession:(id)arg1;
- (void)commitSession:(id)arg1;
- (void)uploadProgress:(unsigned long long)arg1 total:(unsigned long long)arg2 session:(id)arg3;
- (void)didAdoptFilesWithError:(id)arg1 forSession:(id)arg2;
- (void)adoptFiles:(id)arg1 forSession:(id)arg2;
- (void)hasCollected:(id)arg1 isCollecting:(id)arg2 inSession:(id)arg3;
- (void)getSessionStatusWithSession:(id)arg1;
- (void)finishedDiagnosticWithIdentifier:(id)arg1 result:(id)arg2 session:(id)arg3;
- (void)startDiagnosticWithIdentifier:(id)arg1 parameters:(id)arg2 session:(id)arg3;
- (void)deviceSupportsDiagnosticExtensions:(id)arg1 session:(id)arg2;
- (void)listAvailableExtensionsForSession:(id)arg1;
- (void)pongSession:(id)arg1;
- (void)terminateExtension:(id)arg1 info:(id)arg2 session:(id)arg3;
- (void)pingSession:(id)arg1;
- (id)init;
- (long long)transportType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

