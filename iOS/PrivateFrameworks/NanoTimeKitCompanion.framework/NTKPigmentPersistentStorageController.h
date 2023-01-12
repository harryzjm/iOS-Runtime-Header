//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface NTKPigmentPersistentStorageController : NSObject
{
    NSObject<OS_dispatch_queue> *_privateQueue;
    NSString *_rootDirectory;
}

+ (id)perDeviceFolder;
+ (id)globalStoresFolder;
+ (id)syncStoresFolder;
+ (id)faceColorRootFolder;
- (void).cxx_destruct;
- (id)serializeFacePigmentSet:(id)arg1;
- (id)readSharedCollectionsFromData:(id)arg1;
- (id)readPigmentSetFromData:(id)arg1 sharedCollections:(id)arg2;
- (_Bool)createFolderIfNeeded:(id)arg1;
- (id)colorDomainFilePath:(id)arg1 deviceUUID:(id)arg2;
- (id)colorSyncFolderPathWithDeviceUUID:(id)arg1;
- (_Bool)createColorSyncFolderIfNeededForDeviceUUID:(id)arg1;
- (id)transactionLockerFileNameForDeviceUUID:(id)arg1;
- (id)device;
- (void)startTransactionForDeviceUUID:(id)arg1;
- (void)deleteContent;
- (void)resetCache;
- (void)closeTransactionForDeviceUUID:(id)arg1;
- (void)persistSharedCollectionsData:(id)arg1 deviceUUID:(id)arg2;
- (void)persistSharedCollections:(id)arg1 deviceUUID:(id)arg2;
- (void)persistFacePigmentSet:(id)arg1 deviceUUID:(id)arg2;
- (void)_writeData:(id)arg1 toFile:(id)arg2;
- (void)persistFacePigmentSetData:(id)arg1 domain:(id)arg2 deviceUUID:(id)arg3;
- (id)_sharedCollections;
- (id)sharedCollections;
- (id)facePigmentSetForDomain:(id)arg1 sharedCollections:(id)arg2;
- (id)initWithRootDirectory:(id)arg1;
- (id)init;

@end
