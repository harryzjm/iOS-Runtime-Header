//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, NSManagedObjectID, NSMutableDictionary, NSMutableSet, NSString;

@interface PHChangeRequestHelper : NSObject
{
    _Bool _isMutated;
    _Bool _isNew;
    NSMutableDictionary *_mutations;
    NSMutableSet *_nilMutations;
    id _changeRequest;
    NSString *_uuid;
    NSString *_uuidSaveToken;
    NSManagedObjectID *_objectID;
    NSError *_placeholderRequestError;
}

+ (id)changeRequestWithXPCDict:(id)arg1 clientEntitlements:(id)arg2 clientName:(id)arg3 clientBundleID:(id)arg4 clientProcessID:(int)arg5 clientSender:(id)arg6;
+ (id)changeRequestForObject:(id)arg1;
@property(readonly, nonatomic) NSError *placeholderRequestError; // @synthesize placeholderRequestError=_placeholderRequestError;
@property(retain, nonatomic) NSManagedObjectID *objectID; // @synthesize objectID=_objectID;
@property(readonly, nonatomic) NSString *uuidSaveToken; // @synthesize uuidSaveToken=_uuidSaveToken;
@property(readonly, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) __weak id changeRequest; // @synthesize changeRequest=_changeRequest;
@property(readonly, nonatomic) NSMutableSet *nilMutations; // @synthesize nilMutations=_nilMutations;
@property(readonly, nonatomic) NSMutableDictionary *mutations; // @synthesize mutations=_mutations;
- (void).cxx_destruct;
- (id)description;
- (void)encodeToXPCDict:(id)arg1;
- (_Bool)applyMutationsToManagedObject:(id)arg1 error:(id *)arg2;
- (_Bool)validateMutationsToManagedObject:(id)arg1 error:(id *)arg2;
- (_Bool)allowMutationToManagedObject:(id)arg1 propertyKey:(id)arg2 error:(id *)arg3;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id *)arg2;
@property(nonatomic, getter=isNew) _Bool new;
@property(nonatomic, getter=isMutated) _Bool mutated;
- (void)didMutate;
- (_Bool)_validateOrGenerateUUIDWithClientEntitled:(_Bool)arg1 changeRequest:(id)arg2;
- (_Bool)_generateUUIDIfNecessary:(id *)arg1;
- (id)placeholderForCreatedObjectWithClass:(Class)arg1 changeRequest:(id)arg2;
- (_Bool)prepareForPhotoLibraryCheck:(id)arg1 error:(id *)arg2;
- (_Bool)prepareForServicePreflightCheck:(id *)arg1;
- (id)init;
- (id)initWithXPCDict:(id)arg1 changeRequest:(id)arg2 clientEntitlements:(id)arg3;
- (id)initForNewObjectWithUUID:(id)arg1 changeRequest:(id)arg2;
- (id)initForNewObjectWithChangeRequest:(id)arg1;
- (id)initWithUUID:(id)arg1 objectID:(id)arg2 changeRequest:(id)arg3;

@end

