//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GroupActivities/AVPlaybackCoordinationMediumDelegate-Protocol.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtCC15GroupActivities14PlaybackSyncer27AVCoordinatorDelegateBridge : NSObject <AVPlaybackCoordinationMediumDelegate>
{
    MISSING_TYPE *localParticipantID;
    MISSING_TYPE *delegate;
}

- (void).cxx_destruct;
- (id)init;
- (void)playbackCoordinator:(id)arg1 reloadTransportControlStateForItemWithIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)playbackCoordinator:(id)arg1 broadcastTransportControlStateDictionary:(id)arg2 forItemWithIdentifier:(id)arg3;
- (void)playbackCoordinator:(id)arg1 broadcastLocalParticipantStateDictionary:(id)arg2;
- (id)localParticipantUUIDForPlaybackCoordinator:(id)arg1;

@end
