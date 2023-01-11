//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface MPCAssistantRadioPlaybackQueue
{
    NSString *_stationStringID;
}

+ (id)radioQueueWithContextID:(id)arg1 stationStringID:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *stationStringID; // @synthesize stationStringID=_stationStringID;
- (struct _MRSystemAppPlaybackQueue *)createRemotePlaybackQueue;
- (_Bool)supportedOnCurrentPlatform;
- (id)description;
- (id)initWithContextID:(id)arg1 stationStringID:(id)arg2;

@end
