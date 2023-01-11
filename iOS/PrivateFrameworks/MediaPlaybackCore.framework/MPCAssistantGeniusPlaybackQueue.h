//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSURL;

@interface MPCAssistantGeniusPlaybackQueue
{
    NSURL *_seedTrack;
}

+ (id)geniusQueueWithContextID:(id)arg1 seedTrack:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *seedTrack; // @synthesize seedTrack=_seedTrack;
- (struct _MRSystemAppPlaybackQueue *)createRemotePlaybackQueue;
- (id)description;
- (id)initWithContextID:(id)arg1 seedTrack:(id)arg2;

@end
