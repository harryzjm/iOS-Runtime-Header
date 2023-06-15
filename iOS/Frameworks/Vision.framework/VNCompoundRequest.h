//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "VNRequest.h"

@class NSArray, NSNumber;

__attribute__((visibility("hidden")))
@interface VNCompoundRequest : VNRequest
{
    NSArray *_originalRequests;
    NSNumber *_cachedDependencyProcessingOrdinality;
}

+ (_Bool)supportedRevisionsAreFilteredBasedOnAvailableComputeDevices;
+ (id)computeStageDeviceAssignmentsForOriginalRequests:(id)arg1;
+ (id)compoundRequestsForOriginalRequests:(id)arg1 withPerformingContext:(id)arg2 error:(id *)arg3;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *originalRequests; // @synthesize originalRequests=_originalRequests;
- (id)description;
- (unsigned long long)ioSurfaceMemoryPoolId;
- (_Bool)usesCPUOnly;
- (void)recordWarningsInOriginalRequests;
@property(readonly, nonatomic) struct CGRect regionOfInterest;
- (_Bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;
- (long long)dependencyProcessingOrdinality;
- (id)sequencedRequestPreviousObservationsKey;
- (_Bool)resultsAreAssignedWithOriginatingRequestSpecifier;
- (_Bool)allowsCachingOfResults;
- (_Bool)dumpIntermediateImages;
- (id)compoundResults;
- (id)initWithOriginalRequests:(id)arg1;

@end

