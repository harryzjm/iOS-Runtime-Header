//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSEntityDescription, NSManagedObjectContext, NSManagedObjectModel, NSPersistentStoreCoordinator, NSString, NSURL;

@interface MecabraCoreDataController : NSObject
{
    NSEntityDescription *_entityDescription;
    NSURL *_localURL;
    NSString *_localURLLastPartOfName;
    NSManagedObjectModel *_managedObjectModel;
    NSManagedObjectContext *_managedObjectContext;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    NSURL *_storeURL;
    NSString *_type;
    NSArray *_storedElementsForMerge;
}

+ (void)resetDatabaseWithType:(id)arg1 URL:(id)arg2;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSURL *storeURL; // @synthesize storeURL=_storeURL;
@property(retain, nonatomic) NSArray *storedElementsForMerge; // @synthesize storedElementsForMerge=_storedElementsForMerge;
@property(retain, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
@property(retain, nonatomic) NSManagedObjectModel *managedObjectModel; // @synthesize managedObjectModel=_managedObjectModel;
@property(retain, nonatomic) NSURL *localURL; // @synthesize localURL=_localURL;
@property(readonly, nonatomic) NSEntityDescription *entityDescription; // @synthesize entityDescription=_entityDescription;
- (void)save;
- (void)sendRemoteNotification;
- (void)clearStoredMergeEntries;
- (id)entriesToMerge;
- (id)coreDataUbiquityFolderURLforStore:(id)arg1;
- (id)entriesFromStrippedStoreURL:(id)arg1;
- (_Bool)stripUbiquitousInformationFromStore:(id)arg1;
- (id)locallyPresentUbiquitousFiles;
- (id)entityDescriptionForContext:(id)arg1;
@property(retain, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator; // @synthesize persistentStoreCoordinator=_persistentStoreCoordinator;
- (void)prepareURLForDatabaseFile:(id)arg1;
- (_Bool)shouldSyncDatabase;
- (id)newPersistentStoreWithURL:(id)arg1 ubiquityContainerIdentifier:(id)arg2 managedObjectModel:(id)arg3;
@property(readonly, nonatomic) NSURL *localInfoPlistURL;
@property(readonly, nonatomic) NSURL *localStoreURL;
- (id)databaseName;
- (void)dealloc;
- (id)initWithType:(id)arg1 URL:(id)arg2;
- (void)logMessage:(id)arg1;
- (void)logEntry:(id)arg1 operationType:(id)arg2 extraInformation:(id)arg3;
- (_Bool)isLogging;
- (void)setValuesForEntry:(id)arg1 uniquingKeys:(id)arg2;
- (id)removeDuplicatesForEntry:(id)arg1 uniquingKeys:(id)arg2 sortDescriptors:(id)arg3 restrictToNumberOfElements:(unsigned long long)arg4 identifierKey:(id)arg5;
- (id)dictionaryValuesFromManagedObjects:(id)arg1;
- (id)dictionaryValueFromManagedObject:(id)arg1;
- (id)databasePropertyForKey:(id)arg1;
- (void)setDatabaseProperty:(id)arg1 forKey:(id)arg2;
- (void)setValue:(id)arg1 forKey:(id)arg2 entry:(id)arg3;
- (void)deleteAllMatchingEntries:(id)arg1;
- (void)deleteAllElements;
- (void)deleteEntry:(id)arg1;
- (void)addEntry:(id)arg1;
- (id)searchResultsWithValueDictionary:(id)arg1 managedObjectContext:(id)arg2 sortDescriptors:(id)arg3;
- (id)searchResultsWithValueDictionary:(id)arg1 sortDescriptors:(id)arg2;
- (id)searchResultsWithValueDictionary:(id)arg1;
- (_Bool)dictionaryEntryHasAllRequiredKeys:(id)arg1;

@end

