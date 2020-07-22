//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVAsset, PXAutoloopVideoPipelinePerformer;

@interface PXAutoloopVariationRequest
{
    AVAsset *_asset;
    PXAutoloopVideoPipelinePerformer *__autoloopPerformer;
}

@property(retain, nonatomic, setter=_setAutoloopPerformer:) PXAutoloopVideoPipelinePerformer *_autoloopPerformer; // @synthesize _autoloopPerformer=__autoloopPerformer;
@property(readonly, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)cancel;
- (void)_handlePerformerFinishedWithSuccess:(_Bool)arg1 infos:(id)arg2;
- (void)startRequestWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithAssetUUID:(id)arg1 AVAsset:(id)arg2;

@end

