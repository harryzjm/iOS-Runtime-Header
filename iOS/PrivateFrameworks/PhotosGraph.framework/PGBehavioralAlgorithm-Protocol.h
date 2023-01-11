//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary, NSSet, PGGraph, PHAsset;

@protocol PGBehavioralAlgorithm
- (NSDictionary *)dataToPersist;
- (NSDictionary *)semanticScoreByAssetUUIDForAssets:(NSArray *)arg1;
- (float)semanticScoreForAsset:(PHAsset *)arg1;
- (void)preprocessWithProgressBlock:(void (^)(double, _Bool *))arg1;
- (id)initWithGoldAssets:(NSSet *)arg1 graph:(PGGraph *)arg2 persistedData:(NSDictionary *)arg3;
- (id)initWithGoldAssets:(NSSet *)arg1 graph:(PGGraph *)arg2;
@end
