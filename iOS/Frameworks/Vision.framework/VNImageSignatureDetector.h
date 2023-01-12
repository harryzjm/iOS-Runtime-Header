//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VNImageSignatureDetector
{
    struct unique_ptr<vision::mod::ImageDescriptorProcessorHyperplaneLSH, std::default_delete<vision::mod::ImageDescriptorProcessorHyperplaneLSH>> _hyperplaneLSHProcessor;
    unsigned long long _imageSignatureprintType;
    unsigned long long _imageSignatureHashType;
}

+ (id)configurationOptionKeysForDetectorKey;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long imageSignatureHashType; // @synthesize imageSignatureHashType=_imageSignatureHashType;
@property(readonly, nonatomic) unsigned long long imageSignatureprintType; // @synthesize imageSignatureprintType=_imageSignatureprintType;
- (shared_ptr_0a6daad2)_calculateImageSignatureHashDescriptorFrom:(const void *)arg1 options:(id)arg2 error:(id *)arg3;
- (shared_ptr_0a6daad2)_calculateImageSignatureprintDescriptorFromOptions:(id)arg1 error:(id *)arg2;
- (id)internalProcessUsingQualityOfServiceClass:(unsigned int)arg1 options:(id)arg2 regionOfInterest:(struct CGRect)arg3 warningRecorder:(id)arg4 error:(id *)arg5 progressHandler:(CDUnknownBlockType)arg6;
- (_Bool)needsMetalContext;
- (_Bool)supportsProcessingDevice:(id)arg1;
- (_Bool)completeInitializationForSession:(id)arg1 error:(id *)arg2;

@end

