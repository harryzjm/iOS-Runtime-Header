//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SSVPlaybackLeaseRequest;

@interface MPSubscriptionLeaseAssetRequestOperation
{
    SSVPlaybackLeaseRequest *_playbackLeaseRequest;
    CDUnknownBlockType _responseHandler;
}

@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(copy, nonatomic) SSVPlaybackLeaseRequest *playbackLeaseRequest; // @synthesize playbackLeaseRequest=_playbackLeaseRequest;
- (void).cxx_destruct;
- (void)execute;

@end
