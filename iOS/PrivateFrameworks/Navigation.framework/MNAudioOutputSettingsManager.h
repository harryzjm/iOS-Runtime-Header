//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MNAudioOutputSetting, NSArray, NSHashTable;
@protocol OS_dispatch_queue;

@interface MNAudioOutputSettingsManager : NSObject
{
    NSHashTable *_observers;
    unsigned long long _routeSelection;
    NSArray *_audioSettings;
    NSArray *_pickableRoutes;
    MNAudioOutputSetting *_currentSetting;
    MNAudioOutputSetting *_currentSettingForSystem;
    _Bool _isCurrentSettingCached;
    NSObject<OS_dispatch_queue> *_pickableRoutesQueue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *audioSettings; // @synthesize audioSettings=_audioSettings;
@property(readonly, nonatomic) unsigned long long routeSelection; // @synthesize routeSelection=_routeSelection;
- (void)_pickableRoutesChanged;
- (void)updateRouteSelectionObservers;
- (void)updatedCurrentSettingForVoicePromptObservers;
- (void)updateCurrentSettingObservers;
- (void)updateSettingsObservers;
- (void)updatePickableRoutes;
- (void)updatePickableRoutesWithHandler:(CDUnknownBlockType)arg1;
- (void)reloadSettings;
- (_Bool)_pickCurrentSetting;
- (void)setHFPPreference:(_Bool)arg1 forSetting:(id)arg2;
@property(retain, nonatomic) MNAudioOutputSetting *currentSetting;
@property(readonly, nonatomic) MNAudioOutputSetting *currentSettingForVoicePrompt;
- (void)updateRouteSelection;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)_mediaServerConnectionDied;
- (void)_unregisterForNotifications;
- (void)_registerForNotifications;
- (void)dealloc;
- (id)init;

@end
