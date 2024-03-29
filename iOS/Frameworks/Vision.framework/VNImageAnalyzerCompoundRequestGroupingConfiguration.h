//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VNImageAnalyzerCompoundRequestGroupingConfiguration : NSObject
{
    NSMutableArray *_originalRequests;
    NSMutableDictionary *_kindToOriginalRequestsMapping;
    NSMutableDictionary *_detectorConfigurationOptions;
    NSMutableDictionary *_computeStageDeviceAssignments;
    unsigned long long _detectorModel;
}

- (void).cxx_destruct;
- (id)computeStageDeviceAssignments;
- (void)enumerateOriginalRequestsByKindUsingBlock:(CDUnknownBlockType)arg1;
- (id)originalRequests;
- (id)detectorConfigurationOptions;
- (void)addTilingWarningRecorder:(id)arg1;
- (void)addOriginalRequest:(id)arg1 forKind:(unsigned long long)arg2;
- (void)setDetectorConfigurationOption:(id)arg1 value:(id)arg2;
- (id)addSceneConfigurationForOriginalRequest:(id)arg1;

@end

