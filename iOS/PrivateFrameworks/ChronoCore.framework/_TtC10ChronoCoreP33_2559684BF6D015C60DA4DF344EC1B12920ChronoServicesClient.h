//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC10ChronoCoreP33_2559684BF6D015C60DA4DF344EC1B12920ChronoServicesClient : NSObject
{
    MISSING_TYPE *_server;
    MISSING_TYPE *connection;
    MISSING_TYPE *timelineService;
    MISSING_TYPE *taskService;
    MISSING_TYPE *descriptorService;
    MISSING_TYPE *deviceService;
    MISSING_TYPE *extensionService;
    MISSING_TYPE *hostService;
    MISSING_TYPE *keybagStateProvider;
    MISSING_TYPE *powerlogSuggestionService;
    MISSING_TYPE *duetService;
    MISSING_TYPE *keepAliveAssertionProvider;
    MISSING_TYPE *queue;
    MISSING_TYPE *widgetHostIdentities;
    MISSING_TYPE *tasks;
    MISSING_TYPE *widgetFetchSubscriptions;
    MISSING_TYPE *widgetTimelineLoadSubscriptions;
    MISSING_TYPE *widgetTimelineLoadActionResponders;
    MISSING_TYPE *subscriptions;
    MISSING_TYPE *serviceAssertionIDs;
    MISSING_TYPE *serviceAssertions;
}

- (void).cxx_destruct;
- (id)init;
- (id)acquireKeepAliveAssertionForExtensionBundleIdentifier:(id)arg1 reason:(id)arg2 error:(id *)arg3;
- (void)subscribeToRelevanceEntries:(CDUnknownBlockType)arg1;
- (void)subscribeToRemoteDevices:(CDUnknownBlockType)arg1;
- (_Bool)remoteWidgetsEnabled;
- (_Bool)toggleRemoteWidgetsEnabled:(id)arg1 error:(id *)arg2;
- (_Bool)unpairDeviceWith:(id)arg1 error:(id *)arg2;
- (void)pairDeviceWith:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)allPairedDevices;
- (id)_URLSessionDidCompleteForExtensionWithBundleIdentifier:(id)arg1 info:(id)arg2;
- (void)subscribeToExtensions:(CDUnknownBlockType)arg1;
- (void)loadSuggestedWidget:(id)arg1 metrics:(id)arg2 stackIdentifier:(id)arg3 reason:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)suggestionBudgetsForStackIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getAppIntentsXPCListenerEndpointForBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)allWidgetConfigurationsByHostWithCompletion:(CDUnknownBlockType)arg1;
- (void)setActivationState:(id)arg1 forWidgetHostWithIdentifier:(id)arg2;
- (void)setWidgetConfiguration:(id)arg1 activationState:(id)arg2 forWidgetHostWithIdentifier:(id)arg3;
- (void)removeWidgetHostWithIdentifier:(id)arg1;
- (id)widgetEnvironmentDataForBundleIdentifier:(id)arg1;
- (void)reloadTimeline:(id)arg1 error:(id *)arg2;
- (void)cacheDescriptorsForContainerBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)performDescriptorDiscoveryForHost:(id)arg1;
- (void)flushPowerlog;

@end

