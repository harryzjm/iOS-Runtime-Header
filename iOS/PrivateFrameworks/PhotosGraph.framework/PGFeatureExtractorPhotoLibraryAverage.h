//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MAFeatureExtractor, NSArray;

@interface PGFeatureExtractorPhotoLibraryAverage
{
    MAFeatureExtractor *_assetFeatureExtractor;
    NSArray *_assetFetchOptionPropertySet;
    NSArray *_featureNames;
}

+ (void)setPreCalculatedFloatVector:(id)arg1;
+ (id)preCalculatedFloatVector;
+ (void)resetPreCalculatedFeatureVector;
+ (_Bool)preCalculateFeatureVectorWithPhotoLibrary:(id)arg1 assetFeatureExtractor:(id)arg2 assetFetchOptionPropertySet:(id)arg3 error:(id *)arg4;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *assetFetchOptionPropertySet; // @synthesize assetFetchOptionPropertySet=_assetFetchOptionPropertySet;
@property(readonly, nonatomic) MAFeatureExtractor *assetFeatureExtractor; // @synthesize assetFeatureExtractor=_assetFeatureExtractor;
- (id)floatVectorWithEntity:(id)arg1 error:(id *)arg2;
- (long long)featureLength;
@property(readonly, nonatomic) NSArray *featureNames; // @synthesize featureNames=_featureNames;
- (id)name;
- (id)initWithAssetFeatureExtractor:(id)arg1 assetFetchOptionPropertySet:(id)arg2;

@end
