//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Intents/LSApplicationWorkspaceObserverProtocol-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface INIntentSummaryCache : NSObject <LSApplicationWorkspaceObserverProtocol>
{
    int _systemLanguageChangeNotificationToken;
    NSObject<OS_dispatch_queue> *_resourceAccessQueue;
    struct NSMutableDictionary *_allBundlesCache;
}

+ (id)sharedCache;
@property(readonly, nonatomic) int systemLanguageChangeNotificationToken; // @synthesize systemLanguageChangeNotificationToken=_systemLanguageChangeNotificationToken;
@property(readonly, nonatomic) NSMutableDictionary *allBundlesCache; // @synthesize allBundlesCache=_allBundlesCache;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *resourceAccessQueue; // @synthesize resourceAccessQueue=_resourceAccessQueue;
- (void).cxx_destruct;
- (void)applicationsDidInstall:(id)arg1;
- (void)invalidateCacheForBundleId:(id)arg1;
- (void)invalidateCache;
- (void)stopObservingSystemLanguageChanges;
- (void)startObservingSystemLanguageChanges;
- (void)stopObservingApplicationWorkspaceChanges;
- (void)startObservingApplicationWorkspaceChanges;
- (void)stopAutomaticInvalidation;
- (void)startAutomaticInvalidation;
- (void)setSubtitle:(id)arg1 forIntent:(id)arg2 languageCode:(id)arg3;
- (void)setTitle:(id)arg1 forIntent:(id)arg2 languageCode:(id)arg3;
- (_Bool)getSubtitle:(id *)arg1 forIntent:(id)arg2 languageCode:(id)arg3;
- (_Bool)getTitle:(id *)arg1 forIntent:(id)arg2 languageCode:(id)arg3;
- (id)cachedSummaryForIntent:(id)arg1 languageCode:(id)arg2 creatingIfNeeded:(_Bool)arg3;
- (void)setBundleCache:(struct NSCache *)arg1 forBundleId:(id)arg2;
- (struct NSCache *)bundleCacheForBundleId:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

