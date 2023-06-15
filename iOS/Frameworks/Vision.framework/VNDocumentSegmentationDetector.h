//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VNDocumentSegmentationDetector
{
}

+ (id)segmentationLabelsFilePathForConfiguration:(id)arg1 error:(id *)arg2;
+ (_Bool)providesSegmentationLabelsForConfiguration:(id)arg1;
+ (unsigned int)analysisPixelFormatTypeForConfiguration:(id)arg1;
+ (id)inputImageBlobNameForConfiguration:(id)arg1;
+ (id)modelPathForConfiguration:(id)arg1 error:(id *)arg2;
- (id)observationsForLastAnalysisOfImageAnalyzer:(void *)arg1 processOptions:(id)arg2 originatingRequestSpecifier:(id)arg3 qosClass:(unsigned int)arg4 error:(id *)arg5;
- (unsigned int)analysisTypesForProcessOptions:(id)arg1;
- (_Bool)configureImageAnalyzerOptions:(void *)arg1 error:(id *)arg2;

@end

