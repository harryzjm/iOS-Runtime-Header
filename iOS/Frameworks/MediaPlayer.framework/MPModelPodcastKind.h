//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPModelPodcastEpisodeKind;

@interface MPModelPodcastKind
{
    MPModelPodcastEpisodeKind *_episodeKind;
}

+ (id)kindWithEpisodeKind:(id)arg1;
@property(readonly, nonatomic) MPModelPodcastEpisodeKind *episodeKind; // @synthesize episodeKind=_episodeKind;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)applyToView:(shared_ptr_5c01893c)arg1 withContext:(id)arg2;

@end
