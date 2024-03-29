//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDCameraAudioParameterSelection, HMDCameraVideoParameterSelection;

__attribute__((visibility("hidden")))
@interface HMDCameraMediaParameterSelection
{
    HMDCameraAudioParameterSelection *_audioParameterSelection;
    HMDCameraVideoParameterSelection *_videoParameterSelection;
}

- (void).cxx_destruct;
@property(retain, nonatomic) HMDCameraVideoParameterSelection *videoParameterSelection; // @synthesize videoParameterSelection=_videoParameterSelection;
@property(retain, nonatomic) HMDCameraAudioParameterSelection *audioParameterSelection; // @synthesize audioParameterSelection=_audioParameterSelection;
- (void)setReselectedConfigParameters:(id)arg1 videoTier:(id)arg2;
- (void)setSelectedConfigParameters:(id)arg1;
- (void)setSelectedEndPointSetupParameters:(id)arg1 videoNetworkConfig:(id)arg2 audioNetworkConfig:(id)arg3;
- (_Bool)findBestMatchWithProtocolParameters:(id)arg1 streamingCapabilities:(id)arg2 videoTierParameters:(id)arg3;

@end

