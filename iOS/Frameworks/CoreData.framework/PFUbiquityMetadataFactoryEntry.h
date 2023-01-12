//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSPersistentStore, NSPersistentStoreCoordinator, PFUbiquityLocation, PFUbiquityMetadataFactoryFilePresenter;

__attribute__((visibility("hidden")))
@interface PFUbiquityMetadataFactoryEntry : NSObject
{
    PFUbiquityLocation *_metadataStoreFileLocation;
    NSPersistentStoreCoordinator *_psc;
    NSPersistentStore *_store;
    PFUbiquityMetadataFactoryFilePresenter *_filePresenter;
}

- (id)description;
- (void)dealloc;
- (id)initWithMetadataStoreFileLocation:(id)arg1;
- (id)init;

@end
