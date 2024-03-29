//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <XCUIAutomation/NSObject-Protocol.h>
#import <XCUIAutomation/XCUIApplicationPlatformServicesProviderDelegate-Protocol.h>
#import <XCUIAutomation/XCUIApplicationProcessTracker-Protocol.h>

@class NSNumber, NSSet, NSString, XCUIApplicationImpl, XCUIApplicationProcess, XCUIApplicationRegistry;
@protocol XCUIPlatformApplicationServicesProviding;

@protocol XCUIApplicationMonitor <NSObject, XCUIApplicationProcessTracker, XCUIApplicationPlatformServicesProviderDelegate>
@property(readonly) NSSet *unsupportedBundleIdentifiersForAutomationSessions;
@property(retain) XCUIApplicationRegistry *applicationRegistry;
@property(readonly) _Bool providesClientStateUpdates;
- (void)acquireBackgroundAssertionForPID:(int)arg1 reply:(void (^)(_Bool))arg2;
- (void)waitForUnrequestedTerminationOfLaunchedApplicationsWithTimeout:(double)arg1;
- (void)terminationTrackedForApplicationProcess:(XCUIApplicationProcess *)arg1;
- (void)launchRequestedForApplicationProcess:(XCUIApplicationProcess *)arg1;
- (void)terminateApplicationProcess:(XCUIApplicationProcess *)arg1 withToken:(id)arg2;
- (XCUIApplicationImpl *)applicationImplementationForApplicationAtPath:(NSString *)arg1 bundleID:(NSString *)arg2;
- (void)processWithToken:(NSNumber *)arg1 exitedWithStatus:(int)arg2;
- (void)stopTrackingProcessWithToken:(NSNumber *)arg1;
- (void)crashInProcessWithBundleID:(NSString *)arg1 path:(NSString *)arg2 pid:(int)arg3 symbol:(NSString *)arg4;
- (void)resetTrackedAppStates;
- (void)replacePlatformServicesProvider:(id <XCUIPlatformApplicationServicesProviding>)arg1;
@end

