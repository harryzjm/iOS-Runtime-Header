//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VisionCore/VisionCoreSceneNetInferenceNetworkDescriptor.h>

@class VNDisallowedList;

@interface VisionCoreSceneNetInferenceNetworkDescriptor (VNPrivateAdditions)
- (id)VNSceneprintFromData:(id)arg1 originatingRequestSpecifier:(id)arg2 error:(id *)arg3;
- (id)VNSceneprintFromOutputObjects:(id)arg1 originatingRequestSpecifier:(id)arg2 error:(id *)arg3;
@property(readonly) VNDisallowedList *VNPublicClassificationDisallowedList;
- (id)VNSceneprintFromData:(id)arg1 labelsAndConfidences:(id)arg2 originatingRequestSpecifier:(id)arg3 error:(id *)arg4;
@end

