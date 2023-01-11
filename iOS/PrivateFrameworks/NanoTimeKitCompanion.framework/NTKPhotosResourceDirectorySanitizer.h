//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL, NTKPhotoResourcesManifest, NTKPhotosReader, NTKPhotosResourceDirectorySanitizerValidationStrategy;

@interface NTKPhotosResourceDirectorySanitizer : NSObject
{
    NSURL *_resourceDirectoryURL;
    NTKPhotoResourcesManifest *_manifest;
    NTKPhotosReader *_reader;
    NTKPhotosResourceDirectorySanitizerValidationStrategy *_strategy;
}

- (void).cxx_destruct;
- (id)_createPhotosReader;
- (_Bool)_readerIsValid;
- (_Bool)_imageListItemHasValidAnalysisValues:(id)arg1;
- (_Bool)_imageListItemHasValidCropValues:(id)arg1;
- (_Bool)_imageListItemContainsValidIrisVideo:(id)arg1;
- (_Bool)_imageListItemContainsValidImage:(id)arg1;
- (_Bool)_resourceWithName:(id)arg1 isValidMediaAssetOfType:(id)arg2 withMinFileSize:(unsigned long long)arg3 maxFileSize:(unsigned long long)arg4;
- (_Bool)_imageListItemIsValid:(id)arg1;
- (id)_createAssetsManifest;
- (_Bool)_manifestIsValid:(id *)arg1;
- (_Bool)resourceDirectoryIsValid:(id *)arg1;
- (id)initWithResourceDirectoryURL:(id)arg1 validationStrategy:(id)arg2;

@end
