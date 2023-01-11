//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@protocol PPInternalServerProtocol
- (void)sysdiagnoseInformationWithCompletion:(void (^)(NSString *, NSError *))arg1;
- (void)abGroupInfoWithCompletion:(void (^)(NSDictionary *, NSError *))arg1;
- (void)assetVersionsWithCompletion:(void (^)(NSDictionary *, NSError *))arg1;
- (void)assetDefaultBundleOverridePathForAssetIdentifier:(NSString *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (void)setAssetDefaultBundleOverridePath:(NSString *)arg1 assetIdentifier:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (void)downloadAssetMetadataWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)assetMetadataRefreshIntervalSecondsWithCompletion:(void (^)(double, NSError *))arg1;
- (void)clearAssetMetadataRefreshIntervalSecondsWithCompletion:(void (^)(NSError *))arg1;
- (void)setAssetMetadataRefreshIntervalSeconds:(double)arg1 completion:(void (^)(NSError *))arg2;
@end
