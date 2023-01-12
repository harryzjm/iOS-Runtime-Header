//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSManagedObjectContext, NSManagedObjectModel, NSPersistentStoreCoordinator, NSString;

@interface NSPersistentContainer : NSObject
{
    NSArray *_storeDescriptions;
    NSString *_name;
    NSManagedObjectContext *_viewContext;
    NSPersistentStoreCoordinator *_storeCoordinator;
}

+ (id)_newModelForName:(id)arg1;
+ (id)defaultDirectoryURL;
+ (id)persistentContainerWithName:(id)arg1 managedObjectModel:(id)arg2;
+ (id)persistentContainerWithName:(id)arg1;
+ (Class)persistentStoreDescriptionClass;
+ (id)persistentContainerUsingCachedModelWithPath:(id)arg1;
+ (id)persistentContainerWithPath:(id)arg1 managedObjectModel:(id)arg2;
+ (id)persistentContainerWithPath:(id)arg1 modelNamed:(id)arg2;
+ (id)persistentContainerWithPath:(id)arg1;
@property(readonly) NSPersistentStoreCoordinator *persistentStoreCoordinator; // @synthesize persistentStoreCoordinator=_storeCoordinator;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
- (void)performBackgroundTask:(CDUnknownBlockType)arg1;
- (id)newBackgroundContext;
- (void)_loadStoreDescriptions:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)loadPersistentStoresWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1 managedObjectModel:(id)arg2;
- (id)initWithName:(id)arg1;
@property(readonly) NSManagedObjectModel *managedObjectModel;
- (id)init;
@property(readonly) NSManagedObjectContext *viewContext; // @synthesize viewContext=_viewContext;
@property(copy) NSArray *persistentStoreDescriptions;
- (_Bool)load:(id *)arg1;

@end
