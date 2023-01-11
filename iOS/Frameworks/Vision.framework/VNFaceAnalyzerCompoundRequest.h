//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VNFaceAnalyzerCompoundRequest
{
}

+ (Class)configurationClass;
+ (_Bool)warmUpSession:(id)arg1 error:(id *)arg2;
+ (id)compoundRequestsForOriginalRequests:(id)arg1 withPerformingContext:(id)arg2 error:(id *)arg3;
+ (id)defaultProcessingDeviceForRevision:(unsigned long long)arg1;
+ (const CDStruct_7d93034e *)revisionAvailability;
- (void)assignOriginalRequestsResultsFromObservations:(id)arg1 obtainedInPerformingContext:(id)arg2;
- (unsigned long long)detectionLevel;
- (void)_determineFacesToProcessFrom:(id)arg1 outputFacesThatNeedNoProcessing:(id)arg2 outputfacesThatNeedAttributes:(id)arg3 isFaceprintRequest:(_Bool)arg4 isAttributeRequest:(_Bool)arg5;
- (_Bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;
- (id)initWithDetectorType:(id)arg1 configuration:(id)arg2;
- (long long)dependencyProcessingOrdinality;

@end
