//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSString;

@interface AFServiceMediaPlaybackStateSnapshot
{
    long long _playbackState;
    NSDate *_nowPlayingTimestamp;
    NSString *_mediaType;
    NSString *_groupIdentifier;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
@property(readonly, copy, nonatomic) NSString *mediaType; // @synthesize mediaType=_mediaType;
@property(readonly, copy, nonatomic) NSDate *nowPlayingTimestamp; // @synthesize nowPlayingTimestamp=_nowPlayingTimestamp;
@property(readonly, nonatomic) long long playbackState; // @synthesize playbackState=_playbackState;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithDeliveryDate:(id)arg1 playbackState:(long long)arg2 nowPlayingTimestamp:(id)arg3 mediaType:(id)arg4 groupIdentifier:(id)arg5;

@end
