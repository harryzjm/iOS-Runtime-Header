//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MCMConcreteContainerIdentityForLibsystem, MCMContainerPath, MCMUserIdentity, MCMUserIdentityCache, NSNumber, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface MCMMetadataMinimal : NSObject
{
    MCMContainerPath *_containerPath;
    NSNumber *_schemaVersion;
    MCMConcreteContainerIdentityForLibsystem *_containerIdentity;
    MCMUserIdentityCache *_userIdentityCache;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) MCMUserIdentityCache *userIdentityCache; // @synthesize userIdentityCache=_userIdentityCache;
@property(readonly, nonatomic) MCMConcreteContainerIdentityForLibsystem *containerIdentity; // @synthesize containerIdentity=_containerIdentity;
@property(readonly, nonatomic) NSNumber *schemaVersion; // @synthesize schemaVersion=_schemaVersion;
@property(readonly, nonatomic) MCMContainerPath *containerPath; // @synthesize containerPath=_containerPath;
- (_Bool)_persisted;
- (void)_clearPersistedStatus;
- (_Bool)_initFromMetadataInDictionary:(id)arg1 containerPath:(id)arg2 userIdentity:(id)arg3 containerClass:(unsigned long long)arg4 fsNode:(id)arg5 fileURL:(id)arg6 userIdentityCache:(id)arg7 error:(id *)arg8;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *shortDescription;
@property(readonly, copy) NSString *debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)metadataByChangingContainerIdentity:(id)arg1;
- (id)metadataByChangingSchemaVersion:(id)arg1;
- (id)metadataByChangingUUID:(id)arg1;
- (id)metadataByChangingContainerPath:(id)arg1;
- (id)metadataBySettingTransient:(_Bool)arg1;
@property(readonly, nonatomic) _Bool existed;
@property(readonly, nonatomic) unsigned int platform;
@property(readonly, nonatomic) MCMUserIdentity *userIdentity;
@property(readonly, nonatomic) _Bool transient;
@property(readonly, nonatomic) unsigned long long containerClass;
@property(readonly, nonatomic) NSUUID *uuid;
@property(readonly, nonatomic) NSString *identifier;
- (struct container_object_s *)createLibsystemContainerWithError:(id *)arg1;
- (id)initByReadingAndValidatingMetadataAtFileURL:(id)arg1 containerPath:(id)arg2 userIdentity:(id)arg3 containerClass:(unsigned long long)arg4 userIdentityCache:(id)arg5 error:(id *)arg6;
- (id)initByReadingAndValidatingMetadataAtContainerPath:(id)arg1 userIdentity:(id)arg2 containerClass:(unsigned long long)arg3 userIdentityCache:(id)arg4 error:(id *)arg5;
- (id)initWithContainerIdentity:(id)arg1 containerPath:(id)arg2 schemaVersion:(id)arg3 userIdentityCache:(id)arg4;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

