//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSPersistentStore, NSStagedMigrationManager, NSString, NSURL, PFUbiquitySetupAssistant;

__attribute__((visibility("hidden")))
@interface NSPersistentStoreCoordinatorMigrationContext : NSObject
{
    _Bool _forceMigration;
    NSURL *_storeURL;
    NSString *_storeType;
    NSString *_configurationName;
    NSDictionary *_options;
    NSDictionary *_metadata;
    NSPersistentStore *_migratedStore;
    NSStagedMigrationManager *_stagedMigrationManager;
    PFUbiquitySetupAssistant *_ubiquitySetupAssistant;
}

@property(retain, nonatomic) PFUbiquitySetupAssistant *ubiquitySetupAssistant; // @synthesize ubiquitySetupAssistant=_ubiquitySetupAssistant;
@property(retain, nonatomic) NSStagedMigrationManager *stagedMigrationManager; // @synthesize stagedMigrationManager=_stagedMigrationManager;
@property(retain, nonatomic) NSPersistentStore *migratedStore; // @synthesize migratedStore=_migratedStore;
@property(nonatomic) _Bool forceMigration; // @synthesize forceMigration=_forceMigration;
@property(retain, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(retain, nonatomic) NSString *configurationName; // @synthesize configurationName=_configurationName;
@property(readonly, nonatomic) NSString *storeType; // @synthesize storeType=_storeType;
@property(readonly, nonatomic) NSURL *storeURL; // @synthesize storeURL=_storeURL;
- (void)dealloc;
- (id)initWithStoreURL:(id)arg1 type:(id)arg2 options:(id)arg3;

@end

