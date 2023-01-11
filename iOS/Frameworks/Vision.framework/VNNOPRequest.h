//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VNSupportedImageSize;

@interface VNNOPRequest
{
}

+ (Class)configurationClass;
- (id)supportedImageSizeSet;
- (_Bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;
- (_Bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;
@property(nonatomic) double detectorExecutionTimeInterval;
@property(nonatomic) _Bool detectorWantsAnisotropicScaling;
@property(copy, nonatomic) VNSupportedImageSize *detectorPreferredImageSize;
- (struct __CVBuffer *)_createScaledImagePixelBufferFromImageBuffer:(id)arg1 inPixelFormat:(unsigned int)arg2 forDetectorInputImageSize:(struct CGSize)arg3 usingAnisotropicScaling:(_Bool)arg4 options:(id)arg5 error:(id *)arg6;
- (struct __CVBuffer *)_createScaledImagePixelBufferFromCropRect:(struct CGRect)arg1 ofImageBuffer:(id)arg2 inPixelFormat:(unsigned int)arg3 forDetectorInputImageSize:(struct CGSize)arg4 usingAnisotropicScaling:(_Bool)arg5 options:(id)arg6 error:(id *)arg7;
- (struct CGSize)_actualSizeForDesiredSize:(id)arg1 ofSourceImageWidth:(unsigned long long)arg2 height:(unsigned long long)arg3;

@end
