//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MCMContainerClassPath, MCMPOSIXUser, MCMUserIdentity, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface MCMContainerPath : NSObject
{
    _Bool _exists;
    unsigned short _rootPOSIXMode;
    unsigned short _dataPOSIXMode;
    unsigned short _schemaPOSIXMode;
    NSString *_containerPathIdentifier;
    MCMContainerClassPath *_containerClassPath;
    MCMPOSIXUser *_rootPOSIXOwner;
    MCMPOSIXUser *_dataPOSIXOwner;
    MCMPOSIXUser *_schemaPOSIXOwner;
    NSString *_containerRootComponent;
    NSString *_containerDataComponent;
}

+ (id)_posixOwnerForContainerSubdirectories:(unsigned long long)arg1 user:(id)arg2;
+ (Class)_containerClassPathClass;
+ (id)containerPathFromURL:(id)arg1 containerClassPath:(id)arg2 relativePath:(id *)arg3;
+ (id)containerPathIdentifierForCodeSignIdentifier:(id)arg1 containerClass:(unsigned long long)arg2;
+ (id)containerPathForContainerClassPath:(id)arg1 containerPathIdentifier:(id)arg2;
+ (id)containerPathForUserIdentity:(id)arg1 containerClass:(unsigned long long)arg2 containerPathIdentifier:(id)arg3;
+ (id)containerPathForContainerIdentity:(id)arg1 containerPathIdentifier:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *containerDataComponent; // @synthesize containerDataComponent=_containerDataComponent;
@property(readonly, nonatomic) NSString *containerRootComponent; // @synthesize containerRootComponent=_containerRootComponent;
@property(nonatomic) _Bool exists; // @synthesize exists=_exists;
@property(readonly, nonatomic) unsigned short schemaPOSIXMode; // @synthesize schemaPOSIXMode=_schemaPOSIXMode;
@property(readonly, nonatomic) MCMPOSIXUser *schemaPOSIXOwner; // @synthesize schemaPOSIXOwner=_schemaPOSIXOwner;
@property(readonly, nonatomic) unsigned short dataPOSIXMode; // @synthesize dataPOSIXMode=_dataPOSIXMode;
@property(readonly, nonatomic) MCMPOSIXUser *dataPOSIXOwner; // @synthesize dataPOSIXOwner=_dataPOSIXOwner;
@property(readonly, nonatomic) unsigned short rootPOSIXMode; // @synthesize rootPOSIXMode=_rootPOSIXMode;
@property(readonly, nonatomic) MCMPOSIXUser *rootPOSIXOwner; // @synthesize rootPOSIXOwner=_rootPOSIXOwner;
@property(readonly, nonatomic) MCMContainerClassPath *containerClassPath; // @synthesize containerClassPath=_containerClassPath;
@property(readonly, nonatomic) NSString *containerPathIdentifier; // @synthesize containerPathIdentifier=_containerPathIdentifier;
- (_Bool)_createURLIfNecessary:(id)arg1 mode:(unsigned short)arg2 owner:(id)arg3 dataProtectionClass:(int)arg4 exists:(_Bool *)arg5 error:(id *)arg6;
- (_Bool)_obj1:(id)arg1 isEqualToObj2:(id)arg2;
@property(readonly, nonatomic, getter=isRandomized) _Bool randomized;
@property(readonly, nonatomic) NSURL *metadataURL;
@property(readonly, nonatomic) NSURL *containerDataURL;
@property(readonly, nonatomic) NSURL *containerRootURL;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToContainerPath:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (id)initWithContainerClassPath:(id)arg1 containerPathIdentifier:(id)arg2 containerRootComponent:(id)arg3 containerDataComponent:(id)arg4;
@property(readonly, nonatomic) NSURL *classURL;
@property(readonly, nonatomic) NSURL *categoryURL;
@property(readonly, nonatomic) NSURL *baseURL;
@property(readonly, nonatomic) unsigned long long containerClass;
@property(readonly, nonatomic) MCMUserIdentity *userIdentity;
@property(readonly, nonatomic) _Bool transient;
- (id)containerPathForRealPath;
- (_Bool)createDataURLIfNecessaryWithDataProtectionClass:(int)arg1 error:(id *)arg2;
- (_Bool)createIfNecessaryWithDataProtectionClass:(int)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

