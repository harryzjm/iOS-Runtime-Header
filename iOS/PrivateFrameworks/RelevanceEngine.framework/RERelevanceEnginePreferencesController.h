//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/RERelevanceEnginePreferencesDelegate-Protocol.h>

@class NSMapTable, NSString, RERelevanceEnginePreferences;
@protocol OS_dispatch_queue;

@interface RERelevanceEnginePreferencesController : NSObject <RERelevanceEnginePreferencesDelegate>
{
    NSMapTable *_preferences;
    RERelevanceEnginePreferences *_effectivePreferences;
    NSObject<OS_dispatch_queue> *_queue;
    struct os_unfair_lock_s _lock;
}

- (void).cxx_destruct;
- (void)relevanceEnginePreferencesDidUpdate:(id)arg1;
- (void)_resetEffectivePreferences;
- (void)removePreferencesForObject:(id)arg1;
- (void)setPreferences:(id)arg1 forObject:(id)arg2;
@property(readonly, nonatomic) RERelevanceEnginePreferences *effectivePreferences;
- (id)initWithQueue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
