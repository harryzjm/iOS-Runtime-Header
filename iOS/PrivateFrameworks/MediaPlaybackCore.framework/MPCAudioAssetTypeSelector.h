//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICEnvironmentMonitor, MPPlaybackUserDefaults, MSVABTestGenerator;

@interface MPCAudioAssetTypeSelector : NSObject
{
    MPPlaybackUserDefaults *_defaults;
    ICEnvironmentMonitor *_environmentMonitor;
    MSVABTestGenerator *_outcomeGenerator;
}

+ (id)sharedSelector;
- (void).cxx_destruct;
@property(readonly, nonatomic) MSVABTestGenerator *outcomeGenerator; // @synthesize outcomeGenerator=_outcomeGenerator;
@property(retain, nonatomic) ICEnvironmentMonitor *environmentMonitor; // @synthesize environmentMonitor=_environmentMonitor;
@property(retain, nonatomic) MPPlaybackUserDefaults *defaults; // @synthesize defaults=_defaults;
- (long long)tierMatchingAudioAssetType:(long long)arg1;
- (id)environmentDescription;
- (id)preferencesDescription;
- (id)descriptionForTiers:(unsigned long long)arg1;
- (id)descriptionForTraits:(unsigned long long)arg1;
@property(readonly, nonatomic) _Bool networkBandwidthIsHigh;
@property(readonly, nonatomic) _Bool prefersLowQualityStereo;
@property(readonly, nonatomic) _Bool prefersHighQualityStereo;
@property(readonly, nonatomic) _Bool prefersLossless;
@property(readonly, nonatomic) _Bool prefersHighResolutionLossless;
@property(readonly, nonatomic) _Bool prefersSpatialOverLossless;
- (_Bool)prefersSpatialOverStereo:(id)arg1;
@property(readonly, nonatomic) _Bool spatialIsOff;
@property(readonly, nonatomic) _Bool spatialIsAlwaysOn;
@property(readonly, nonatomic) _Bool spatialIsAutomatic;
- (id)description;
- (id)audioFormatMatchingAudioAssetType:(long long)arg1 formats:(id)arg2 route:(id)arg3;
- (id)preferredPlayerAudioFormatForItem:(id)arg1 route:(id)arg2;
- (id)preferredAudioFormatForAudioFormats:(id)arg1 route:(id)arg2;
- (long long)preferredAudioAssetTypeForSongWithTrait:(unsigned long long)arg1;
- (long long)preferredAudioAssetTypeForItem:(id)arg1;
- (unsigned long long)audioFormatPreference;
- (_Bool)userPrefersMultichannelAudioOverStereo:(id)arg1;
- (void)updateProbabilityOfProgressiveDownloadAssets:(float)arg1;
- (id)initWithPlaybackUsersDefaults:(id)arg1 environmentMonitor:(id)arg2 probabilityOfProgressiveDownloadAssets:(float)arg3;
- (id)init;

@end
