//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, SAMPPodcast;

@interface SAMPPlayPodcastEpisode
{
}

+ (id)playPodcastEpisodeWithDictionary:(id)arg1 context:(id)arg2;
+ (id)playPodcastEpisode;
- (_Bool)mutatingCommand;
- (_Bool)requiresResponse;
@property(retain, nonatomic) SAMPPodcast *podcastEpisode;
@property(copy, nonatomic) NSArray *hashedRouteUIDs;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

