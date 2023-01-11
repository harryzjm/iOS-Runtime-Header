//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Photos/PHInsertChangeRequest-Protocol.h>
#import <Photos/PHUpdateChangeRequest-Protocol.h>

@class NSData, NSManagedObjectID, NSString, PHChangeRequestHelper, PHObjectPlaceholder, PHRelationshipChangeRequestHelper;

@interface PHFaceCropChangeRequest : NSObject <PHInsertChangeRequest, PHUpdateChangeRequest>
{
    _Bool _clientEntitled;
    NSString *_clientName;
    int _clientProcessID;
    PHChangeRequestHelper *_helper;
    NSString *_originatingFaceUUID;
    PHRelationshipChangeRequestHelper *_faceHelper;
    PHRelationshipChangeRequestHelper *_personHelper;
}

+ (_Bool)canGenerateUUIDWithoutEntitlements;
+ (void)deleteFaceCrops:(id)arg1;
+ (id)creationRequestsForFaceCropsWithOriginatingFace:(id)arg1 resourceData:(id)arg2;
+ (id)_creationRequestForFaceCropWithOriginatingFace:(id)arg1 resourceData:(id)arg2 person:(id)arg3;
+ (id)_creationRequestForFaceCropWithOriginatingFace:(id)arg1 resourceData:(id)arg2 personLocalIdentifier:(id)arg3;
+ (id)changeRequestForFaceCrop:(id)arg1;
@property(readonly, nonatomic) PHRelationshipChangeRequestHelper *personHelper; // @synthesize personHelper=_personHelper;
@property(readonly, nonatomic) PHRelationshipChangeRequestHelper *faceHelper; // @synthesize faceHelper=_faceHelper;
@property(copy, nonatomic) NSString *originatingFaceUUID; // @synthesize originatingFaceUUID=_originatingFaceUUID;
@property(readonly, nonatomic) PHChangeRequestHelper *helper; // @synthesize helper=_helper;
@property(readonly, nonatomic) int clientProcessID; // @synthesize clientProcessID=_clientProcessID;
@property(readonly, nonatomic) NSString *clientName; // @synthesize clientName=_clientName;
@property(readonly, nonatomic, getter=isClientEntitled) _Bool clientEntitled; // @synthesize clientEntitled=_clientEntitled;
- (void).cxx_destruct;
@property(readonly, getter=isMutated) _Bool mutated;
- (_Bool)applyMutationsToManagedObject:(id)arg1 error:(id *)arg2;
- (_Bool)validateMutationsToManagedObject:(id)arg1 error:(id *)arg2;
- (_Bool)allowMutationToManagedObject:(id)arg1 propertyKey:(id)arg2 error:(id *)arg3;
@property(readonly, getter=isNew) _Bool new;
- (void)performTransactionCompletionHandlingInPhotoLibrary:(id)arg1;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id *)arg2;
- (_Bool)validateInsertIntoPhotoLibrary:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) NSManagedObjectID *objectID;
@property(readonly, nonatomic) NSString *uuid;
@property(readonly, nonatomic) NSString *managedEntityName;
- (_Bool)prepareForPhotoLibraryCheck:(id)arg1 error:(id *)arg2;
- (_Bool)prepareForServicePreflightCheck:(id *)arg1;
- (void)encodeToXPCDict:(id)arg1;
- (id)initWithXPCDict:(id)arg1 clientEntitlements:(id)arg2 clientName:(id)arg3 clientBundleID:(id)arg4 clientProcessID:(int)arg5;
@property(nonatomic) short state;
@property(retain, nonatomic) NSData *resourceData;
- (void)setFace:(id)arg1;
- (id)_mutablePersonObjectIDsAndUUIDs;
- (id)_mutableFaceObjectIDsAndUUIDs;
- (void)_preparePersonHelperIfNeeded;
- (void)_prepareFaceHelperIfNeeded;
- (void)didMutate;
@property(readonly, nonatomic) PHObjectPlaceholder *placeholderForCreatedFaceCrop;
- (id)initWithUUID:(id)arg1 objectID:(id)arg2;
- (id)initForNewObject;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

