//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PGSocialGroupOverTimeMemoryGenerator
{
    unsigned long long _numberOfInsufficientlyFacedRejects;
    unsigned long long _numberOfBuildFailureRejects;
    long long _socialGroupID;
}

@property(nonatomic) long long socialGroupID; // @synthesize socialGroupID=_socialGroupID;
- (id)_potentialMemoriesForDryTesting;
- (void)_generateExtendedCuratedSetForMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (void)_enumeratePotentialMemoriesUsingBlock:(CDUnknownBlockType)arg1;
- (id)_computeOverTheTimeFacedAssetsForPersonUUIDs:(id)arg1 inFacedAssets:(id)arg2;

@end
