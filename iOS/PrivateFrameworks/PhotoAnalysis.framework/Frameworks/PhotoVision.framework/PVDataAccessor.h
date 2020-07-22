//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol PVPersistenceDelegate;

@interface PVDataAccessor : NSObject
{
    unsigned int _activeFaceAlgorithmVersion;
    id <PVPersistenceDelegate> _persistenceDelegate;
}

@property unsigned int activeFaceAlgorithmVersion; // @synthesize activeFaceAlgorithmVersion=_activeFaceAlgorithmVersion;
@property(retain) id <PVPersistenceDelegate> persistenceDelegate; // @synthesize persistenceDelegate=_persistenceDelegate;
- (void).cxx_destruct;
- (_Bool)deleteEmptyGroupsAndReturnError:(id *)arg1;
- (_Bool)resetLibraryClustersWithCanceler:(id)arg1 error:(id *)arg2;
- (_Bool)removeAlgorithmicallyGroupedFacesWithLocalIdentifiers:(id)arg1 error:(id *)arg2;
- (id)keyFacesFromAlgorithmicGroupsContainingFacesWithClusterSequenceNumbers:(id)arg1 includeSingletons:(_Bool)arg2 error:(id *)arg3;
- (id)localIdentifiersOfKeyFacesFromAlgorithmicGroupsContainingFacesWithLocalIdentifiers:(id)arg1 error:(id *)arg2;
- (id)facesAlgorithmicallyGroupedWithFacesWithClusterSequenceNumbers:(id)arg1 includeSingletons:(_Bool)arg2 error:(id *)arg3;
- (id)localIdentifiersOfFacesAlgorithmicallyGroupedWithFacesWithLocalIdentifiers:(id)arg1 error:(id *)arg2;
- (id)groupedClusterSequenceNumbersOfFacesInFaceGroupsOfMinimumSize:(unsigned long long)arg1 error:(id *)arg2;
- (id)allAlgorithmicFaceGroups:(id *)arg1;
- (unsigned long long)countOfAlgorithmicFaceGroups;
- (id)rejectedFaceClusterSequenceNumbersForPersonWithLocalIdentifier:(id)arg1 error:(id *)arg2;
- (id)rejectedFaceLocalIdentifiersForPersonWithLocalIdentifier:(id)arg1 error:(id *)arg2;
- (id)rejectedFacesForPersonWithLocalIdentifier:(id)arg1 error:(id *)arg2;
- (id)facesForPersonWithLocalIdentifier:(id)arg1 error:(id *)arg2;
- (id)personWithFaceLocalIdentifier:(id)arg1 error:(id *)arg2;
- (id)personsForLocalIdentifiers:(id)arg1 error:(id *)arg2;
- (id)personForLocalIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)persistGeneratedFaceCrops:(id)arg1 error:(id *)arg2;
- (id)activeFaceprintsByFaceLocalIdentifiers:(id)arg1 error:(id *)arg2;
- (_Bool)unclusterFaces:(id)arg1 canceler:(id)arg2 error:(id *)arg3;
- (id)invalidFaceClusterSequenceNumbersInClusterSequenceNumbers:(id)arg1 canceler:(id)arg2 error:(id *)arg3;
- (_Bool)resetClusterSequenceNumberOfFacesWithLocalIdentifiers:(id)arg1 error:(id *)arg2;
- (id)unverifiedVisibleFacesFromFaceGroupContainingFacesWithClusterSequenceNumbers:(id)arg1 withFaceprintVersion:(unsigned int)arg2;
- (id)deterministicallyOrderedFaceIdentifiersWithLocalIdentifiers:(id)arg1 faceprintVersion:(unsigned int)arg2;
- (id)facesForClusteringWithLocalIdentifiers:(id)arg1 faceprintVersion:(unsigned int)arg2 excludeClustered:(_Bool)arg3;
- (id)unclusteredClusteringEligibleFaceLocalIdentifiers:(id *)arg1;
- (unsigned long long)countOfClusteredFacesWithClusterSequenceNumbersInRange:(struct _NSRange)arg1;
- (unsigned long long)countOfClusteredFaces;
- (unsigned long long)countOfClusteringEligibleFaces;
- (unsigned long long)countOfFaces;

@end

