//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VNFaceTracker
{
}

+ (id)faceClassifierBoostedPixelDifference;
- (id)_runFaceClassifierOnBBoxAlignmentResults:(id)arg1 trackingResults:(id)arg2 bBoxAlignmentResults:(id)arg3 error:(id *)arg4;
- (id)_runBBoxAlignmentOnTrackingResults:(id)arg1 trackerResults:(id)arg2 error:(id *)arg3;
- (id)_postProcessTrackingResults:(id)arg1 trackerResults:(id)arg2 error:(id *)arg3;
- (id)_convertDetectedObjectObservationsToFaceObservations:(id)arg1 error:(id *)arg2;
- (id)_parseInputObservations:(id)arg1 imageBuffer:(id)arg2 error:(id *)arg3;
- (id)initWithOptions:(id)arg1 error:(id *)arg2;

@end
