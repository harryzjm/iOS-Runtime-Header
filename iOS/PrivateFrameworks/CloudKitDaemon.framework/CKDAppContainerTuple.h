//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKContainerID, CKDApplicationID, NSString;

@interface CKDAppContainerTuple : NSObject <NSCopying>
{
    _Bool _useZoneWidePCS;
    _Bool _bypassPCSEncryption;
    _Bool _forceEnableReadOnlyManatee;
    _Bool _wantsSiloedContext;
    CKDApplicationID *_applicationID;
    CKContainerID *_containerID;
    NSString *_applicationContainerPath;
    NSString *_personaID;
    NSString *_containerEncryptionServiceName;
    unsigned long long _mmcsEncryptionSupport;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long mmcsEncryptionSupport; // @synthesize mmcsEncryptionSupport=_mmcsEncryptionSupport;
@property(nonatomic) _Bool wantsSiloedContext; // @synthesize wantsSiloedContext=_wantsSiloedContext;
@property(retain, nonatomic) NSString *containerEncryptionServiceName; // @synthesize containerEncryptionServiceName=_containerEncryptionServiceName;
@property(nonatomic) _Bool forceEnableReadOnlyManatee; // @synthesize forceEnableReadOnlyManatee=_forceEnableReadOnlyManatee;
@property(nonatomic) _Bool bypassPCSEncryption; // @synthesize bypassPCSEncryption=_bypassPCSEncryption;
@property(nonatomic) _Bool useZoneWidePCS; // @synthesize useZoneWidePCS=_useZoneWidePCS;
@property(readonly, nonatomic) NSString *personaID; // @synthesize personaID=_personaID;
@property(readonly, nonatomic) NSString *applicationContainerPath; // @synthesize applicationContainerPath=_applicationContainerPath;
@property(readonly, nonatomic) CKContainerID *containerID; // @synthesize containerID=_containerID;
@property(readonly, nonatomic) CKDApplicationID *applicationID; // @synthesize applicationID=_applicationID;
- (id)description;
- (id)CKPropertiesDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithApplicationID:(id)arg1 applicationContainerPath:(id)arg2 containerID:(id)arg3 personaID:(id)arg4;
- (id)initWithApplicationID:(id)arg1 containerID:(id)arg2 personaID:(id)arg3;
- (id)initWithApplicationBundleID:(id)arg1 containerID:(id)arg2 personaID:(id)arg3;

@end
