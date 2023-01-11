//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface UNSBundleLibrarian : NSObject
{
    NSString *_bundleLibraryPath;
    NSMutableDictionary *_bundleToUUIDMap;
    NSMutableDictionary *_uuidToBundleMap;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (_Bool)_queue_saveDictionary:(id)arg1 atPath:(id)arg2;
- (id)_queue_dataAtPath:(id)arg1;
- (id)_queue_dictionaryAtPath:(id)arg1;
- (void)_queue_removeEntryForBundleIdentifier:(id)arg1;
- (void)_queue_addEntryForBundleIdentifier:(id)arg1 uniqueIdentifier:(id)arg2;
- (void)_queue_loadBundleLibrary;
- (void)_queue_loadBundleLibraryIfNeeded;
- (id)_queue_uniqueIdentifierForBundleIdentifier:(id)arg1;
- (id)_queue_bundleIdentifierForUniqueIdentifier:(id)arg1;
- (void)_removeBundleLibrary;
- (void)migrateRepositoriesInDirectory:(id)arg1;
- (void)removeMappingForBundleIdentifier:(id)arg1;
- (id)uniqueIdentifierForBundleIdentifier:(id)arg1;
- (id)bundleIdentifierForUniqueIdentifier:(id)arg1;
- (void)bootstrapLibraryForBundleIdentifiers:(id)arg1;
- (id)initWithDirectory:(id)arg1;

@end
