//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MobileInstallation/NSCopying-Protocol.h>
#import <MobileInstallation/NSSecureCoding-Protocol.h>

@class MIStoreMetadata, NSData, NSDictionary;

@interface MIInstallOptions : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _developerInstall;
    _Bool _systemAppInstall;
    _Bool _userInitiated;
    _Bool _skipWatchAppInstall;
    _Bool _skipBlacklist;
    _Bool _installForMigrator;
    _Bool _allowLocalProvisioned;
    _Bool _performAPFSClone;
    unsigned long long _installTargetType;
    unsigned long long _lsInstallType;
    MIStoreMetadata *_iTunesMetadata;
    NSData *_sinfData;
    NSData *_iTunesArtworkData;
    NSData *_geoJSONData;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool performAPFSClone; // @synthesize performAPFSClone=_performAPFSClone;
@property(nonatomic) _Bool allowLocalProvisioned; // @synthesize allowLocalProvisioned=_allowLocalProvisioned;
@property(nonatomic) _Bool installForMigrator; // @synthesize installForMigrator=_installForMigrator;
@property(nonatomic) _Bool skipBlacklist; // @synthesize skipBlacklist=_skipBlacklist;
@property(nonatomic) _Bool skipWatchAppInstall; // @synthesize skipWatchAppInstall=_skipWatchAppInstall;
@property(copy, nonatomic) NSData *geoJSONData; // @synthesize geoJSONData=_geoJSONData;
@property(copy, nonatomic) NSData *iTunesArtworkData; // @synthesize iTunesArtworkData=_iTunesArtworkData;
@property(copy, nonatomic) NSData *sinfData; // @synthesize sinfData=_sinfData;
@property(copy, nonatomic) MIStoreMetadata *iTunesMetadata; // @synthesize iTunesMetadata=_iTunesMetadata;
@property(nonatomic) unsigned long long lsInstallType; // @synthesize lsInstallType=_lsInstallType;
@property(nonatomic, getter=isUserInitiated) _Bool userInitiated; // @synthesize userInitiated=_userInitiated;
@property(nonatomic, getter=isSystemAppInstall) _Bool systemAppInstall; // @synthesize systemAppInstall=_systemAppInstall;
@property(nonatomic, getter=isDeveloperInstall) _Bool developerInstall; // @synthesize developerInstall=_developerInstall;
@property(nonatomic) unsigned long long installTargetType; // @synthesize installTargetType=_installTargetType;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *legacyOptionsDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLegacyOptionsDictionary:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

