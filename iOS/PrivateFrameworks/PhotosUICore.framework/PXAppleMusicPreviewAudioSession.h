//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PXAppleMusicPreviewAudioSession
{
    long long _requestID;
}

- (void)_handleValuesLoadedForAsset:(id)arg1 audioMix:(id)arg2 info:(id)arg3 resultHandler:(CDUnknownBlockType)arg4;
- (void)_handleRequestedAsset:(id)arg1 audioMix:(id)arg2 info:(id)arg3 resultHandler:(CDUnknownBlockType)arg4;
- (void)cancelMediaRequest;
- (void)requestMediaWithResultHandler:(CDUnknownBlockType)arg1;
- (id)initWithAsset:(id)arg1 volume:(float)arg2 startTime:(CDStruct_1b6d18a9)arg3 queue:(id)arg4 audioSessionDelegate:(id)arg5;

@end
