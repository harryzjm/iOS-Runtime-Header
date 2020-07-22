//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SafariShared/NSXPCListenerDelegate-Protocol.h>
#import <SafariShared/WBSCyclerDeviceCoordinatorDelegate-Protocol.h>
#import <SafariShared/WBSCyclerServiceProtocol-Protocol.h>

@class NSString, NSXPCListener, WBSCyclerDeviceCoordinator, WBSCyclerTestRunner, WBSCyclerTestTargetProxyController;
@protocol WBSCyclerTestSuite;

@interface WBSCyclerService : NSObject <NSXPCListenerDelegate, WBSCyclerDeviceCoordinatorDelegate, WBSCyclerServiceProtocol>
{
    NSXPCListener *_xpcListener;
    WBSCyclerTestTargetProxyController *_testTargetProxyController;
    Class _testSuiteClass;
    id <WBSCyclerTestSuite> _testSuite;
    WBSCyclerTestRunner *_testRunner;
    WBSCyclerDeviceCoordinator *_deviceCoordinator;
    CDUnknownBlockType _deviceAddressRequestReply;
    NSString *_identifier;
}

@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)_descriptionForErrorCode:(long long)arg1;
- (id)_errorWithCode:(long long)arg1;
- (void)_postFinishNotificationWithError:(id)arg1;
- (void)_setSeed:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)_setTestSuiteName:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)_startCyclingFromBeginning:(_Bool)arg1;
- (void)deviceCoordinator:(id)arg1 didReceiveData:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)deviceCoordinatorDidEstablishConnectionsToAllDevices:(id)arg1;
- (void)deviceCoordinator:(id)arg1 didEncounterError:(id)arg2;
- (void)deviceCoordinator:(id)arg1 didBeginPrimaryDeviceCoordinationWithAddress:(id)arg2;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)fetchDeviceAddressWithReply:(CDUnknownBlockType)arg1;
- (void)fetchStatusWithReply:(CDUnknownBlockType)arg1;
- (void)sendRequestToTestSuite:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)stopCyclingWithReply:(CDUnknownBlockType)arg1;
- (void)startCyclingFromBeginning:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;
- (void)setValue:(id)arg1 forConfigurationKey:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)setTestTargetEndpoint:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
