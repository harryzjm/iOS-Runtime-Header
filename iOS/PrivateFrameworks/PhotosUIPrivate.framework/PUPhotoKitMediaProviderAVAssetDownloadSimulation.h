//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVAsset, AVAudioMix, NSDictionary;

__attribute__((visibility("hidden")))
@interface PUPhotoKitMediaProviderAVAssetDownloadSimulation
{
    CDUnknownBlockType _externalProgressHandler;
    CDUnknownBlockType _internalProgressHandler;
    CDUnknownBlockType _externalResultHandler;
    CDUnknownBlockType _internalResultHandler;
    AVAsset *__resultAVAsset;
    AVAudioMix *__resultAudioMix;
    NSDictionary *__resultInfo;
}

- (void).cxx_destruct;
@property(copy, nonatomic, setter=_setResultInfo:) NSDictionary *_resultInfo; // @synthesize _resultInfo=__resultInfo;
@property(retain, nonatomic, setter=_setResultAudioMix:) AVAudioMix *_resultAudioMix; // @synthesize _resultAudioMix=__resultAudioMix;
@property(retain, nonatomic, setter=_setResultAVAsset:) AVAsset *_resultAVAsset; // @synthesize _resultAVAsset=__resultAVAsset;
@property(readonly, copy, nonatomic) CDUnknownBlockType internalResultHandler; // @synthesize internalResultHandler=_internalResultHandler;
@property(copy, nonatomic) CDUnknownBlockType externalResultHandler; // @synthesize externalResultHandler=_externalResultHandler;
@property(readonly, copy, nonatomic) CDUnknownBlockType internalProgressHandler; // @synthesize internalProgressHandler=_internalProgressHandler;
@property(copy, nonatomic) CDUnknownBlockType externalProgressHandler; // @synthesize externalProgressHandler=_externalProgressHandler;
- (void)endSimulationWithError:(id)arg1;
- (void)updateSimulationWithProgress:(double)arg1;
- (void)_handleResultAVAsset:(id)arg1 audioMix:(id)arg2 info:(id)arg3;
- (id)init;

@end

