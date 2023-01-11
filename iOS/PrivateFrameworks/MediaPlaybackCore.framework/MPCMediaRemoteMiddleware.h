//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaPlaybackCore/MPCPlayerResponseBuilder-Protocol.h>
#import <MediaPlaybackCore/MPCPlayerSessionResponseBuilder-Protocol.h>
#import <MediaPlaybackCore/MPCResponseMediaRemoteControllerChaining-Protocol.h>
#import <MediaPlaybackCore/MPMiddleware-Protocol.h>
#import <MediaPlaybackCore/_MPCStateDumpPropertyListTransformable-Protocol.h>

@class MPCFuture, MPCMediaRemoteController, MPSectionedCollection, NSArray, NSIndexPath, NSString;
@protocol MPCSupportedCommands;

@interface MPCMediaRemoteMiddleware : NSObject <MPCResponseMediaRemoteControllerChaining, MPCPlayerResponseBuilder, MPCPlayerSessionResponseBuilder, _MPCStateDumpPropertyListTransformable, MPMiddleware>
{
    _Bool _skippedMetadata;
    NSArray *_invalidationObservers;
    MPCFuture *_controllerFuture;
    MPCMediaRemoteController *_controller;
    MPSectionedCollection *_queueContentItems;
    MPSectionedCollection *_queueModelObjects;
    id <MPCSupportedCommands> _supportedCommands;
    NSIndexPath *_playingIndexPath;
    NSString *_queueIdentifier;
    long long _playerState;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool skippedMetadata; // @synthesize skippedMetadata=_skippedMetadata;
@property(nonatomic) long long playerState; // @synthesize playerState=_playerState;
@property(copy, nonatomic) NSString *queueIdentifier; // @synthesize queueIdentifier=_queueIdentifier;
@property(copy, nonatomic) NSIndexPath *playingIndexPath; // @synthesize playingIndexPath=_playingIndexPath;
@property(retain, nonatomic) id <MPCSupportedCommands> supportedCommands; // @synthesize supportedCommands=_supportedCommands;
@property(retain, nonatomic) MPSectionedCollection *queueModelObjects; // @synthesize queueModelObjects=_queueModelObjects;
@property(retain, nonatomic) MPSectionedCollection *queueContentItems; // @synthesize queueContentItems=_queueContentItems;
@property(retain, nonatomic) MPCMediaRemoteController *controller; // @synthesize controller=_controller;
@property(retain, nonatomic) MPCFuture *controllerFuture; // @synthesize controllerFuture=_controllerFuture;
@property(retain, nonatomic) NSArray *invalidationObservers; // @synthesize invalidationObservers=_invalidationObservers;
- (id)_stateDumpObject;
- (id)operationsForSessionRequest:(id)arg1;
- (id)operationsForPlayerRequest:(id)arg1;
- (id)operationsForRequest:(id)arg1;
- (id)init;
- (id)controller:(id)arg1 chain:(id)arg2;
- (float)_playbackRateForContentItem:(id)arg1;
- (id)_supportedCommands:(unsigned int)arg1 infoValueForKey:(id)arg2;
- (_Bool)sectionIsAutoPlaySection:(_Bool)arg1 atIndex:(long long)arg2 chain:(id)arg3;
- (id)tracklistUniqueIdentifier:(id)arg1 chain:(id)arg2;
- (id)playerCommandOptionValue:(id)arg1 forKey:(id)arg2 command:(unsigned int)arg3 chain:(id)arg4;
- (_Bool)playerCommandEnabled:(_Bool)arg1 command:(unsigned int)arg2 chain:(id)arg3;
- (_Bool)playerCommandSupported:(_Bool)arg1 command:(unsigned int)arg2 chain:(id)arg3;
- (id)playerItemCurrentLanguageOptions:(id)arg1 atIndexPath:(id)arg2 chain:(id)arg3;
- (id)playerItemLanguageOptionGroups:(id)arg1 atIndexPath:(id)arg2 chain:(id)arg3;
- (long long)playerGlobalItemCount:(long long)arg1 chain:(id)arg2;
- (long long)playerPlayingItemGlobalIndex:(long long)arg1 chain:(id)arg2;
- (id)playerPlayingItemIndexPath:(id)arg1 chain:(id)arg2;
- (id)playerModelObject:(id)arg1 propertySet:(id)arg2 atIndexPath:(id)arg3 chain:(id)arg4;
- (_Bool)playerItemIsPlaceholder:(_Bool)arg1 atIndexPath:(id)arg2 chain:(id)arg3;
- (long long)playerItemEditingStyleFlags:(long long)arg1 atIndexPath:(id)arg2 chain:(id)arg3;
- (id)playerItemExplicitBadge:(id)arg1 atIndexPath:(id)arg2 chain:(id)arg3;
- (id)playerItemLocalizedDurationString:(id)arg1 atIndexPath:(id)arg2 chain:(id)arg3;
- (CDStruct_fce57115)playerItemDuration:(CDStruct_fce57115)arg1 atIndexPath:(id)arg2 chain:(id)arg3;
- (unsigned long long)playerNumberOfItems:(unsigned long long)arg1 inSection:(unsigned long long)arg2 chain:(id)arg3;
- (unsigned long long)playerNumberOfSections:(unsigned long long)arg1 chain:(id)arg2;
- (long long)playerUpNextItemCount:(long long)arg1 chain:(id)arg2;
- (long long)playerLastChangeDirection:(long long)arg1 chain:(id)arg2;
- (long long)playerQueueEndAction:(long long)arg1 chain:(id)arg2;
- (long long)playerShuffleType:(long long)arg1 chain:(id)arg2;
- (long long)playerRepeatType:(long long)arg1 chain:(id)arg2;
- (long long)playerState:(long long)arg1 chain:(id)arg2;
- (id)sessionMetadataObject:(id)arg1 atIndexPath:(id)arg2 chain:(id)arg3;
- (id)sessionPlayerPath:(id)arg1 atIndex:(long long)arg2 chain:(id)arg3;
- (long long)sessionNumberOfSessions:(long long)arg1 forPlayerPathAtIndex:(long long)arg2 chain:(id)arg3;
- (long long)sessionNumberOfPlayerPaths:(long long)arg1 chain:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
