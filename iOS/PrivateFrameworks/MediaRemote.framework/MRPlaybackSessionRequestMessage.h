//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _MRNowPlayingPlayerPathProtobuf, _MRPlaybackSessionRequestProtobuf;

@interface MRPlaybackSessionRequestMessage
{
}

- (unsigned long long)type;
@property(readonly, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath;
@property(readonly, nonatomic) _MRPlaybackSessionRequestProtobuf *request;
- (id)initWithRequest:(struct _MRPlaybackSessionRequestProtobuf *)arg1 forPlayerPath:(struct _MRNowPlayingPlayerPathProtobuf *)arg2;

@end
