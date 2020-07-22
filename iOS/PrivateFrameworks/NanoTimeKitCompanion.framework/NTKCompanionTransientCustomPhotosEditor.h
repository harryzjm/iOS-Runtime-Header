//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray;

@interface NTKCompanionTransientCustomPhotosEditor
{
    NSMutableArray *_photos;
    _Bool _previewIsValid;
}

- (void).cxx_destruct;
- (id)_writeTransientPhotosInto:(id)arg1;
- (struct CGSize)minimumNormalizedCropSizeForPhotoAtIndex:(long long)arg1;
- (struct CGRect)originalCropForPhotoAtIndex:(long long)arg1;
- (void)imageInPhotoLibraryForPhotoAtIndex:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)imageAndCropForPhotoAtIndex:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)isPhotoInPhotoLibraryAtIndex:(long long)arg1;
- (_Bool)canChangeOriginalCropOfPhotoAtIndex:(long long)arg1;
- (_Bool)setOriginalCrop:(struct CGRect)arg1 forPhotoAtIndex:(long long)arg2;
- (void)movePhotoAtIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)deletePhotoAtIndex:(long long)arg1;
- (_Bool)addImageList:(id)arg1;
- (_Bool)addAssetsFromAssetList:(id)arg1;
- (_Bool)addPhotosFromUIImagePicker:(id)arg1;
- (long long)photosCount;
- (void)finalizeWithCompletion:(CDUnknownBlockType)arg1;
- (void)generateGalleryPreviewResourceDirectoryWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithResourceDirectory:(id)arg1;

@end
