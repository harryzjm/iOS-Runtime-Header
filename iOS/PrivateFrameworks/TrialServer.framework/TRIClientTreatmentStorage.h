//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol TRIAssetExtracting, TRIPaths;

@interface TRIClientTreatmentStorage : NSObject
{
    id <TRIPaths> _paths;
    id <TRIAssetExtracting> _extractor;
}

- (void).cxx_destruct;
- (_Bool)_resolveAssetPathsInTreatment:(id)arg1 usingReferenceURL:(id)arg2;
- (id)urlForTreatmentWithTreatmentId:(id)arg1;
- (id)_copyFileFromURL:(id)arg1 to:(id)arg2;
- (id)_assetURLForFactor:(id)arg1 treatmentId:(id)arg2;
- (id)_baseUrlForTreatment:(id)arg1 namespaceName:(id)arg2;
- (_Bool)_saveNamespacePartitionedTreatmentsForTreatment:(id)arg1 forNamespaceNames:(id)arg2;
- (_Bool)_linkAssetsUpdatingTreatment:(id)arg1;
- (_Bool)_saveAssetsFromURLs:(id)arg1 treatment:(id)arg2;
- (id)_assetMapWithTreatment:(id)arg1;
- (_Bool)_savePersistedTreatment:(id)arg1;
- (id)urlForDefaultFactorsWithNamespaceName:(id)arg1;
- (id)urlForFactorsWithTreatmentId:(id)arg1 namespaceName:(id)arg2;
- (_Bool)_removeFactorsWithURL:(id)arg1;
- (_Bool)_removeFactorsWithTreatmentId:(id)arg1 namespaceName:(id)arg2;
- (_Bool)removeTreatmentWithTreatmentId:(id)arg1;
- (_Bool)removeTreatmentFromLayer:(unsigned long long)arg1 withNamespaceName:(id)arg2;
- (id)updateSavedTreatmentWithTreatmentId:(id)arg1 mergingAssetURLs:(id)arg2 forNamespaceNames:(id)arg3;
- (id)saveTreatment:(id)arg1 assetURLs:(id)arg2;
- (id)loadTreatmentWithTreatmentId:(id)arg1 isFilePresent:(_Bool *)arg2;
- (id)initWithPaths:(id)arg1 extractor:(id)arg2;
- (id)initWithPaths:(id)arg1;
- (id)init;

@end
