//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary, VNSaliencyOHeatmapBoundingBoxGenerator;

__attribute__((visibility("hidden")))
@interface VNSmartCam5GatingDetector
{
    NSDictionary *_documentIdentifierToSceneLabels;
    VNSaliencyOHeatmapBoundingBoxGenerator *_boundingBoxGenerator;
}

+ (id)primaryInferenceNetworkDescriptorForVNInferenceNetworkIdentifierSmartCam_5_0_0;
+ (id)availableVNInferenceNetworkIdentifierSmartCamVersions;
+ (id)inferenceNetworkIdentifiers;
+ (unsigned int)analysisPixelFormatTypeForConfiguration:(id)arg1;
+ (id)inputImageBlobNameForConfiguration:(id)arg1;
+ (id)modelNameForConfiguration:(id)arg1;
- (void).cxx_destruct;
- (id)observationsForLastAnalysisOfImageAnalyzer:(void *)arg1 processOptions:(id)arg2 originatingRequestSpecifier:(id)arg3 qosClass:(unsigned int)arg4 error:(id *)arg5;
- (unsigned int)analysisTypesForProcessOptions:(id)arg1;
- (_Bool)configureImageAnalyzerOptions:(void *)arg1 error:(id *)arg2;
- (id)segmentationLabelsFileName;
- (id)sceneLabelsFileName;
- (unsigned long long)defaultImageCropAndScaleOption;
- (_Bool)completeInitializationForSession:(id)arg1 error:(id *)arg2;
@property(readonly, copy) NSArray *supportedDocumentElementIdentifiers;
- (id)supportedClassificationIdentifiersWithOptions:(id)arg1 error:(id *)arg2;

@end

