//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudDocsDaemon/BRCAppListMonitorDelegate-Protocol.h>

@class NSMutableDictionary, NSMutableSet, NSString, br_pacer;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BRCCloudDocsAppsMonitor : NSObject <BRCAppListMonitorDelegate>
{
    NSMutableDictionary *_cloudDocsAppLibrariesByAppID;
    NSMutableDictionary *_appIDsByAppLibraryID;
    NSMutableSet *_observers;
    br_pacer *_refetchPacer;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_fetchInstalledAppsQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    _Bool _hasFetchedInitialApps;
}

+ (id)cloudDocsAppsMonitor;
- (void).cxx_destruct;
- (void)dumpToContext:(id)arg1;
- (id)init;
- (_Bool)isApplicationInstalledForContainerID:(id)arg1;
- (id)allApplicationIdentifiers;
- (id)containerIDsForApplicationIdentifier:(id)arg1;
- (id)applicationIdentifiersForContainerID:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)_start;
- (void)forceRefetchAppList;
- (void)_refetchApps;
- (_Bool)hasFetchedInitialApps;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
