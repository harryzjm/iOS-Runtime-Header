//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoAnalysis/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableSet, NSNumber, NSSet, NSString, PHAsset, PVCanceler, PVContext, PVFace, PVFaceCrop, PVFaceprint, PVPerson;
@protocol PVFaceClusteringProtocol;

@protocol PVPersistenceDelegate <NSObject>
@property(nonatomic) unsigned int sceneAlgorithmUmbrellaVersion;
@property(nonatomic) unsigned int faceAlgorithmUmbrellaVersion;
- (void)logPVDebugMessage:(NSString *)arg1;
- (void)logPVInfoMessage:(NSString *)arg1;
- (void)logPVWarningMessage:(NSString *)arg1;
- (void)logPVErrorMessage:(NSString *)arg1;
- (NSString *)suggestedPersonLocalIdentifierForPersonLocalIdentifier:(NSString *)arg1 faceClusterer:(id <PVFaceClusteringProtocol>)arg2 canceler:(PVCanceler *)arg3 context:(PVContext *)arg4 error:(id *)arg5;
- (void)buildPersonsWithFaceClusterer:(id <PVFaceClusteringProtocol>)arg1 keyFaceUpdateBlock:(void (^)(NSArray *))arg2 canceler:(PVCanceler *)arg3 context:(PVContext *)arg4;
- (_Bool)needsPersonBuilding;
- (_Bool)recordNeedToPersonBuildOnFaceGroupContainingFace:(PVFace *)arg1 error:(id *)arg2;
- (_Bool)deleteEmptyGroupsAndReturnError:(id *)arg1;
- (_Bool)resetLibraryClustersWithCanceler:(PVCanceler *)arg1 error:(id *)arg2;
- (_Bool)removeAlgorithmicallyGroupedFacesWithLocalIdentifiers:(NSArray *)arg1 error:(id *)arg2;
- (_Bool)persistChangesToAlgorithmicFaceGroups:(NSDictionary *)arg1 faceCSNByLocalIdentifierForNewlyClusteredFaces:(NSDictionary *)arg2 faceCSNsOfUnclusteredFaces:(NSMutableSet *)arg3 localIdentifiersOfUnclusteredFaces:(NSMutableSet *)arg4 persistenceCompletionBlock:(void (^)(void))arg5 canceler:(PVCanceler *)arg6 error:(id *)arg7;
- (_Bool)setKeyFaceOfAlgorithmicFaceGroupToFaceWithClusterSequenceNumbers:(NSArray *)arg1 error:(id *)arg2;
- (NSSet *)keyFacesFromAlgorithmicGroupsContainingFacesWithClusterSequenceNumbers:(NSSet *)arg1 includeSingletons:(_Bool)arg2 error:(id *)arg3;
- (NSSet *)localIdentifiersOfKeyFacesFromAlgorithmicGroupsContainingFacesWithLocalIdentifiers:(NSSet *)arg1 error:(id *)arg2;
- (NSSet *)facesAlgorithmicallyGroupedWithFacesWithClusterSequenceNumbers:(NSSet *)arg1 includeSingletons:(_Bool)arg2 error:(id *)arg3;
- (NSSet *)localIdentifiersOfFacesAlgorithmicallyGroupedWithFacesWithLocalIdentifiers:(NSSet *)arg1 error:(id *)arg2;
- (NSNumber *)clusterSequenceNumberForFaceGroupWithLocalIdentifier:(NSString *)arg1;
- (NSMutableArray *)groupedClusterSequenceNumbersOfFacesInFaceGroupsOfMinimumSize:(unsigned long long)arg1 error:(id *)arg2;
- (NSMutableArray *)allAlgorithmicFaceGroups:(id *)arg1;
- (unsigned long long)countOfAlgorithmicFaceGroups;
- (_Bool)updateKeyFacesOfPersonsWithLocalIdentifiers:(NSArray *)arg1 forceUpdate:(_Bool)arg2 canceler:(PVCanceler *)arg3 error:(id *)arg4;
- (NSSet *)rejectedFaceClusterSequenceNumbersForPersonWithLocalIdentifier:(NSString *)arg1 error:(id *)arg2;
- (NSSet *)rejectedFaceGroupLocalIdentifiersForPersonWithLocalIdentifier:(NSString *)arg1 error:(id *)arg2;
- (NSSet *)rejectedUnverifiedPersonLocalIdentifiersForPersonWithLocalIdentifier:(NSString *)arg1 error:(id *)arg2;
- (NSSet *)rejectedFaceLocalIdentifiersForPersonWithLocalIdentifier:(NSString *)arg1 error:(id *)arg2;
- (NSSet *)rejectedFacesForPersonWithLocalIdentifier:(NSString *)arg1 error:(id *)arg2;
- (NSArray *)facesForPersonWithLocalIdentifier:(NSString *)arg1 error:(id *)arg2;
- (NSSet *)personsForLocalIdentifiers:(NSSet *)arg1 error:(id *)arg2;
- (PVPerson *)personWithFaceLocalIdentifier:(NSString *)arg1 error:(id *)arg2;
- (NSArray *)allPersons:(id *)arg1;
- (PVFace *)faceAssociatedWithFaceCrop:(PVFaceCrop *)arg1;
- (NSString *)associateFace:(PVFace *)arg1 withFaceCrop:(PVFaceCrop *)arg2 error:(id *)arg3;
- (_Bool)clearDirtyStateOnFaceCrops:(NSArray *)arg1 error:(id *)arg2;
- (NSArray *)dirtyFaceCropsWithLimit:(unsigned long long)arg1;
- (_Bool)hasDirtyFaceCrops;
- (_Bool)persistGeneratedFaceCrops:(NSArray *)arg1 error:(id *)arg2;
- (_Bool)updateFaceprint:(PVFaceprint *)arg1 ofPersistedFace:(PVFace *)arg2 error:(id *)arg3;
- (NSDictionary *)faceprintsByFaceLocalIdentifiers:(NSArray *)arg1 version:(unsigned int)arg2 error:(id *)arg3;
- (_Bool)cleanupGroupedFacesWithClusterSequenceNumberSetToZeroWithCanceler:(PVCanceler *)arg1 error:(id *)arg2;
- (_Bool)cleanupUngroupedFacesWithNonZeroClusterSequenceNumbersWithCanceler:(PVCanceler *)arg1 error:(id *)arg2;
- (_Bool)ungroupFaceClusterSequenceNumbers:(NSArray *)arg1 batchSizeForUnclusteringFaces:(unsigned long long)arg2 canceler:(PVCanceler *)arg3 error:(id *)arg4;
- (_Bool)persistFaces:(NSArray *)arg1 deleteFaces:(NSArray *)arg2 forAsset:(PHAsset *)arg3 persistedFaces:(id *)arg4 error:(id *)arg5;
- (NSSet *)invalidFaceClusterSequenceNumbersInClusterSequenceNumbers:(NSSet *)arg1 canceler:(PVCanceler *)arg2 error:(id *)arg3;
- (_Bool)resetClusterSequenceNumberOfFacesWithLocalIdentifiers:(NSArray *)arg1 error:(id *)arg2;
- (NSArray *)facesFromAsset:(PHAsset *)arg1;
- (NSSet *)unverifiedVisibleFacesFromFaceGroupContainingFacesWithClusterSequenceNumbers:(NSArray *)arg1 withFaceprintVersion:(unsigned int)arg2;
- (NSArray *)deterministicallyOrderedFaceIdentifiersWithLocalIdentifiers:(NSArray *)arg1 faceprintVersion:(unsigned int)arg2;
- (NSArray *)facesForClusteringWithLocalIdentifiers:(NSArray *)arg1 faceprintVersion:(unsigned int)arg2 excludeClustered:(_Bool)arg3;
- (NSSet *)unclusteredClusteringEligibleFaceLocalIdentifiers:(id *)arg1;
- (NSSet *)faceLocalIdentifiersInFaceGroupWithLocalIdentifier:(NSString *)arg1 error:(id *)arg2;
- (NSSet *)facesForFaceLocalIdentifiers:(NSArray *)arg1 error:(id *)arg2;
- (unsigned long long)countOfClusteredFacesWithClusterSequenceNumbersInRange:(struct _NSRange)arg1;
- (unsigned long long)countOfClusteredFaces;
- (unsigned long long)countOfUnclusteredClusteringEligibleFaces;
- (unsigned long long)countOfClusteringEligibleFaces;
- (unsigned long long)countOfFaces;
@end

