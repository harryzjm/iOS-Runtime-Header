//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUI/PUPhotoPickerAbstractExtensionContext.h>

@class NSObject, NSOperationQueue, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface PUPhotoPickerExtensionContext : PUPhotoPickerAbstractExtensionContext
{
    NSObject<OS_dispatch_queue> *_multipleMediaIsolationQueue;
    NSOperationQueue *_multipleMediaConversionConcurrentQueue;
    NSString *_temporaryDirectoryInHost;
}

+ (void)configureImageManagerLimit;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *temporaryDirectoryInHost; // @synthesize temporaryDirectoryInHost=_temporaryDirectoryInHost;
- (id)_createSandboxTokenForPath:(id)arg1;
- (id)_createSandboxTokenForURL:(id)arg1;
- (void)_saveVideoURLForLivePhoto:(id)arg1 fileURL:(id)arg2 appendTo:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_handleLivePhotoVideoUrlFetch:(id)arg1 appendTo:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_saveImageURLForLivePhoto:(id)arg1 fileURL:(id)arg2 appendTo:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_handleLivePhotoImageUrlFetch:(id)arg1 appendTo:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_photoPickerInfoDictionaryFromUIImagePickerControllerInfoDictionary:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)performPhotoPickerPreviewOfFirstAsset;
- (void)initiatePhotoPickerSelection;
- (void)didSelectMediaWithInfoDictionary:(id)arg1;
- (void)_handleMutlipleMediaCompletion:(id)arg1;
- (void)_createPhotoPickerInfoDictionaryFromInfoDictionary:(id)arg1 appendTo:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)didSelectMultipleMediaItemsWithInfoDictionaries:(id)arg1;
- (void)didDisplayPhotoPickerPreview;
- (void)didDisplayPhotoPickerSourceType:(id)arg1;
- (void)dismissCurrentViewControllerFromPhotoPickerAnimated:(id)arg1;
- (void)invalidatePhotoPickerHostServices;
- (void)cancelPhotoPicker;
- (void)performTraitCollectionUpdateUsingData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)invalidatePhotoPickerRemoteServices;
- (id)_host;
@property(readonly, nonatomic) NSOperationQueue *multipleMediaConversionConcurrentQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *multipleMediaIsolationQueue;
- (void)requestedViewControllerOptionsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

