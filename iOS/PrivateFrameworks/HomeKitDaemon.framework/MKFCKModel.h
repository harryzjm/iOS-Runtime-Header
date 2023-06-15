//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSNumber, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface MKFCKModel
{
    NSNumber *_canonical;
}

+ (id)canonicalModelForModels:(id)arg1 context:(id)arg2;
+ (id)createWithLocalModel:(id)arg1 context:(id)arg2;
+ (id)fetchWithLocalModel:(id)arg1 context:(id)arg2;
+ (id)logCategory;
+ (id)modelWithModelID:(id)arg1 context:(id)arg2 error:(id *)arg3;
+ (id)modelWithObjectID:(id)arg1 context:(id)arg2 error:(id *)arg3;
+ (id)predicateWithModelIDs:(id)arg1;
+ (id)predicateWithModelID:(id)arg1;
+ (id)appendDefaultPreloadedPropertiesTo:(id)arg1;
+ (id)defaultPreloadedProperties;
+ (id)rootKeyPath;
+ (unsigned long long)cloudStoreTypes;
- (void).cxx_destruct;
- (id)fetchEquivalentModels:(id *)arg1;
- (id)predicateMatchingEquivalentModels;
- (long long)ensureCanonicalModel;
- (_Bool)isDeletedLocallyWithContext:(id)arg1;
- (id)createLocalModelWithContext:(id)arg1;
- (id)fetchLocalModelWithContext:(id)arg1;
- (void)willSave;
- (void)didTurnIntoFault;
- (void)awakeFromInsert;
- (id)hmd_debugIdentifier;
- (id)redactedDescription;
- (id)debugDescription;
- (id)description;
- (id)relationshipForLocalName:(id)arg1 localModel:(id)arg2;
- (_Bool)copyPropertiesFromLocalModel:(id)arg1 context:(id)arg2;
- (_Bool)copyPropertiesIntoLocalModel:(id)arg1 context:(id)arg2;
- (void)convertToFakeModel;
@property(readonly, nonatomic, getter=isFake) _Bool fake;
@property(readonly, nonatomic) _Bool shouldSkipValidationDuringImport;
- (_Bool)validateFlags:(id *)arg1 error:(id *)arg2;
- (_Bool)validateWriterVersion:(id *)arg1 error:(id *)arg2;
- (_Bool)validateWriterTimestamp:(id *)arg1 error:(id *)arg2;
- (_Bool)validateModelID:(id *)arg1 error:(id *)arg2;

// Remaining properties
@property(copy, nonatomic) NSUUID *flags; // @dynamic flags;
@property(readonly, nonatomic) NSUUID *homeModelID; // @dynamic homeModelID;
@property(copy, nonatomic) NSUUID *modelID; // @dynamic modelID;
@property(copy, nonatomic) NSUUID *primitiveFlags; // @dynamic primitiveFlags;
@property(copy, nonatomic) NSDate *writerTimestamp; // @dynamic writerTimestamp;
@property(copy, nonatomic) NSString *writerVersion; // @dynamic writerVersion;

@end

