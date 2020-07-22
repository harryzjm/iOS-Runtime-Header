//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Photos/PHInsertChangeRequest-Protocol.h>
#import <Photos/PHUpdateChangeRequest-Protocol.h>

@class NSManagedObjectID, NSString, PHChangeRequestHelper, PHFaceprint, PHObjectPlaceholder;

@interface PHFaceChangeRequest : NSObject <PHInsertChangeRequest, PHUpdateChangeRequest>
{
    _Bool _clientEntitled;
    NSString *_clientName;
    int _clientProcessID;
    PHFaceprint *_faceprint;
    _Bool _didSetFaceprint;
    _Bool _shouldClearFaceCropGenerationState;
    PHChangeRequestHelper *_helper;
}

+ (_Bool)canGenerateUUIDWithoutEntitlements;
+ (void)deleteFaces:(id)arg1;
+ (id)changeRequestForFace:(id)arg1;
+ (id)creationRequestForFace;
@property(nonatomic) _Bool shouldClearFaceCropGenerationState; // @synthesize shouldClearFaceCropGenerationState=_shouldClearFaceCropGenerationState;
@property(readonly, nonatomic) PHChangeRequestHelper *helper; // @synthesize helper=_helper;
@property(readonly, nonatomic) int clientProcessID; // @synthesize clientProcessID=_clientProcessID;
@property(readonly, nonatomic) NSString *clientName; // @synthesize clientName=_clientName;
@property(readonly, nonatomic, getter=isClientEntitled) _Bool clientEntitled; // @synthesize clientEntitled=_clientEntitled;
- (void).cxx_destruct;
@property(retain, nonatomic) PHFaceprint *faceprint;
- (void)didMutate;
@property(readonly, nonatomic) NSManagedObjectID *objectID;
@property(readonly, nonatomic) NSString *uuid;
@property(readonly, getter=isMutated) _Bool mutated;
@property(readonly, getter=isNew) _Bool new;
- (void)performTransactionCompletionHandlingInPhotoLibrary:(id)arg1;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id *)arg2;
- (_Bool)applyMutationsToManagedObject:(id)arg1 error:(id *)arg2;
- (_Bool)validateInsertIntoPhotoLibrary:(id)arg1 error:(id *)arg2;
- (_Bool)validateMutationsToManagedObject:(id)arg1 error:(id *)arg2;
- (_Bool)allowMutationToManagedObject:(id)arg1 propertyKey:(id)arg2 error:(id *)arg3;
@property(readonly, nonatomic) NSString *managedEntityName;
@property(copy, nonatomic) id adjustmentVersion;
@property(nonatomic) long long qualityMeasure;
@property(nonatomic) long long clusterSequenceNumber;
@property(nonatomic) long long faceAlgorithmVersion;
@property(nonatomic) double posePitch;
@property(nonatomic) double poseYaw;
@property(nonatomic) double poseRoll;
@property(nonatomic) double expressionScore3;
@property(nonatomic) double expressionScore2;
@property(nonatomic) double expressionScore1;
@property(nonatomic) long long expressionType3;
@property(nonatomic) long long expressionType2;
@property(nonatomic) long long expressionType1;
@property(nonatomic) double expressionConfidence;
@property(nonatomic) long long nameSource;
@property(nonatomic, getter=isRightEyeClosed) _Bool rightEyeClosed;
@property(nonatomic, getter=isLeftEyeClosed) _Bool leftEyeClosed;
@property(nonatomic) double blurScore;
@property(nonatomic) _Bool hasSmile;
@property(nonatomic) _Bool manual;
@property(nonatomic, getter=isInTrash) _Bool inTrash;
@property(nonatomic, getter=isHidden) _Bool hidden;
@property(nonatomic) double mouthY;
@property(nonatomic) double mouthX;
@property(nonatomic) double rightEyeY;
@property(nonatomic) double rightEyeX;
@property(nonatomic) double leftEyeY;
@property(nonatomic) double leftEyeX;
@property(nonatomic) long long sourceHeight;
@property(nonatomic) long long sourceWidth;
@property(nonatomic) double centerY;
@property(nonatomic) double centerX;
@property(nonatomic) double size;
@property(readonly, nonatomic) PHObjectPlaceholder *placeholderForCreatedFace;
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
