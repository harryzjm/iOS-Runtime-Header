//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString, TRIFullMAAssetId;
@protocol TRIAssetId;

@protocol TRIXPCInternalSystemServiceProtocol
- (void)requireAssetStoreTempDir:(void (^)(NSString *))arg1;
- (void)fixFileProtectionForAssetStoreWithCompletion:(void (^)(_Bool))arg1;
- (void)collectGarbageOlderThanNumScans:(unsigned int)arg1 deletedAssetSize:(unsigned long long *)arg2 ignoreRecentlyCreatedAssets:(_Bool)arg3 dryRun:(_Bool)arg4 linkTargetsToIgnoreByAssetId:(NSDictionary *)arg5 completion:(void (^)(_Bool, NSMutableSet *))arg6;
- (void)referenceMAAutoAssetWithId:(TRIFullMAAssetId *)arg1 futurePath:(NSString *)arg2 currentPath:(NSString *)arg3 isFileFactor:(_Bool)arg4 completion:(void (^)(_Bool))arg5;
- (void)addSymlinkFromAssetWithIdentifier:(NSString<TRIAssetId> *)arg1 toPath:(NSString *)arg2 flockWitness:(const struct TRIFlockWitness_ *)arg3 completion:(void (^)(_Bool))arg4;
- (void)removeAssetWithIdentifier:(NSString<TRIAssetId> *)arg1 completion:(void (^)(_Bool))arg2;
- (void)saveAssetWithIdentifier:(NSString<TRIAssetId> *)arg1 sourcePath:(NSString *)arg2 flockWitness:(const struct TRIFlockWitness_ *)arg3 removeSourceOnFailure:(_Bool)arg4 completion:(void (^)(_Bool))arg5;
@end

