//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaPlaybackCore/MFExternalPlaybackController-Protocol.h>
#import <MediaPlaybackCore/MPAVRoutingControllerDelegate-Protocol.h>
#import <MediaPlaybackCore/MPCExternalPlaybackRouter-Protocol.h>

@class MPAVRoutingController, MPCMediaFoundationTranslator, MPCPlaybackEngine, NSString;

@interface MPCExternalPlaybackControllerImplementation : NSObject <MPAVRoutingControllerDelegate, MFExternalPlaybackController, MPCExternalPlaybackRouter>
{
    MPAVRoutingController *_routingController;
    MPCPlaybackEngine *_playbackEngine;
    MPCMediaFoundationTranslator *_translator;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) MPCMediaFoundationTranslator *translator; // @synthesize translator=_translator;
@property(readonly, nonatomic) __weak MPCPlaybackEngine *playbackEngine; // @synthesize playbackEngine=_playbackEngine;
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
