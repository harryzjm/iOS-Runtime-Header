//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Photos/PHInsertChangeRequest-Protocol.h>
#import <Photos/PHUpdateChangeRequest-Protocol.h>

@class NSManagedObjectID, NSString, PHChangeRequestHelper, PHFaceGroup, PHObjectPlaceholder, PHRelationshipChangeRequestHelper;

@interface PHFaceGroupChangeRequest : NSObject <PHInsertChangeRequest, PHUpdateChangeRequest>
{
    PHFaceGroup *_originalFaceGroup;
    _Bool _clientEntitled;
    NSString *_clientName;
    int _clientProcessID;
    PHChangeRequestHelper *_helper;
    PHRelationshipChangeRequestHelper *_facesHelper;
    PHRelationshipChangeRequestHelper *_keyFaceHelper;
}

+ (_Bool)canGenerateUUIDWithoutEntitlements;
+ (void)deleteFaceGroups:(id)arg1;
+ (id)changeRequestForFaceGroup:(id)arg1;
+ (id)creationRequestForFaceGroup;
@property(readonly, nonatomic) PHRelationshipChangeRequestHelper *keyFaceHelper; // @synthesize keyFaceHelper=_keyFaceHelper;
@property(readonly, nonatomic) PHRelationshipChangeRequestHelper *facesHelper; // @synthesize facesHelper=_facesHelper;
@property(readonly, nonatomic) PHChangeRequestHelper *helper; // @synthesize helper=_helper;
@property(readonly, nonatomic) int clientProcessID; // @synthesize clientProcessID=_clientProcessID;
@property(readonly, nonatomic) NSString *clientName; // @synthesize clientName=_clientName;
@property(readonly, nonatomic, getter=isClientEntitled) _Bool clientEntitled; // @synthesize clientEntitled=_clientEntitled;
- (void).cxx_destruct;
@property(nonatomic) long long personBuilderState;
- (void)setKeyFace:(id)arg1;
- (void)_setOriginalFaceGroup:(id)arg1;
- (void)removeFaces:(id)arg1;
- (void)addFaces:(id)arg1;
- (id)_mutableKeyFaceObjectIDsAndUUIDs;
- (id)_mutableObjectIDsAndUUIDs;
- (void)_prepareFacesHelperIfNeeded;
- (void)_prepareKeyFaceHelperIfNeeded;
- (id)_existentFaceObjectIDs;
- (void)didMutate;
@property(readonly, nonatomic) NSManagedObjectID *objectID;
@property(readonly, nonatomic) NSString *uuid;
@property(readonly, getter=isMutated) _Bool mutated;
@property(readonly, getter=isNew) _Bool new;
- (void)performTransactionCompletionHandlingInPhotoLibrary:(id)arg1;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id *)arg2;
- (void)_prefetchFacesAndPersonRelationship:(id)arg1 inContext:(id)arg2;
- (_Bool)applyMutationsToManagedObject:(id)arg1 error:(id *)arg2;
- (_Bool)validateInsertIntoPhotoLibrary:(id)arg1 error:(id *)arg2;
- (_Bool)validateMutationsToManagedObject:(id)arg1 error:(id *)arg2;
- (_Bool)allowMutationToManagedObject:(id)arg1 propertyKey:(id)arg2 error:(id *)arg3;
@property(readonly, nonatomic) NSString *managedEntityName;
@property(nonatomic) long long unnamedFaceCount;
@property(readonly, nonatomic) PHObjectPlaceholder *placeholderForCreatedFaceGroup;
- (_Bool)prepareForServicePreflightCheck:(id *)arg1;
- (void)encodeToXPCDict:(id)arg1;
- (id)initWithXPCDict:(id)arg1 clientEntitlements:(id)arg2 clientName:(id)arg3 clientBundleID:(id)arg4 clientProcessID:(int)arg5;
- (id)initWithUUID:(id)arg1 objectID:(id)arg2;
- (id)initForNewObject;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

