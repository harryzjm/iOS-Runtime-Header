//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MCMPOSIXUser, MCMUserIdentity, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface MCMContainerClassPath : NSObject
{
    _Bool _caseSensitive;
    _Bool _caseSensitiveDetermined;
    _Bool _supportsDataProtection;
    _Bool _supportsDataProtectionDetermined;
    _Bool _classURLCreated;
    _Bool _symlinkClassURLCreated;
    NSURL *_homeDirectoryURL;
    _Bool _exists;
    unsigned short _posixMode;
    NSURL *_baseURL;
    NSURL *_categoryURL;
    NSURL *_classURL;
    MCMPOSIXUser *_posixOwner;
    MCMUserIdentity *_userIdentity;
    unsigned long long _containerClass;
    NSString *_categoryComponent;
    NSString *_classComponent;
}

+ (id)_baseURLForUserIdentity:(id)arg1 containerClass:(unsigned long long)arg2;
+ (id)_baseURLForUserIdentity:(id)arg1;
+ (id)_classComponentForContainerClass:(unsigned long long)arg1;
+ (id)_categoryComponentForContainerClass:(unsigned long long)arg1;
+ (unsigned short)_modeForContainerClass:(unsigned long long)arg1;
+ (_Bool)_inLibraryRepairBlock_createURLIfNecessary:(id)arg1 mode:(unsigned short)arg2 owner:(id)arg3 dataProtectionClass:(int)arg4 exists:(_Bool *)arg5 error:(id *)arg6;
+ (id)posixOwnerForContainerClass:(unsigned long long)arg1 user:(id)arg2;
+ (id)containerPathForUserIdentity:(id)arg1 containerClass:(unsigned long long)arg2;
+ (id)containerPathForContainerIdentity:(id)arg1;
+ (id)containerPathTypeClasses;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *classComponent; // @synthesize classComponent=_classComponent;
@property(readonly, nonatomic) NSString *categoryComponent; // @synthesize categoryComponent=_categoryComponent;
@property(readonly, nonatomic) unsigned long long containerClass; // @synthesize containerClass=_containerClass;
@property(readonly, nonatomic) MCMUserIdentity *userIdentity; // @synthesize userIdentity=_userIdentity;
@property(readonly, nonatomic) unsigned short posixMode; // @synthesize posixMode=_posixMode;
@property(readonly, nonatomic) MCMPOSIXUser *posixOwner; // @synthesize posixOwner=_posixOwner;
@property(readonly, nonatomic) NSURL *classURL; // @synthesize classURL=_classURL;
@property(readonly, nonatomic) NSURL *categoryURL; // @synthesize categoryURL=_categoryURL;
@property(readonly, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
- (_Bool)_createURLIfNecessary:(id)arg1 mode:(unsigned short)arg2 owner:(id)arg3 dataProtectionClass:(int)arg4 error:(id *)arg5;
- (_Bool)_obj1:(id)arg1 isEqualToObj2:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToContainerClassPath:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (id)initWithBaseURL:(id)arg1 categoryComponent:(id)arg2 classComponent:(id)arg3 containerClass:(unsigned long long)arg4 POSIXOwner:(id)arg5 POSIXMode:(unsigned short)arg6 userIdentity:(id)arg7;
@property(nonatomic) _Bool exists; // @synthesize exists=_exists;
@property(readonly, nonatomic) _Bool supportsDataProtection;
@property(readonly, nonatomic, getter=isCaseSensitive) _Bool caseSensitive;
- (_Bool)createIfNecessaryWithError:(id *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

