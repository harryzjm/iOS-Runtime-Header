//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ChronoServices/NSObject-Protocol.h>

@class BSAction, CHSArrayBox, CHSRemoteDevicesBox, CHSTimelineReloadRequest, CHSURLSessionToken, CHSWidget, CHSWidgetConfiguration, CHSWidgetMetrics, NSData, NSDictionary, NSNumber, NSString;

@protocol CHSChronoWidgetServiceServerInterface <NSObject>
- (NSData *)widgetEnvironmentDataForBundleIdentifier:(NSString *)arg1;
- (CHSURLSessionToken *)_URLSessionDidCompleteForExtensionWithBundleIdentifier:(NSString *)arg1 info:(NSDictionary *)arg2;
- (oneway void)flushPowerlog;

@optional
- (BSAction *)acquireKeepAliveAssertionForExtensionBundleIdentifier:(NSString *)arg1 reason:(NSString *)arg2 error:(out id *)arg3;
- (_Bool)remoteWidgetsEnabled;
- (_Bool)toggleRemoteWidgetsEnabled:(NSNumber *)arg1 error:(id *)arg2;
- (_Bool)unpairDeviceWith:(NSString *)arg1 error:(id *)arg2;
- (oneway void)pairDeviceWith:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (CHSRemoteDevicesBox *)allPairedDevices;
- (void)subscribeToRelevanceEntries:(void (^)(CHSRelevanceEntryBox *, BSAction *, NSError *))arg1;
- (void)subscribeToRemoteDevices:(void (^)(CHSRemoteDevicesBox *, BSAction *, NSError *))arg1;
- (void)subscribeToExtensions:(void (^)(CHSWidgetExtensionsBox *, BSAction *, NSError *))arg1;
- (oneway void)suggestionBudgetsForStackIdentifiers:(CHSArrayBox *)arg1 completion:(void (^)(CHSDictionaryBox *, NSError *))arg2;
- (oneway void)loadSuggestedWidget:(CHSWidget *)arg1 metrics:(CHSWidgetMetrics *)arg2 stackIdentifier:(NSString *)arg3 reason:(NSString *)arg4 completion:(void (^)(BSAction *, NSArray<__ATXInfoTimelineEntry__> *, NSError *))arg5;
- (oneway void)getAppIntentsXPCListenerEndpointForBundleIdentifier:(NSString *)arg1 completion:(void (^)(NSXPCListenerEndpoint *, NSData *, NSError *))arg2;
- (void)reloadTimeline:(CHSTimelineReloadRequest *)arg1 error:(id *)arg2;
- (oneway void)allWidgetConfigurationsByHostWithCompletion:(void (^)(CHSWidgetConfigurationHostsBox *, NSError *))arg1;
- (oneway void)setActivationState:(NSNumber *)arg1 forWidgetHostWithIdentifier:(NSString *)arg2;
- (oneway void)setWidgetConfiguration:(CHSWidgetConfiguration *)arg1 activationState:(NSNumber *)arg2 forWidgetHostWithIdentifier:(NSString *)arg3;
- (oneway void)removeWidgetHostWithIdentifier:(NSString *)arg1;
- (oneway void)cacheDescriptorsForContainerBundleIdentifier:(NSString *)arg1 completion:(void (^)(CHSWidgetDescriptorsBox *, NSError *))arg2;
- (oneway void)performDescriptorDiscoveryForHost:(NSString *)arg1;
@end

