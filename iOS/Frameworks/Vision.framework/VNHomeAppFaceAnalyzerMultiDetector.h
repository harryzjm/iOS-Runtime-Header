//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VNHomeAppFaceAnalyzerMultiDetector
{
}

+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1;
+ (id)espressoModelFileNameForConfigurationOptions:(id)arg1;
+ (const basic_string_view_b5ef0455 *)getModelVersionForOptions:(id)arg1;
- (_Bool)_isFaceprintJunk:(shared_ptr_0a6daad2)arg1;
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 error:(id *)arg4;

@end
