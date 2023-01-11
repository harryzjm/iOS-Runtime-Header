//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <XCTAutomationSupport/XCTAutomationTarget-Protocol.h>
#import <XCTAutomationSupport/XCTConnectionAccepting-Protocol.h>
#import <XCTAutomationSupport/XCTElementSnapshotAttributeDataSource-Protocol.h>
#import <XCTAutomationSupport/XCTElementSnapshotProvider-Protocol.h>
#import <XCTAutomationSupport/XCTMacCatalystStatusProviding-Protocol.h>
#import <XCTAutomationSupport/XCTRemoteApplicationAutomationTarget-Protocol.h>

@class DTXConnection, DTXProxyChannel, NSMutableArray, NSString, XCTAnimationsIdleNotifier, XCTCapabilities, XCTElementQueryProcessor, XCTMainRunLoopIdleNotifier;
@protocol OS_dispatch_queue, XCTAccessibilityFramework, XCTElementSnapshotProvider><XCTElementSnapshotAttributeDataSource;

@interface XCTAutomationSession : NSObject <XCTRemoteApplicationAutomationTarget, XCTElementSnapshotProvider, XCTElementSnapshotAttributeDataSource, XCTMacCatalystStatusProviding, XCTConnectionAccepting, XCTAutomationTarget>
{
    id <XCTAccessibilityFramework> _accessibilityFramework;
    id <XCTElementSnapshotProvider><XCTElementSnapshotAttributeDataSource> _dataSource;
    NSMutableArray *_connections;
    XCTElementQueryProcessor *_queryProcessor;
    NSObject<OS_dispatch_queue> *_queue;
    XCTMainRunLoopIdleNotifier *_runLoopIdleMonitor;
    XCTAnimationsIdleNotifier *_animationIdleNotifier;
    DTXConnection *_dtxConnection;
    DTXProxyChannel *_proxyChannel;
    XCTCapabilities *_remoteInterfaceCapabilities;
}

+ (id)capabilitiesBuilder;
- (void).cxx_destruct;
@property(retain) XCTCapabilities *remoteInterfaceCapabilities; // @synthesize remoteInterfaceCapabilities=_remoteInterfaceCapabilities;
@property(readonly) DTXProxyChannel *proxyChannel; // @synthesize proxyChannel=_proxyChannel;
@property(readonly) DTXConnection *dtxConnection; // @synthesize dtxConnection=_dtxConnection;
@property(readonly) XCTAnimationsIdleNotifier *animationIdleNotifier; // @synthesize animationIdleNotifier=_animationIdleNotifier;
@property(readonly) XCTMainRunLoopIdleNotifier *runLoopIdleMonitor; // @synthesize runLoopIdleMonitor=_runLoopIdleMonitor;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly) XCTElementQueryProcessor *queryProcessor; // @synthesize queryProcessor=_queryProcessor;
@property(readonly) NSMutableArray *connections; // @synthesize connections=_connections;
@property(readonly) __weak id <XCTElementSnapshotProvider><XCTElementSnapshotAttributeDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly) id <XCTAccessibilityFramework> accessibilityFramework; // @synthesize accessibilityFramework=_accessibilityFramework;
- (_Bool)isMacCatalystForPID:(int)arg1;
@property(readonly) _Bool hasBannerNotificationIsStickyAttribute;
@property(readonly) _Bool usePointTransformationsForFrameConversions;
@property(readonly) _Bool supportsHostedViewCoordinateTransformations;
- (id)parameterizedAttribute:(id)arg1 forElement:(id)arg2 parameter:(id)arg3 error:(id *)arg4;
- (id)attributesForElement:(id)arg1 attributes:(id)arg2 error:(id *)arg3;
@property(readonly) _Bool allowsRemoteAccess;
- (id)snapshotForElement:(id)arg1 attributes:(id)arg2 parameters:(id)arg3 timeoutControls:(id)arg4 error:(id *)arg5;
- (id)_XCT_notifyWhenAnimationsAreIdle;
- (id)_XCT_notifyWhenMainRunLoopIsIdle;
- (id)_XCT_attributesForElement:(id)arg1 attributes:(id)arg2;
- (id)_XCT_fetchMatchesForQuery:(id)arg1;
- (id)_XCT_exchangeCapabilities:(id)arg1;
- (void)listenForRemoteConnectionViaSerializedTransportWrapper:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)notifyWhenAnimationsAreIdle:(CDUnknownBlockType)arg1;
- (void)notifyWhenMainRunLoopIsIdle:(CDUnknownBlockType)arg1;
- (id)valuesForPrivilegedAttributes:(id)arg1 forElement:(id)arg2 error:(id *)arg3;
@property(readonly) _Bool providesValuesForPrivilegedAttributes;
- (void)attributesForElement:(id)arg1 attributes:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)fetchMatchesForQuery:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)exchangeCapabilities:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)requestHostAppExecutableNameWithReply:(CDUnknownBlockType)arg1;
- (_Bool)acceptNewConnection:(id)arg1;
- (id)init;
- (id)initWithAccessibilityFramework:(id)arg1;
- (id)initWithAccessibilityFramework:(id)arg1 dataSource:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
