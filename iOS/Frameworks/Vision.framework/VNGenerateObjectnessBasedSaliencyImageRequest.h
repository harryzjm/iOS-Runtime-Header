//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface VNGenerateObjectnessBasedSaliencyImageRequest
{
}

+ (id)descriptionForPrivateRevision:(unsigned long long)arg1;
+ (_Bool)supportsPrivateRevision:(unsigned long long)arg1;
+ (Class)configurationClass;
+ (const CDStruct_7d93034e *)revisionAvailability;
+ (id)defaultProcessingDeviceForRevision:(unsigned long long)arg1;
- (_Bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;
- (_Bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;
- (_Bool)warmUpRequestPerformer:(id)arg1 error:(id *)arg2;
- (id)_objectnessObservationsForRevision:(unsigned long long)arg1 performedInContext:(id)arg2 error:(id *)arg3;
- (id)_detectorForRevision:(unsigned long long)arg1 getAppliedDetectorOptions:(id *)arg2 error:(id *)arg3;
- (id)_detectorTypeForRevision:(unsigned long long)arg1 error:(id *)arg2;

@end
