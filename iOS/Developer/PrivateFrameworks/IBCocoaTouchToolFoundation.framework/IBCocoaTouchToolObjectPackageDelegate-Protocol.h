//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IBCocoaTouchToolObjectPackage, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;
@protocol IBNibKeyValuePair;

@protocol IBCocoaTouchToolObjectPackageDelegate
- (void)cocoaTouchToolObjectPackage:(IBCocoaTouchToolObjectPackage *)arg1 didSetPersistentToSessionObjects:(NSMutableSet *)arg2;
- (NSArray *)cocoaTouchToolObjectPackage:(IBCocoaTouchToolObjectPackage *)arg1 traitStorageListByProcessingTraitStorageLists:(NSArray *)arg2 objectIDsToObjects:(NSDictionary *)arg3;
- (void)cocoaTouchToolObjectPackage:(IBCocoaTouchToolObjectPackage *)arg1 didEstablishRelationshipsForObject:(id)arg2 globalMarshallingContext:(NSMutableDictionary *)arg3 populatingWarningMessages:(NSMutableArray *)arg4;
- (id <IBNibKeyValuePair>)cocoaTouchToolObjectPackage:(IBCocoaTouchToolObjectPackage *)arg1 keyValuePairWithObject:(id)arg2 keyPath:(NSString *)arg3 value:(id)arg4 globalMarshallingContext:(NSMutableDictionary *)arg5;
- (NSString *)cocoaTouchToolObjectPackage:(IBCocoaTouchToolObjectPackage *)arg1 effectiveToManyRelationshipKeyPathForObject:(id)arg2 relationshipKeyPath:(NSString *)arg3 globalMarshallingContext:(NSMutableDictionary *)arg4;
- (void)cocoaTouchToolObjectPackage:(IBCocoaTouchToolObjectPackage *)arg1 didInstantiateObject:(id)arg2 globalMarshallingContext:(NSMutableDictionary *)arg3;
- (NSArray *)cocoaTouchToolObjectPackage:(IBCocoaTouchToolObjectPackage *)arg1 connectionsByProcessingConnections:(NSArray *)arg2;
- (id)cocoaTouchToolObjectPackage:(IBCocoaTouchToolObjectPackage *)arg1 instantiateObjectOfClass:(Class)arg2 marshalledValues:(NSDictionary *)arg3 orderedKeys:(NSArray *)arg4 ignoredKeys:(NSMutableSet *)arg5 globalMarshallingContext:(NSMutableDictionary *)arg6;
- (Class)cocoaTouchToolObjectPackage:(IBCocoaTouchToolObjectPackage *)arg1 classForClassName:(NSString *)arg2;
- (id)cocoaTouchToolObjectPackage:(IBCocoaTouchToolObjectPackage *)arg1 applyMarshalledStateToObject:(id)arg2 values:(NSDictionary *)arg3 keys:(NSArray *)arg4 ignoredKeys:(NSMutableSet *)arg5 globalMarshallingContext:(NSMutableDictionary *)arg6;
@end

