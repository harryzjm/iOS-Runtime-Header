//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPAVRoutingController, MPCMediaFoundationTranslator, MPCModelGenericAVItem, MPCPlaybackEngine, MPCPlayerAudioRoute, MPPlaybackEQSetting, NSString;
@protocol MFPlaybackStackController><MFQueueManagement, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface MPCPlayerItemConfigurator : NSObject
{
    MPCPlayerAudioRoute *_currentAudioRoute;
    MPAVRoutingController *_routingController;
    MPPlaybackEQSetting *_eqSetting;
    MPCMediaFoundationTranslator *_translator;
    id <MFPlaybackStackController><MFQueueManagement> _stackController;
    MPCPlaybackEngine *_playbackEngine;
    NSObject<OS_dispatch_source> *_userDefaultsDebouncer;
    MPCModelGenericAVItem *_currenItem;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak MPCModelGenericAVItem *currenItem; // @synthesize currenItem=_currenItem;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *userDefaultsDebouncer; // @synthesize userDefaultsDebouncer=_userDefaultsDebouncer;
@property(readonly, nonatomic) __weak MPCPlaybackEngine *playbackEngine; // @synthesize playbackEngine=_playbackEngine;
@property(readonly, nonatomic) __weak id <MFPlaybackStackController><MFQueueManagement> stackController; // @synthesize stackController=_stackController;
@property(readonly, nonatomic) __weak MPCMediaFoundationTranslator *translator; // @synthesize translator=_translator;
@property(retain, nonatomic) MPPlaybackEQSetting *eqSetting; // @synthesize eqSetting=_eqSetting;
@property(readonly, nonatomic) MPAVRoutingController *routingController; // @synthesize routingController=_routingController;
- (void)_updatePreferredAudioFormatIfRequiredForItem:(id)arg1 route:(id)arg2;
- (void)_updateQueueItemsAndPlayerForFormatChangeIfRequired;
- (_Bool)_shouldReloadEntireQueue;
- (id)_modeObjectForPlayerItem:(id)arg1;
- (id)queuedItems;
- (id)currentItem;
- (void)updateCurrentAudioRouteWithPickedRoutes:(id)arg1;
@property(readonly, nonatomic) MPCPlayerAudioRoute *currentAudioRoute; // @synthesize currentAudioRoute=_currentAudioRoute;
- (void)routingController:(id)arg1 pickedRoutesDidChange:(id)arg2;
- (id)_audioFormatsDictionaryWithHLSMetadata:(id)arg1;
- (id)_HLSMetadataForAsset:(id)arg1 error:(id *)arg2;
- (id)_audioFormatsDictionaryWithHLSMetadataFromAsset:(id)arg1 metadataWaitTime:(double *)arg2 error:(id *)arg3;
- (void)_emitAudioFormatSelection:(id)arg1 item:(id)arg2;
- (void)_setupQueueItemForLossyAudioPlayback:(id)arg1;
- (_Bool)_setupQueueItemForEnhancedAudioHLSPlayback:(id)arg1 metadataWaitTime:(double *)arg2 error:(id *)arg3;
- (void)_setupPlayer;
- (void)processAudioQualityChanges;
- (void)tearDownDefaultsDebouncer;
- (void)setupDefaultsDebouncer;
- (void)_preferredResolutionDidChange:(id)arg1;
- (void)_playbackUserDefaultsEQPresetDidChangeNotification:(id)arg1;
- (void)_setupNotifications;
- (void)_setupRoutingController;
- (void)updatePlayerConfiguration;
- (_Bool)configureQueuePlayerItem:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)initWithPlaybackEngine:(id)arg1 stackController:(id)arg2 translator:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

