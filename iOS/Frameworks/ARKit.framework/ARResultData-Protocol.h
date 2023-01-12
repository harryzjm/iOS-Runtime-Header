//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ARKit/ARData-Protocol.h>

@class ARLightEstimate, ARPointCloud, ARWorldTrackingState, NSArray, NSMutableArray;

@protocol ARResultData <ARData>

@optional
- (NSArray *)externalAnchorsWithReferenceOriginTransform:(CDStruct_f1db2b5e)arg1 existingAnchors:(NSArray *)arg2;
- (NSArray *)anchorsForCameraWithTransform:(CDStruct_f1db2b5e)arg1 referenceOriginTransform:(CDStruct_f1db2b5e)arg2 existingAnchors:(NSArray *)arg3 anchorsToRemove:(NSMutableArray *)arg4;
- (struct __CVBuffer *)segmentationBuffer;
- (ARPointCloud *)featurePoints;
- (ARLightEstimate *)lightEstimate;
- (unsigned long long)worldAlignmentModifiers;
- (CDStruct_f1db2b5e)worldAlignmentTransform;
- (ARWorldTrackingState *)worldTrackingState;
- (CDStruct_f1db2b5e)cameraTransform;
- (double)timestamp;
@end

