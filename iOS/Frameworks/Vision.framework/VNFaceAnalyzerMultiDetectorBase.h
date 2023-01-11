//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VNFaceAnalyzerMultiDetectorBase
{
    struct shared_ptr<vision::mod::FaceprintAndAttributes> _mMultiHeadedFaceClassifier;
}

+ (Class)detectorClassForConfigurationOptions:(id)arg1 error:(id *)arg2;
+ (const basic_string_view_b5ef0455 *)getModelVersionForOptions:(id)arg1;
+ (unsigned long long)numberOfImageChannels;
+ (id)keyForDetectorWithConfigurationOptions:(id)arg1;
+ (id)configurationOptionKeysForDetectorKey;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)_saveFaceAttributes:(map_400ffdbf *)arg1 toFaceObservation:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (_Bool)_isFaceprintJunk:(shared_ptr_0a6daad2)arg1;
- (_Bool)_saveFaceprint:(shared_ptr_0a6daad2)arg1 toFaceObservation:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (void)_addFaceAnalysisResultsFromMap:(map_400ffdbf *)arg1 toFaceAttributeObject:(id)arg2 withRequestRevision:(unsigned long long)arg3;
- (_Bool)supportsProcessingDevice:(id)arg1;
- (_Bool)completeInitializationForSession:(id)arg1 error:(id *)arg2;

@end
