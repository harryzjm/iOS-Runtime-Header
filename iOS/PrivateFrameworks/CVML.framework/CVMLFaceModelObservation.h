//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CVML/NSCoding-Protocol.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface CVMLFaceModelObservation <NSCoding>
{
    _Bool mIsModelBuilt;
    unsigned int mModelVersion;
    unsigned int mModelMinorVersion;
    unsigned int mEnrolledFaceCount;
    NSString *mFaceprintType;
    NSMutableDictionary *mUUIDToInternalIdMap;
    NSMutableArray *mInternalIdToUUIDMap;
    struct vector<int, std::__1::allocator<int>> mFaceprintCountPerIdentity;
    struct shared_ptr<vision::mod::ModelValues> mModelValues;
    struct map<(anonymous namespace)::Faceprint, int, std::__1::less<(anonymous namespace)::Faceprint>, std::__1::allocator<std::__1::pair<const (anonymous namespace)::Faceprint, int>>> mFaceprintToInternalIdMap;
    NSArray *_modelLabels;
}

@property(retain) NSArray *modelLabels; // @synthesize modelLabels=_modelLabels;
- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned int)algorithmMinorVersion;
- (unsigned int)algorithmMajorVersion;
- (id)identitiesModelCanIdentify;
- (id)identitiesEnrolledInModel;
- (id)createDictionaryRepresentationOfModelValuesNoCopy;
- (_Bool)removeIdentity:(id)arg1;
- (_Bool)removeFace:(id)arg1;
- (_Bool)addFace:(id)arg1 error:(id *)arg2;
- (id)getUUIDForInternalId:(int)arg1;
- (void)setIsModelBuilt:(_Bool)arg1;
- (_Bool)isModelReadyToIdentifyFaces;
- (_Bool)canBuildModel;
- (int)enrolledFaceCountForIdentity:(id)arg1;
- (int)enrolledIdentitiesCount;
- (int)facePrintLength;
- (int)maxFaceprintCountPerIdentity;
- (int)minRequiredFaceprintsPerIdentityCount;
- (int)maxIdentitiesCount;
- (int)minRequiredIdentitiesCount;
- (int)enrolledFaceCount;
- (_Bool)setVIPAlgorithmState:(void *)arg1;
- (const void *)vipAlgorithmState;
- (id)flattenedFaceIdCache;
- (id)flattenedFaceprintCache;
- (unsigned int)modelVersion;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)setModelValuesFromDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

