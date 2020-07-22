//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPMediaItem, MPMediaQuery;

@interface MPLocalMediaQueryRemotePlaybackQueue
{
    MPMediaQuery *_mediaQuery;
    MPMediaItem *_firstItem;
    long long _shuffleType;
    long long _repeatType;
}

@property(readonly, nonatomic) long long repeatType; // @synthesize repeatType=_repeatType;
@property(readonly, nonatomic) long long shuffleType; // @synthesize shuffleType=_shuffleType;
@property(readonly, nonatomic) MPMediaItem *firstItem; // @synthesize firstItem=_firstItem;
@property(readonly, nonatomic) MPMediaQuery *mediaQuery; // @synthesize mediaQuery=_mediaQuery;
- (void).cxx_destruct;
- (id)playbackItemMetadataForMediaItem:(id)arg1;
- (_Bool)verifyWithError:(id *)arg1;
- (id)description;
- (id)initWithMediaRemotePlaybackQueue:(struct _MRSystemAppPlaybackQueue *)arg1;

@end

