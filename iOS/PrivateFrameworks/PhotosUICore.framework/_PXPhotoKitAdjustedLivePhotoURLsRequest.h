//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, PHImageRequestOptions, PLPhotoEditRenderer;

@interface _PXPhotoKitAdjustedLivePhotoURLsRequest
{
    PLPhotoEditRenderer *_renderer;
    PHImageRequestOptions *_options;
    NSString *_pairingIdentifier;
    CDUnknownBlockType _resultHandler;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType resultHandler; // @synthesize resultHandler=_resultHandler;
@property(readonly, copy, nonatomic) NSString *pairingIdentifier; // @synthesize pairingIdentifier=_pairingIdentifier;
@property(readonly, nonatomic) PHImageRequestOptions *options; // @synthesize options=_options;
- (void).cxx_destruct;
- (void)_handleExportFinishedWithImageURL:(id)arg1 videoURL:(id)arg2 error:(id)arg3;
- (void)_renderIfNeeded;
- (void)progressDidChange;
- (void)editSourceDidChange;
- (void)start;
- (id)initWithRenderQueue:(id)arg1 asset:(id)arg2 pairingIdentifier:(id)arg3 imageManager:(id)arg4 options:(id)arg5 resultHandler:(CDUnknownBlockType)arg6;

@end

