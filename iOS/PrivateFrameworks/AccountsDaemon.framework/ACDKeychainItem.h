//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface ACDKeychainItem : NSObject
{
    NSMutableDictionary *_properties;
    NSMutableSet *_dirtyProperties;
    struct __CFData *_persistentRef;
}

+ (id)new;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct __CFData *persistentRef; // @synthesize persistentRef=_persistentRef;
- (id)debugDescription;
- (id)description;
- (void)_reloadProperties;
- (id)_modifiedProperties;
- (void)_clearDirtyProperties;
- (void)_markPropertyDirty:(id)arg1;
- (void)_setValue:(id)arg1 forProperty:(id)arg2;
@property(nonatomic) long long version;
- (_Bool)_setMetadata:(id)arg1 withError:(id *)arg2;
@property(copy, nonatomic) NSDictionary *metadata;
@property(nonatomic) _Bool synchronizable;
@property(copy, nonatomic) NSString *accessibility;
@property(copy, nonatomic) NSString *accessGroup;
@property(copy, nonatomic) NSString *service;
@property(copy, nonatomic) NSString *account;
- (id)_metadataWithError:(id *)arg1;
@property(readonly, nonatomic) _Bool hasCustomAccessControl;
@property(readonly, nonatomic) _Bool useDataProtectionKeychain;
- (void)migrateToKeyBagFromLegacy;
- (_Bool)save:(id *)arg1;
- (void)reload;
- (void)dealloc;
- (id)initWithPersistentRef:(struct __CFData *)arg1 properties:(id)arg2;
- (id)initWithPersistentRef:(struct __CFData *)arg1;
- (id)init;

@end

