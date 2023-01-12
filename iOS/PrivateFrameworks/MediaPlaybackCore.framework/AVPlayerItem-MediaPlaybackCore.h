//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVFoundation/AVPlayerItem.h>

@interface AVPlayerItem (MediaPlaybackCore)
- (id)mpc_setupDescription;
- (void)mpc_updatePreferredForwardBufferDurationForPlayerAudioFormat:(id)arg1;
- (void)mpc_updatePrefersOfflinePlayableVariantForPlayerAudioFormat:(id)arg1 isDownloadedAsset:(_Bool)arg2;
- (void)mpc_updatePreferredMaximumAudioSampleRateForPlayerAudioFormat:(id)arg1;
- (void)mpc_updateAVAudioSpatializationFormatsForPlayerAudioFormat:(id)arg1;
- (void)mpc_updateAVVariantPreferenceForPlayerAudioFormat:(id)arg1 forceSpatial:(_Bool)arg2;
- (void)mpc_updatePreferredForwardBufferDurationForAudioAssetType:(long long)arg1;
- (void)mpc_updatePreferredMaximumAudioSampleRateForAudioAssetType:(long long)arg1;
- (void)mpc_updateAVAudioSpatializationFormatsForAudioAssetType:(long long)arg1;
- (void)mpc_updateAVVariantPreferenceForAudioAssetType:(long long)arg1 forceSpatial:(_Bool)arg2;
- (void)mpc_setupWithPlayerAudioFormat:(id)arg1 forceSpatial:(_Bool)arg2 downloadedAsset:(_Bool)arg3;
- (void)mpc_setupWithAudioAssetType:(long long)arg1 forceSpatial:(_Bool)arg2;
@end
