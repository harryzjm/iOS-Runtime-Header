//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXSettingsKeyObserver-Protocol.h>

@class NSString, PXPhotoKitLivePhotoVideoContentProviderSpec;

@interface PXPhotoKitLivePhotoVideoContentProvider <PXSettingsKeyObserver>
{
    NSString *_contentIdentifier;
    PXPhotoKitLivePhotoVideoContentProviderSpec *_spec;
}

+ (id)postProcessingOperationQueue;
- (void).cxx_destruct;
@property(readonly, nonatomic) PXPhotoKitLivePhotoVideoContentProviderSpec *spec; // @synthesize spec=_spec;
- (id)contentIdentifier;
- (void)cancelLoading;
- (void)dealloc;
- (void)_handleStabilizeOperationFinishedWithProcessingCompletionHandler:(CDUnknownBlockType)arg1;
- (void)postprocessPlayerItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)needsPostprocessing;
- (id)initWithAsset:(id)arg1 mediaProvider:(id)arg2;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (id)initWithAsset:(id)arg1 mediaProvider:(id)arg2 spec:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
