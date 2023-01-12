//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPAVRoutingController, MPCMediaFoundationTranslator, MPCPlaybackEngine, NSString;

__attribute__((visibility("hidden")))
@interface MPCExternalPlaybackControllerImplementation : NSObject
{
    MPAVRoutingController *_routingController;
    MPCPlaybackEngine *_playbackEngine;
    MPCMediaFoundationTranslator *_translator;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) MPCMediaFoundationTranslator *translator; // @synthesize translator=_translator;
@property(readonly, nonatomic) __weak MPCPlaybackEngine *playbackEngine; // @synthesize playbackEngine=_playbackEngine;
- (long long)exernalPlaybackRouteRestrictionForItem:(id)arg1 route:(id)arg2 isScreenMirroringActive:(_Bool)arg3;
- (_Bool)playerShouldUseAudiOnlyMode:(id)arg1 item:(id)arg2 externalScreenType:(long long)arg3;
- (_Bool)isExternalPlaybackAllowedForItem:(id)arg1;
- (void)routingControllerExternalScreenTypeDidChange:(id)arg1;
- (void)pickBestDeviceRoute;
- (void)configureExternalPlaybackForPlayer:(id)arg1 queueItem:(id)arg2;
@property(readonly, nonatomic) MPAVRoutingController *routingController; // @synthesize routingController=_routingController;
- (id)initWithPlaybackEngine:(id)arg1 translator:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

