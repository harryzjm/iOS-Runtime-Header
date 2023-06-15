//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMappingModel, NSMutableArray, NSMutableDictionary, NSSQLCore, NSSQLModel, NSSQLiteAdapter, NSSQLiteConnection, NSString;

__attribute__((visibility("hidden")))
@interface _NSSQLiteStoreMigrator : NSObject
{
    NSSQLCore *_store;
    NSSQLModel *_dstModel;
    NSSQLModel *_srcModel;
    NSSQLiteAdapter *_adapter;
    NSMappingModel *_mappingModel;
    NSSQLiteConnection *_connection;
    NSArray *_tableGenerationSQL;
    NSArray *_existingTableNames;
    NSMutableDictionary *_reindexedEntities;
    NSMutableDictionary *_reindexedPropertiesByEntity;
    NSMutableDictionary *_sourceToDestinationEntityMap;
    NSMutableDictionary *_addedEntityMigrations;
    NSMutableDictionary *_removedEntityMigrations;
    NSMutableDictionary *_transformedEntityMigrations;
    NSMutableDictionary *_copiedEntityMigrations;
    NSMutableDictionary *_tableMigrationDescriptionsByEntity;
    _Bool _hasPKTableChanges;
    NSMutableArray *_pkTableUpdateStatements;
    NSMutableDictionary *_attributeExtensionsToUpdate;
    NSMutableArray *_indexesToCreate;
    NSMutableArray *_indexesToDrop;
    NSMutableArray *_defaultValueStatements;
    NSMutableArray *_derivationsToDrop;
    NSMutableArray *_derivationsToRun;
    NSMutableDictionary *_historyMigrationPropertyDataForEntityCache;
    NSMutableArray *_cloudKitUpdateStatements;
    _Bool _hasCloudKitTables;
    _Bool _hasDeferredLightweightMigration;
    _Bool _forcedMigration;
    NSString *_destinationConfigurationForCloudKitValidation;
    NSString *_stageLabel;
}

+ (void)_setAnnotatesMigrationMetadata:(_Bool)arg1;
+ (_Bool)_annotatesMigrationMetadata;
@property(retain, nonatomic) NSString *destinationConfigurationForCloudKitValidation; // @synthesize destinationConfigurationForCloudKitValidation=_destinationConfigurationForCloudKitValidation;
- (void)dealloc;

@end

