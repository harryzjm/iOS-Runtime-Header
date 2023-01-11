//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;
@protocol FCChannelProviding;

@interface FCDraftFeedDescriptor
{
    id <FCChannelProviding> _channel;
    NSString *_articleListID;
    NSString *_issueListID;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *issueListID; // @synthesize issueListID=_issueListID;
@property(readonly, nonatomic) NSString *articleListID; // @synthesize articleListID=_articleListID;
@property(readonly, nonatomic) id <FCChannelProviding> channel; // @synthesize channel=_channel;
- (id)backingChannel;
- (long long)feedType;
- (id)name;
- (id)allEmitterClasses;
- (id)feedGroupEmittersWithConfiguration:(id)arg1 forYouConfig:(id)arg2;
- (id)initWithChannel:(id)arg1 articleListID:(id)arg2 issueListID:(id)arg3;

@end
