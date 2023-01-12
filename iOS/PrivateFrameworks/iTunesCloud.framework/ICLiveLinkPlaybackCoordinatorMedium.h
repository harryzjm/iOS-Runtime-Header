//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICLiveLink, NSUUID;

__attribute__((visibility("hidden")))
@interface ICLiveLinkPlaybackCoordinatorMedium : NSObject
{
    ICLiveLink *_liveLink;
    NSUUID *_localParticipantUUID;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSUUID *localParticipantUUID; // @synthesize localParticipantUUID=_localParticipantUUID;
@property(readonly, nonatomic) __weak ICLiveLink *liveLink; // @synthesize liveLink=_liveLink;
- (void)_reloadTransportControlStateForItemWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_broadcastTransportControlStateDictionary:(id)arg1 forItemWithIdentifier:(id)arg2;
- (void)_broadcastLocalParticipantStateDictionary:(id)arg1;
- (void)clearCoordinationMediumDelegate;
- (void)synchronizePlaybackStateForReason:(id)arg1;
- (void)handleNewTransportControlStateDictionary:(id)arg1;
- (void)handleNewParticipantStateDictionary:(id)arg1;
- (void)removeParticipant:(id)arg1;
- (void)handlePlaybackSyncPayload:(id)arg1;
- (id)initWithLiveLink:(id)arg1;

@end
