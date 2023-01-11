//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AXSSPunctuationEntryCloudKitHelper, AXSSPunctuationGroupCloudKitHelper, NSArray;

@interface AXSSPunctuationManager
{
    AXSSPunctuationEntryCloudKitHelper *_punctuationEntryCloudKitHelper;
    AXSSPunctuationGroupCloudKitHelper *_punctuationGroupCloudKitHelper;
    _Bool _finishedInitialization;
    _Bool _cloudKitSync;
    _Bool _cloudKitPushInSameProcess;
}

+ (id)sharedDatabase;
+ (void)initialize;
+ (void)setOverrideDatabasePath:(id)arg1;
+ (id)overrideDatabasePath;
- (void).cxx_destruct;
@property(nonatomic) _Bool cloudKitPushInSameProcess; // @synthesize cloudKitPushInSameProcess=_cloudKitPushInSameProcess;
@property(nonatomic) _Bool cloudKitSync; // @synthesize cloudKitSync=_cloudKitSync;
- (id)nonePunctuationGroup;
- (id)somePunctuationGroup;
- (id)allPunctuationGroup;
- (void)removeEntry:(id)arg1;
- (void)updateEntry:(id)arg1 fromCloudKit:(_Bool)arg2;
- (void)updateEntry:(id)arg1;
- (long long)stringToRule:(id)arg1;
- (id)ruleToString:(long long)arg1;
- (id)punctuationGroupForUUID:(id)arg1;
- (id)punctuationEntryForUUID:(id)arg1;
- (void)_filterAutoswitchContexts:(id)arg1 punctuationGroupsForContexts:(id)arg2;
@property(readonly, nonatomic) NSArray *punctuationGroups;
- (id)punctuationGroupsForContexts;
- (id)_punctuationGroupFromManagedObject:(id)arg1;
- (id)_punctuationEntryFromManagedObject:(id)arg1;
- (void)removePunctuationGroup:(id)arg1;
- (void)updatePunctuationGroup:(id)arg1 fromCloudKit:(_Bool)arg2;
- (void)updatePunctuationGroup:(id)arg1;
- (id)punctuationEntryObjectFromLocalObjects:(id)arg1;
- (void)importPunctuationGroup:(id)arg1;
- (id)_punctuationGroupForEntry:(id)arg1;
- (id)mostBasePunctuationGroupForGroup:(id)arg1;
- (id)parentPunctuationGroup:(id)arg1;
- (void)removeCloudRecordForPurge:(id)arg1;
- (void)removeAllRecordsForPurge;
- (id)cloudRecordsToPurge:(id)arg1;
- (void)addCloudRecordToPurge:(id)arg1 recordEntityType:(id)arg2;
- (_Bool)isBasePunctuationGroup:(id)arg1;
- (_Bool)_saveIfPossible;
- (void)_setupDatabase;
- (void)userAuthChanged;
- (id)_databaseFilePath;
- (id)_databaseDirectoryPath;
- (id)nextDefaultGroupName;
- (void)_managedObjectChanged:(id)arg1;
- (void)_cloudKitUpdated:(id)arg1;
- (_Bool)isProtectedDataAvailable;
- (void)_updateCloudKitHelpers;
- (void)_initializeCloudKitHelpers;
- (id)punctuationEntriesForGroupUUID:(id)arg1;
- (void)_initializeSystemGroups;
- (void)_initializeDatabaseStartup;
- (id)init;

@end
