//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DiagnosticExtensionsDaemon/IDSServiceDelegate-Protocol.h>

@class IDSService, NSMutableArray, NSString;
@protocol DEDClientProtocol, IDSServiceDelegate, OS_dispatch_group, OS_dispatch_queue, OS_os_log;

@interface DEDIDSConnection : NSObject <IDSServiceDelegate>
{
    id <DEDClientProtocol> _remoteSideDelegate;
    NSObject<OS_os_log> *_log;
    IDSService *_service;
    NSObject<OS_dispatch_queue> *_run_queue;
    NSObject<OS_dispatch_group> *_request_group;
    NSMutableArray *_availableDevices;
    id <IDSServiceDelegate> _incomingDelegate;
    CDUnknownBlockType _deviceStatusCallback;
}

+ (id)unpackProtobuf:(id)arg1;
+ (id)packPayload:(id)arg1;
@property(copy) CDUnknownBlockType deviceStatusCallback; // @synthesize deviceStatusCallback=_deviceStatusCallback;
@property(retain) id <IDSServiceDelegate> incomingDelegate; // @synthesize incomingDelegate=_incomingDelegate;
@property(retain) NSMutableArray *availableDevices; // @synthesize availableDevices=_availableDevices;
@property(retain) NSObject<OS_dispatch_group> *request_group; // @synthesize request_group=_request_group;
@property(retain) NSObject<OS_dispatch_queue> *run_queue; // @synthesize run_queue=_run_queue;
@property(retain) IDSService *service; // @synthesize service=_service;
@property(retain) NSObject<OS_os_log> *log; // @synthesize log=_log;
@property __weak id <DEDClientProtocol> remoteSideDelegate; // @synthesize remoteSideDelegate=_remoteSideDelegate;
- (void).cxx_destruct;
- (void)incomingDeviceReceived:(id)arg1;
- (void)discoverDevicesWithCompletion:(CDUnknownBlockType)arg1;
- (void)didStartBugSessionWithInfo:(id)arg1 forID:(id)arg2;
- (void)startBugSessionWithIdentifier:(id)arg1 configuration:(id)arg2 caller:(id)arg3 target:(id)arg4;
- (_Bool)sendMessage:(int)arg1 withData:(id)arg2 forID:(id)arg3 isResponse:(_Bool)arg4;
- (_Bool)sendMessage:(int)arg1 withData:(id)arg2 forDevice:(id)arg3 isResponse:(_Bool)arg4;
- (void)setDeviceCallback:(CDUnknownBlockType)arg1;
- (id)initWithConroller:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

