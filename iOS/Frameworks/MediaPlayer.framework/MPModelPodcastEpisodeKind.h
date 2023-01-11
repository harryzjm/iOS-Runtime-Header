//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MPModelPodcastEpisodeKind
{
    unsigned long long _variants;
    unsigned long long _options;
}

+ (_Bool)supportsSecureCoding;
+ (id)kindWithVariants:(unsigned long long)arg1 options:(unsigned long long)arg2;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, nonatomic) unsigned long long variants; // @synthesize variants=_variants;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)humanDescription;
- (shared_ptr_cf7b8a22)predicateWithBaseProperty:(struct ModelPropertyBase *)arg1;

@end

