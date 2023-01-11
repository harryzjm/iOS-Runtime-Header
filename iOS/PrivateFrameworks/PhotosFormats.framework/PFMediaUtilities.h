//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PFMediaUtilities : NSObject
{
}

+ (long long)rawSourceMaximumPixelCount;
+ (_Bool)canLoadAssetAsRawWithImageProperties:(id)arg1;
+ (struct CGSize)maximumImageSizeFromProperties:(id)arg1;
+ (id)mainVideoTrackForAsset:(id)arg1;
+ (_Bool)isPdfUTI:(id)arg1;
+ (_Bool)isPsdUTI:(id)arg1;
+ (_Bool)isPngUTI:(id)arg1;
+ (_Bool)isHeifUTI:(id)arg1;
+ (_Bool)isGifUTI:(id)arg1;
+ (_Bool)isTiffUTI:(id)arg1;
+ (_Bool)isRawUTI:(id)arg1;
+ (_Bool)isJpeg2000UTI:(id)arg1;
+ (_Bool)isJpegUTI:(id)arg1;
+ (_Bool)isImageUTI:(id)arg1;
+ (_Bool)isMovieUTI:(id)arg1;
+ (_Bool)isAudioUTI:(id)arg1;
+ (long long)defaultRasterizationDPI;
+ (_Bool)UTIRequiresRasterizationDPI:(id)arg1;
+ (_Bool)isValidExtension:(id)arg1 forUTI:(id)arg2;
+ (id)UTIForURL:(id)arg1 error:(id *)arg2;
+ (id)UTIForHFSType:(unsigned int)arg1;
+ (id)resourceModelUTIForExtension:(id)arg1;
+ (id)UTIForExtension:(id)arg1;
+ (id)preferredExtensionForUTI:(id)arg1;
+ (_Bool)canGenerateImageDerivativesFromUTI:(id)arg1;

@end
