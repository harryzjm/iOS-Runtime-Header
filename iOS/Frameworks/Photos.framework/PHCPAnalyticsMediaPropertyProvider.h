//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Photos/CPAnalyticsPhotoKitPropertyProvider-Protocol.h>

@class NSString, PHPhotoLibrary;

@interface PHCPAnalyticsMediaPropertyProvider : NSObject <CPAnalyticsPhotoKitPropertyProvider>
{
    PHPhotoLibrary *_photoLibrary;
}

+ (id)assetPropertySetsToFetch;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
- (_Bool)_hasPeopleForSceneClassifications:(id)arg1 sceneAnalysisVersion:(unsigned long long)arg2;
- (_Bool)_hasPetsForSceneClassifications:(id)arg1 sceneAnalysisVersion:(unsigned long long)arg2;
- (_Bool)_isPeopleSceneIdentifier:(unsigned int)arg1;
- (id)_sceneSubjectForAsset:(id)arg1;
- (id)_sceneLabelByClassificationIdentifier:(unsigned int)arg1;
- (id)_sdConfidenceThresholdVersion51ForIdentifier:(unsigned int)arg1;
- (id)_sdConfidenceThresholdVersion33ForIdentifier:(unsigned int)arg1;
- (id)_sdConfidenceThresholdForIdentifier:(unsigned int)arg1 sceneAnalysisVersion:(unsigned long long)arg2;
- (id)_junkConfidenceThresholdVersion40ForIdentifier:(unsigned int)arg1;
- (id)_junkConfidenceThresholdForIdentifier:(unsigned int)arg1 sceneAnalysisVersion:(unsigned long long)arg2;
- (id)_sceneConfidenceThresholdByClassificationIdentifier:(unsigned int)arg1 sceneAnalysisVersion:(unsigned long long)arg2;
- (_Bool)_isSceneConfidenceAboveThresholdForSceneClassification:(id)arg1 sceneAnalysisVersion:(unsigned long long)arg2;
- (id)_sceneForAsset:(id)arg1;
- (id)_cameraTypeFromImportSource:(long long)arg1;
- (id)_ageDescriptionForMediaDate:(id)arg1;
- (id)_mediaProperty:(id)arg1 forAssetCollection:(id)arg2;
- (id)_PHAssetCollectionFromPayload:(id)arg1;
- (id)_mediaProperty:(id)arg1 forAsset:(id)arg2;
- (id)_mediaCountFromPayload:(id)arg1;
- (id)_PHAssetFromPayload:(id)arg1;
- (id)getDynamicProperty:(id)arg1 forEventName:(id)arg2 payloadForSystemPropertyExtraction:(id)arg3;
- (void)registerSystemProperties:(id)arg1;
- (id)initWithPhotoLibrary:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
