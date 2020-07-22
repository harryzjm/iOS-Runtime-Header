//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <XCTest/XCTestManager_TestsInterface-Protocol.h>

@class NSMutableDictionary, NSXPCConnection;
@protocol OS_dispatch_queue, XCTAXClient, XCTUIApplicationMonitor, XCTestManager_ManagerInterface;

@interface XCTRunnerDaemonSession : NSObject <XCTestManager_TestsInterface>
{
    NSObject<OS_dispatch_queue> *_queue;
    id <XCTUIApplicationMonitor> _applicationMonitor;
    id <XCTAXClient> _accessibilityClient;
    NSXPCConnection *_connection;
    unsigned long long _daemonProtocolVersion;
    NSMutableDictionary *_invalidationHandlers;
}

+ (_Bool)isSupported;
+ (id)sharedSession;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property id <XCTAXClient> accessibilityClient; // @synthesize accessibilityClient=_accessibilityClient;
@property id <XCTUIApplicationMonitor> applicationMonitor; // @synthesize applicationMonitor=_applicationMonitor;
@property(retain) NSMutableDictionary *invalidationHandlers; // @synthesize invalidationHandlers=_invalidationHandlers;
@property(retain) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)requestBundleIDForPID:(int)arg1 reply:(CDUnknownBlockType)arg2;
- (void)injectVoiceRecognitionAudioInputPaths:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)injectAssistantRecognitionStrings:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startSiriUIRequestWithAudioFileURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startSiriUIRequestWithText:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)enableFauxCollectionViewCells:(CDUnknownBlockType)arg1;
- (void)loadAccessibilityWithTimeout:(double)arg1 reply:(CDUnknownBlockType)arg2;
- (void)setAXTimeout:(double)arg1 reply:(CDUnknownBlockType)arg2;
- (void)requestScreenshotWithReply:(CDUnknownBlockType)arg1;
- (void)sendString:(id)arg1 maximumFrequency:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateDeviceOrientation:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)performDeviceEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)synthesizeEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestElementAtPoint:(struct CGPoint)arg1 reply:(CDUnknownBlockType)arg2;
- (void)fetchParameterizedAttributeForElement:(id)arg1 attribute:(id)arg2 parameter:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)setAttribute:(id)arg1 value:(id)arg2 element:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)fetchAttributesForElement:(id)arg1 attributes:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestSnapshotForElement:(id)arg1 attributes:(id)arg2 parameters:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)snapshotForElement:(id)arg1 attributes:(id)arg2 parameters:(id)arg3 reply:(CDUnknownBlockType)arg4;
@property(readonly) _Bool useLegacySnapshotPath;
- (void)terminateApplicationWithBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)performAccessibilityAction:(int)arg1 onElement:(id)arg2 value:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)unregisterForAccessibilityNotification:(int)arg1 registrationToken:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)registerForAccessibilityNotification:(int)arg1 reply:(CDUnknownBlockType)arg2;
- (void)launchApplicationWithBundleID:(id)arg1 arguments:(id)arg2 environment:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)startMonitoringApplicationWithBundleID:(id)arg1;
- (void)requestBackgroundAssertionForPID:(int)arg1 reply:(CDUnknownBlockType)arg2;
- (void)requestScreenshotOfScreenWithID:(unsigned int)arg1 withRect:(struct CGRect)arg2 formatUTI:(id)arg3 compressionQuality:(double)arg4 imageFormatRespected:(_Bool *)arg5 withReply:(CDUnknownBlockType)arg6;
- (void)requestAutomationSessionForTestTargetWithPID:(int)arg1 reply:(CDUnknownBlockType)arg2;
- (void)requestIDEConnectionTransportForSessionIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)_XCT_receivedAccessibilityNotification:(int)arg1 withPayload:(id)arg2;
- (void)_XCT_applicationWithBundleID:(id)arg1 didUpdatePID:(int)arg2 andState:(unsigned long long)arg3;
@property(readonly) _Bool useLegacyScreenshotPath;
@property(readonly) _Bool useLegacyEventCoordinateTransformationPath;
@property unsigned long long daemonProtocolVersion;
@property(readonly) id <XCTestManager_ManagerInterface> daemonProxy;
- (void)unregisterInvalidationHandlerWithToken:(id)arg1;
- (id)registerInvalidationHandler:(CDUnknownBlockType)arg1;
- (void)_reportInvalidation;
- (id)initWithConnection:(id)arg1;
- (void)dealloc;

@end
