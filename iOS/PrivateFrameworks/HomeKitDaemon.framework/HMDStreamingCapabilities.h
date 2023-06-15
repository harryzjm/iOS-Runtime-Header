//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSDictionary, NSSet;

__attribute__((visibility("hidden")))
@interface HMDStreamingCapabilities : HMFObject
{
    _Bool _supportsComfortNoise;
    NSDictionary *_supportedAudioCodecs;
    NSSet *_supportedVideoCodecs;
    NSSet *_supportedVideoResolutions;
    NSSet *_supportedH264Profiles;
    NSSet *_supportedH264Levels;
    NSSet *_supportedPacketizationModes;
    NSSet *_supportedBitRateSettings;
    NSSet *_supportedAudioSampleRates;
    unsigned long long _streamingTierType;
}

+ (unsigned long long)aspectRatioOfResolution:(id)arg1;
+ (_Bool)supportsSecureCoding;
+ (void)translateCapabilities:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool supportsComfortNoise; // @synthesize supportsComfortNoise=_supportsComfortNoise;
@property(nonatomic) unsigned long long streamingTierType; // @synthesize streamingTierType=_streamingTierType;
@property(readonly, nonatomic) NSSet *supportedAudioSampleRates; // @synthesize supportedAudioSampleRates=_supportedAudioSampleRates;
@property(readonly, nonatomic) NSSet *supportedBitRateSettings; // @synthesize supportedBitRateSettings=_supportedBitRateSettings;
@property(readonly, nonatomic) NSSet *supportedPacketizationModes; // @synthesize supportedPacketizationModes=_supportedPacketizationModes;
@property(readonly, nonatomic) NSSet *supportedH264Levels; // @synthesize supportedH264Levels=_supportedH264Levels;
@property(readonly, nonatomic) NSSet *supportedH264Profiles; // @synthesize supportedH264Profiles=_supportedH264Profiles;
@property(readonly, nonatomic) NSSet *supportedVideoResolutions; // @synthesize supportedVideoResolutions=_supportedVideoResolutions;
@property(readonly, nonatomic) NSSet *supportedVideoCodecs; // @synthesize supportedVideoCodecs=_supportedVideoCodecs;
@property(readonly, nonatomic) NSDictionary *supportedAudioCodecs; // @synthesize supportedAudioCodecs=_supportedAudioCodecs;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)updateWithRemoteSettings:(id)arg1;
- (void)_updateWithStreamPreference:(id)arg1;
- (id)_supportedResolutionsWithOverrides;
- (id)initWithStreamPreference:(id)arg1;
- (id)description;

@end

