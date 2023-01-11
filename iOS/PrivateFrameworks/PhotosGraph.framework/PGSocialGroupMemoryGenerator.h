//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet;

@interface PGSocialGroupMemoryGenerator
{
    long long _socialGroupID;
    long long _year;
    NSSet *_extraFeatures;
}

@property(nonatomic) NSSet *extraFeatures; // @synthesize extraFeatures=_extraFeatures;
@property(nonatomic) long long year; // @synthesize year=_year;
@property(nonatomic) long long socialGroupID; // @synthesize socialGroupID=_socialGroupID;
- (_Bool)canFallbackToDejunkAndDedupeForShowMore;
- (id)_potentialMemoriesForDryTesting;
- (void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (_Bool)semanticalDedupingEnabledForExtendedCuration;
- (unsigned long long)durationForExtendedCuration;
- (unsigned long long)durationForCuration;
- (void)_enumeratePotentialMemoriesUsingBlock:(CDUnknownBlockType)arg1;
- (void)_potentialMemoriesWithSocialGroupNode:(id)arg1 inYear:(long long)arg2 result:(CDUnknownBlockType)arg3;

@end
