//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <InstallCoordination/NSSecureCoding-Protocol.h>

@class IXPlaceholderSeed, MIStoreMetadata, NSString;

@interface IXPlaceholder <NSSecureCoding>
{
}

+ (_Bool)supportsSecureCoding;
+ (id)_placeholderForBundle:(id)arg1 client:(unsigned long long)arg2 withParent:(id)arg3 installType:(unsigned long long)arg4 metadata:(id)arg5 error:(id *)arg6;
+ (id)placeholderForInstallable:(id)arg1 client:(unsigned long long)arg2 installType:(unsigned long long)arg3 metadata:(id)arg4 error:(id *)arg5;
+ (id)_iconDataForBundle:(struct __CFBundle *)arg1 error:(id *)arg2;
+ (id)placeholderForRemovableSystemAppWithBundleID:(id)arg1 client:(unsigned long long)arg2 installType:(unsigned long long)arg3 error:(id *)arg4;
- (id)placeholderAttributesWithError:(id *)arg1;
- (_Bool)setPlaceholderAttributes:(id)arg1 error:(id *)arg2;
- (_Bool)launchProhibited:(_Bool *)arg1 error:(id *)arg2;
- (_Bool)setLaunchProhibited:(_Bool)arg1 error:(id *)arg2;
- (id)sinfDataWithError:(id *)arg1;
- (_Bool)setSinfData:(id)arg1 error:(id *)arg2;
- (id)metadataWithError:(id *)arg1;
- (_Bool)setMetadata:(id)arg1 error:(id *)arg2;
@property(copy, nonatomic) MIStoreMetadata *metadata; // @dynamic metadata;
@property(readonly, nonatomic) unsigned long long installType; // @dynamic installType;
@property(readonly, nonatomic) unsigned long long placeholderType; // @dynamic placeholderType;
- (void)setBundleID:(id)arg1;
@property(readonly, copy, nonatomic) NSString *bundleID; // @dynamic bundleID;
- (void)setBundleName:(id)arg1;
@property(readonly, copy, nonatomic) NSString *bundleName; // @dynamic bundleName;
- (Class)seedClass;
- (id)initWithSeed:(id)arg1;
- (_Bool)setConfigurationCompleteWithError:(id *)arg1;
@property(readonly, nonatomic) _Bool hasPlugInPlaceholderPromises;
- (id)plugInPlaceholderPromisesWithError:(id *)arg1;
- (_Bool)setPlugInPlaceholderPromises:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) _Bool hasEntitlementsPromise;
- (id)entitlementsPromiseWithError:(id *)arg1;
- (_Bool)setEntitlementsPromise:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) _Bool hasIconPromise;
- (id)iconPromiseWithError:(id *)arg1;
- (_Bool)setIconPromise:(id)arg1 error:(id *)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)_doInitWithBundleName:(id)arg1 bundleID:(id)arg2 installType:(unsigned long long)arg3 isPlugin:(_Bool)arg4;
- (id)initPlugInPlaceholderWithBundleName:(id)arg1 bundleID:(id)arg2 parentPlaceholder:(id)arg3 client:(unsigned long long)arg4;
- (id)initAppPlaceholderWithBundleName:(id)arg1 bundleID:(id)arg2 installType:(unsigned long long)arg3 client:(unsigned long long)arg4;

// Remaining properties
@property(retain, nonatomic) IXPlaceholderSeed *seed; // @dynamic seed;

@end
