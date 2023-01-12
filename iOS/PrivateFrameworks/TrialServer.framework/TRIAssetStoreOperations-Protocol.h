//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString, TRIFullMAAssetId;
@protocol TRIAssetId;

@protocol TRIAssetStoreOperations
- (NSString *)requireAssetStoreTempDir;
- (_Bool)fixFileProtectionForAssetStoreFiles;
- (_Bool)collectGarbageOlderThanNumScans:(unsigned int)arg1 deletedAssetSize:(unsigned long long *)arg2 ignoreRecentlyCreatedAssets:(_Bool)arg3 dryRun:(_Bool)arg4 linkTargetsToIgnoreByAssetId:(NSDictionary *)arg5 deletedAssetIds:(id *)arg6;
- (_Bool)referenceMAAutoAssetWithId:(TRIFullMAAssetId *)arg1 futurePath:(NSString *)arg2 currentPath:(NSString *)arg3 isFileFactor:(_Bool)arg4;
- (_Bool)addSymlinkFromAssetWithIdentifier:(NSString<TRIAssetId> *)arg1 toPath:(NSString *)arg2 flockWitness:(const struct TRIFlockWitness_ *)arg3;
- (_Bool)removeAssetWithIdentifier:(NSString<TRIAssetId> *)arg1;
- (_Bool)saveAssetWithIdentifier:(NSString<TRIAssetId> *)arg1 sourcePath:(NSString *)arg2 flockWitness:(const struct TRIFlockWitness_ *)arg3 removeSourceOnFailure:(_Bool)arg4;
@end

