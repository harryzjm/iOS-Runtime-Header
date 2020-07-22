//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaPlaybackCore/MPPlayableContentDelegate-Protocol.h>

@class MPCMediaPlayerLegacyPlayer, NSString;

@interface MPCPlayableContentDelegate : NSObject <MPPlayableContentDelegate>
{
    MPCMediaPlayerLegacyPlayer *_player;
}

- (void).cxx_destruct;
- (void)playableContentManager:(id)arg1 initializePlaybackQueueWithContentItems:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithPlayer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

