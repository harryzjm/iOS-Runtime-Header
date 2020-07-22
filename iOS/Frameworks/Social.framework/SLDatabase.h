//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext, NSManagedObjectModel, NSPersistentStoreCoordinator, NSString;

@interface SLDatabase : NSObject
{
    NSString *_modelPath;
    NSString *_storePath;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    NSManagedObjectContext *_managedObjectContext;
    NSManagedObjectModel *_managedObjectModel;
}

- (void).cxx_destruct;
- (void)_removeFilesAtURL:(id)arg1 forStoreCoordinator:(id)arg2;
- (id)_managedObjectModel;
- (id)_persistentStoreCoordinator;
- (void)_setUpManagedObjectContext;
- (_Bool)save:(id *)arg1;
- (id)newObjectForEntityNamed:(id)arg1;
- (id)fetchObjectsForEntityNamed:(id)arg1 withPredicate:(id)arg2;
- (id)initWithStoreName:(id)arg1 modelPath:(id)arg2;

@end
