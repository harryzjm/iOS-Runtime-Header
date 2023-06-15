//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;
@protocol MLComputeDeviceProtocol;

__attribute__((visibility("hidden")))
@interface VNCoreSceneUnderstandingCompoundRequestDetectorConfiguration : NSObject
{
    id <MLComputeDeviceProtocol> _mainStageComputeDevice;
    NSMutableArray *_originalRequests;
    NSMutableDictionary *_detectorConfigurationOptions;
}

- (void).cxx_destruct;
- (void)cacheResultsInRequestPerformingContext:(id)arg1;
- (id)originalRequests;
- (id)detectorConfigurationOptions;
- (id)mainStageComputeDevice;
- (void)addOriginalRequest:(id)arg1;
- (void)setDetectorConfigurationOption:(id)arg1 value:(id)arg2;
- (id)addCityNatureConfigurationForOriginalRequest:(id)arg1;
- (id)addSignificantEventConfigurationForOriginalRequest:(id)arg1;
- (id)addVN5kJNH3eYuyaLxNpZr5Z7ziConfigurationForOriginalRequest:(id)arg1;
- (id)addJunkConfigurationForOriginalRequest:(id)arg1;
- (id)addImageFingerprintsConfigurationForOriginalRequest:(id)arg1;
- (id)addRecognizeObjectsConfigurationForOriginalRequest:(id)arg1;
- (id)addImageSaliencyOConfigurationForOriginalRequest:(id)arg1;
- (id)addImageSaliencyAConfigurationForOriginalRequest:(id)arg1;
- (id)addImageAestheticsConfigurationForOriginalRequest:(id)arg1;
- (id)addEntityNetClassificationConfigurationForOriginalRequest:(id)arg1;
- (id)addImageClassificationConfigurationForOriginalRequest:(id)arg1;
- (id)addSceneprintConfigurationForOriginalRequest:(id)arg1;
- (id)initWithMainStageComputeDevice:(id)arg1;

@end

