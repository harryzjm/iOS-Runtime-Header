//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDSupportedAudioStreamConfiguration, HMDSupportedRTPConfiguration, HMDSupportedVideoStreamConfiguration;

@interface HMDCameraSupportedConfigurationCache : HMFObject
{
    HMDSupportedVideoStreamConfiguration *_supportedVideoStreamConfiguration;
    HMDSupportedAudioStreamConfiguration *_supportedAudioStreamConfiguration;
    HMDSupportedRTPConfiguration *_supportedRTPConfiguration;
}

@property(retain, nonatomic) HMDSupportedRTPConfiguration *supportedRTPConfiguration; // @synthesize supportedRTPConfiguration=_supportedRTPConfiguration;
@property(retain, nonatomic) HMDSupportedAudioStreamConfiguration *supportedAudioStreamConfiguration; // @synthesize supportedAudioStreamConfiguration=_supportedAudioStreamConfiguration;
@property(retain, nonatomic) HMDSupportedVideoStreamConfiguration *supportedVideoStreamConfiguration; // @synthesize supportedVideoStreamConfiguration=_supportedVideoStreamConfiguration;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isValid) _Bool valid;

@end
