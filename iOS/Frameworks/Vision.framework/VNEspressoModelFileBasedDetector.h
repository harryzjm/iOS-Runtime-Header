//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VNEspressoResources;

__attribute__((visibility("hidden")))
@interface VNEspressoModelFileBasedDetector
{
    VNEspressoResources *_espressoResources;
    unsigned long long _networkRequiredInputImageWidth;
    unsigned long long _networkRequiredInputImageHeight;
    unsigned long long _inputImageAspectRatioHandling;
}

+ (unsigned long long)inputImageAspectRatioHandlingForConfigurationOptions:(id)arg1;
+ (unsigned int)networkRequiredInputImagePixelFormatForConfigurationOptions:(id)arg1;
+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1;
+ (id)espressoModelPathForConfigurationOptions:(id)arg1 error:(id *)arg2;
+ (id)espressoModelFileNameForConfigurationOptions:(id)arg1;
+ (id)supportedImageSizeSetForOptions:(id)arg1 error:(id *)arg2;
+ (id)supportedComputeStageDevicesForOptions:(id)arg1 error:(id *)arg2;
+ (id)computeStagesToBindForConfigurationOptions:(id)arg1;
+ (id)configurationOptionKeysForDetectorKey;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long inputImageAspectRatioHandling; // @synthesize inputImageAspectRatioHandling=_inputImageAspectRatioHandling;
@property(readonly, nonatomic) unsigned long long networkRequiredInputImageHeight; // @synthesize networkRequiredInputImageHeight=_networkRequiredInputImageHeight;
@property(readonly, nonatomic) unsigned long long networkRequiredInputImageWidth; // @synthesize networkRequiredInputImageWidth=_networkRequiredInputImageWidth;
@property(readonly, nonatomic) VNEspressoResources *espressoResources; // @synthesize espressoResources=_espressoResources;
- (_Bool)executePlanForModel:(id)arg1 error:(id *)arg2;
- (_Bool)executePlanAndReturnError:(id *)arg1;
- (_Bool)bindPixelBuffer:(struct __CVBuffer *)arg1 toNetworkBlobName:(id)arg2 forModel:(id)arg3 error:(id *)arg4;
- (_Bool)bindPixelBuffer:(struct __CVBuffer *)arg1 toNetworkBlobName:(id)arg2 error:(id *)arg3;
- (_Bool)bindLockedPixelBuffer:(struct __CVBuffer *)arg1 toNetworkInputBlobName:(id)arg2 forModel:(id)arg3 error:(id *)arg4;
- (_Bool)bindLockedPixelBuffer:(struct __CVBuffer *)arg1 toNetworkInputBlobName:(id)arg2 error:(id *)arg3;
- (_Bool)_bindBuffer:(CDStruct_0a65202a *)arg1 toNetworkBlobName:(id)arg2 bindMode:(int)arg3 bindPtr:(int)arg4 forModel:(id)arg5 error:(id *)arg6;
- (_Bool)_bindBuffer:(CDStruct_0a65202a *)arg1 toNetworkBlobName:(id)arg2 bindMode:(int)arg3 bindPtr:(int)arg4 error:(id *)arg5;
- (_Bool)_bindBuffer:(CDStruct_0a65202a *)arg1 toNetworkBlobName:(id)arg2 bindMode:(int)arg3 error:(id *)arg4;
- (_Bool)bindBuffer:(CDStruct_0a65202a *)arg1 toNetworkOutputBlobName:(id)arg2 forModel:(id)arg3 error:(id *)arg4;
- (_Bool)bindBuffer:(CDStruct_0a65202a *)arg1 toNetworkOutputBlobName:(id)arg2 error:(id *)arg3;
- (_Bool)bindClientBuffer:(CDStruct_0a65202a *)arg1 toNetworkInputBlobName:(id)arg2 forModel:(id)arg3 error:(id *)arg4;
- (_Bool)bindClientBuffer:(CDStruct_0a65202a *)arg1 toNetworkInputBlobName:(id)arg2 error:(id *)arg3;
- (_Bool)bindBuffer:(CDStruct_0a65202a *)arg1 toNetworkInputBlobName:(id)arg2 forModel:(id)arg3 error:(id *)arg4;
- (_Bool)bindBuffer:(CDStruct_0a65202a *)arg1 toNetworkInputBlobName:(id)arg2 error:(id *)arg3;
- (_Bool)getWidth:(unsigned long long *)arg1 height:(unsigned long long *)arg2 ofEspressoModelNetworkBlobNamed:(id)arg3 error:(id *)arg4;
- (int)espressoModelNetworkLayersStorageTypeForConfigurationOptions:(id)arg1;
- (_Bool)createRegionOfInterestCrop:(struct CGRect)arg1 options:(id)arg2 warningRecorder:(id)arg3 pixelBuffer:(struct __CVBuffer **)arg4 error:(id *)arg5 progressHandler:(CDUnknownBlockType)arg6;
- (_Bool)completeInitializationForSession:(id)arg1 error:(id *)arg2;
- (_Bool)_loadEspressoModelWithConfigurationOptions:(id)arg1 error:(id *)arg2;

@end

