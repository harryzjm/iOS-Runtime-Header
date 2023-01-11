//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString;

@interface MPCAssistantCustomDataPlaybackQueue
{
    NSString *_identifier;
    NSData *_customData;
}

+ (id)customDataQueueWithContextID:(id)arg1 identifier:(id)arg2 customData:(id)arg3;
@property(readonly, nonatomic) NSData *customData; // @synthesize customData=_customData;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (struct _MRSystemAppPlaybackQueue *)createRemotePlaybackQueue;
- (id)description;
- (id)initWithContextID:(id)arg1 identifier:(id)arg2 customData:(id)arg3;

@end
